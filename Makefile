### Makefile for building tensorflow application
# link pre-build libtensorflow_cc.so to your personal build project
# param:
# INCLUDES: -I, remember to include eigen3 and tf libs
# LDLIBS : -L path of folder where libtensorflow_cc.so exist
# ACTUAL_LIBS: -l   name of actual lib(name).so

THIRD_PARTY = ./third_party
SOURCE_DIR = ./src
BIN_DIR = .

CXX     = g++-4.8 -std=c++11
LDFLAGS = -g -Wall -Wshadow -Wno-sign-compare -w -O2 #-DEIGEN_USE_MKL_ALL 

INCLUDES = -I$(THIRD_PARTY)/include/tensorflow \
	-I$(THIRD_PARTY)/include/tensorflow/third_party/eigen3	
ACTUAL_LIBS = -L$(THIRD_PARTY)/lib -ltensorflow_cc

INPUT_FILE = $(SOURCE_DIR)/tensorflow_model_decoder_main.cpp \
	$(SOURCE_DIR)/tensorflow_model_decoder.cpp
OBJET_FILE = $(BIN_DIR)/tensorflow_model_decoder

all: tfcpp_demo

tfcpp_demo:
	$(CXX) -o $(OBJET_FILE) $(INPUT_FILE) $(INCLUDES) $(LDFLAGS) $(LDLIBS) $(ACTUAL_LIBS)

clean:
	rm $(OBJET_FILE)
