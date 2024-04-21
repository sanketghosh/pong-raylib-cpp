run: build
	@./build/main

build:
	@mkdir build && g++ main.cpp -o ./build/main -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

rebuild:del-build build

del-build:
	@rm -rf ./build
