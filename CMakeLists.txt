# ------------- BASICS -------------

cmake_minimum_required(VERSION 2.8.4)
project(Muffin)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# ------------- FOLDERS -------------

set(LIB_FOLDER "${PROJECT_SOURCE_DIR}/lib")
set(INCLUDE_FOLDER "${PROJECT_SOURCE_DIR}/src/include")
set(SOURCE_FOLDER "${PROJECT_SOURCE_DIR}/src/source")
set(TEST_FOLDER "${PROJECT_SOURCE_DIR}/test/source")

# ------------ LIBRARIES ------------

include_directories("${LIB_FOLDER}/Catch/include")
add_subdirectory(${LIB_FOLDER}/Catch/projects/CMake)

include_directories("${LIB_FOLDER}/RxCpp/Rx/v2/src")
add_subdirectory(${LIB_FOLDER}/RxCpp/projects/CMake)

include_directories("${PROJECT_SOURCE_DIR}/lib/SQLiteCpp/include")
add_subdirectory(${LIB_FOLDER}/SQLiteCpp)

# ------------- SOURCE -------------

set(SOURCE_FILES
    ${INCLUDE_FOLDER}/muffin/api/Simple.hpp
    ${SOURCE_FOLDER}/muffin/Simple.cpp
)

include_directories("${INCLUDE_FOLDER}")
add_library(Muffin ${SOURCE_FILES})
target_link_libraries(Muffin SQLiteCpp)

# -------------- TEST --------------

set(TEST_FILES
    ${TEST_FOLDER}/SpecRunner.cpp
    ${TEST_FOLDER}/SimpleSpec.cpp
)

enable_testing(true)
add_executable(Specs ${TEST_FILES})
target_link_libraries(Specs Muffin)
add_test(RunSpecs Specs)
