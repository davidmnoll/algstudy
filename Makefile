.ONESHELL: 

build:
	mkdir -p build; cd build; cmake ..; make
clean: 
	rm -rf ./build
rebuild: clean build
test: clean build
	./build/test/testAlgs