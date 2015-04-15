all:
	protoc -I=./src/proto --cpp_out=./src/fm_core ./src/proto/libfm.proto
	cd src/libfm; make all

libFM:
	cd src/libfm; make libFM

clean:
	cd src/libfm; make clean



