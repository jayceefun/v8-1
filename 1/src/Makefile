
SRC = $(wildcard *.cc)

all: $(SRC)
	g++ ../../v8/out/native/libv8_snapshot.a ../../v8/out/native/libv8.dylib $^ -I../../v8/include -L../../v8/src -o out


.PHONY: all
