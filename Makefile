all:
	protoc -I=./src/proto --cpp_out=./src/proto ./src/proto/libfm.proto
	g++ -I ./src/proto -I ./src/fm_core ./src/proto/libfm.pb.cc -o ./bin/libfm.pb.o -lprotobuf -pthread
	cd src/libfm; make all

libFM:
	cd src/libfm; make libFM

clean:
	cd src/libfm; make clean



