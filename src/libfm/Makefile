BIN_DIR := ../../bin/

OBJECTS := \
	libfm.o \
	tools/transpose.o \
	tools/convert.o \

LIB_PROTO_DIR=/usr/local/lib/

inc += -I./
inc += -I../proto/
inc += -I../fm_core
libs += -L$(LIB_PROTO_DIR) -lprotobuf -pthread
cpp += -fPIC -Wall
proto_cc += ../proto/libfm.pb.cc

all: libFM transpose convert

libFM: libfm.o
	mkdir -p $(BIN_DIR)
	g++ -O3 $(cpp) $(inc) libfm.o $(proto_cc) -o $(BIN_DIR)libFM $(libs)

%.o: %.cpp
	g++ -O3 $(cpp) $(inc) -c $< -o $@ $(libs)
%.o: %.cc
	g++ -O3 $(cpp) $(inc) -c $< -o $@ $(libs)

clean:	clean_lib
	mkdir -p $(BIN_DIR)
	rm -f $(BIN_DIR)libFM $(BIN_DIR)convert $(BIN_DIR)transpose

clean_lib:
	rm -f $(OBJECTS)


transpose: tools/transpose.o
	mkdir -p $(BIN_DIR)
	g++ -O3 $(inc) tools/transpose.o $(proto_cc) -o $(BIN_DIR)transpose $(libs)

convert: tools/convert.o
	mkdir -p $(BIN_DIR)
	g++ -O3 $(inc) tools/convert.o $(proto_cc) -o $(BIN_DIR)convert $(libs)

