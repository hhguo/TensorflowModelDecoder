#include "tensorflow_model_decoder.h" 

// @brief: 从model_path 加载模型，在Session中创建图  
// ReadBinaryProto() 函数将model_path的protobuf文件读入一个tensorflow::GraphDef的对象  
// session->Create(graphdef) 函数在一个Session下创建了对应的图;  
  
bool TensorflowModelDecoder::Load(const std::string model_path) {  
  //Read the pb file into the grapgdef member  
  tensorflow::Status status_load = 
    ReadBinaryProto(Env::Default(), model_path, &graphdef);
  if (!status_load.ok()) {  
    std::cout << "ERROR: Loading model failed..." << model_path << std::endl;  
    std::cout << status_load.ToString() << "\n";  
    return false;  
  }  
  // Add the graph to the session  
  tensorflow::Status status_create = session->Create(graphdef);  
  if (!status_create.ok()) {  
    std::cout << "ERROR: Creating graph in session failed..." << status_create.ToString() << std::endl;  
    return false;  
  }  
  return true;  
} 

bool TensorflowModelDecoder::Predict(
    const std::vector<std::pair<std::string, Tensor>> &input,  
    const std::string &output_node,
    std::vector<Tensor> *outputs) {  
  // @input: vector<pair<string, tensor> >, feed_dict  
  // @output_node: std::string, name of the output node op, defined in the protobuf file  
  Status status = session->Run(input, {output_node},
                               {}, outputs);  
  if (!status.ok()) {  
    std::cout << "ERROR: prediction failed..." << status.ToString() << std::endl;  
    return false; 
  }
  return true;
}
