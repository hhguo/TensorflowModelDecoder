#include "tensorflow_model_decoder.h"

int main(int argc, char **argv) {
  if (argc < 3) {
    return -1;
  }
  char *model_file = argv[1];
  char *input_file = argv[2];
  char *output_file = argv[3];

  std::ifstream fin(input_file);
  std::ofstream fout(output_file);

  TensorflowModelDecoder tmd;
  string input_tensor_name = "input";
  string output_tensor_name = "output";
  
  int row, col;
  fin >> row >> col;
 
  std::vector<std::pair<std::string, Tensor>> input;
  std::vector<tensorflow::Tensor> output;
  Tensor input_tensor(DT_FLOAT,
                      TensorShape({row, col}));
  
  auto x_map = input_tensor.tensor<float, 2>();
  for (size_t i = 0; i < row; ++i) {
    for (size_t j = 0; j < col; ++j) {
      fin >> x_map(i, j);
    }
  }
  input.push_back(std::pair<std::string, Tensor>(input_tensor_name,
                                                 input_tensor));
  tmd.Load(model_file);
  tmd.Predict(input, output_tensor_name, &output);
  
  const Tensor& output_tensor = output[0];

  std::ofstream out_cmp(output_file,
                        std::ios::out | std::ios::binary);
  out_cmp.write(
      reinterpret_cast<const char*>(output_tensor.tensor_data().data()),
      std::streamsize(output_tensor.NumElements() * sizeof(float)));

  return 0;
}
