BUILD_DIR=build

all: clean build test

clean:
	rm -rf $(BUILD_DIR)

build: cmake
	cmake -H. -B$(BUILD_DIR) && \
	$(MAKE) -C $(BUILD_DIR)

test: build
	cd build && \
	ctest -v && \
	cd ..

cmake:
	@which cmake > /dev/null
