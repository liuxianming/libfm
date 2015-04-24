all:
	protoc -I=./src/proto --cpp_out=./src/proto ./src/proto/libfm.proto
# Compile the proto file
	@mkdir -p bin/proto
	g++ -c -I./ -I./src/proto ./src/proto/libfm.pb.cc -o ./bin/proto/libfm.pb.o -L/usr/local/lib -lprotobuf -pthread

	cd src/libfm; make all

libFM:
	cd src/libfm; make libFM

clean:
	cd src/libfm; make clean



