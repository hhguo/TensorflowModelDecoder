#ifndef TENSORFLOW_MODEL_DECODER_H_
#define TENSORFLOW_MODEL_DECODER_H_

#include <iostream>
#include <fstream>

#include "tensorflow/core/public/session.h"  
#include "tensorflow/core/platform/env.h" 

using namespace tensorflow;

class TensorflowModelDecoder {
private:
  Session *session_;
  GraphDef graphdef;
public:
  TensorflowModelDecoder() {
    NewSession(SessionOptions(), &session_);
  }
  ~TensorflowModelDecoder() {}

  bool Load(const std::string model_path);

  bool Predict(const std::vector<std::pair<std::string, Tensor>> &input,  
               const std::string &output_node,
               std::vector<Tensor> *output);
};

#endif // TENSORFLOW_MODEL_DECODER_H_
