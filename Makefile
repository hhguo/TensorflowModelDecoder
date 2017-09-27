### Makefile for building tensorflow application
# link pre-build libtensorflow_cc.so to your personal build project
# param:
# INCLUDES: -I, remember to include eigen3 and tf libs
# LDLIBS : -L path of folder where libtensorflow_cc.so exist
# ACTUAL_LIBS: -l   name of actual lib(name).so


SOURCE_DIR = .
BIN_DIR = .

CPP     = gcc -std=c++11
LDFLAGS = -g -Wall -Wshadow -Wno-sign-compare -w 
INCLUDES = -I/home/disk2/hhguo/tools/include/tensorflow \
	-I/home/disk2/hhguo/tools/include/tensorflow/third_party/eigen3	
ACTUAL_LIBS = -L/home/disk2/hhguo/tools/lib -ltensorflow_cc

INPUT_FILE = $(SOURCE_DIR)/tensorflow_model_decoder_main.cpp \
	$(SOURCE_DIR)/tensorflow_model_decoder.cpp
OBJET_FILE = $(BIN_DIR)/tensorflow_model_decoder

tfcpp_demo:
	$(CPP) -o $(OBJET_FILE) $(INPUT_FILE) $(INCLUDES) $(LDFLAGS) $(LDLIBS) $(ACTUAL_LIBS) -lstdc++
