BUILD_DIR=build

all: build

clean:
	rm -rf $(BUILD_DIR)

build: cmake
	cmake -H. -B$(BUILD_DIR) && \
	$(MAKE) -C $(BUILD_DIR)

cmake:
	@which cmake > /dev/null
