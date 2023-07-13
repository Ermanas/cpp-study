cmake_minimum_required(VERSION 3.0)
project(test_cmake_2)

message(STATUS "Welcome to CMakeLists file ... You're in the ${PROJECT_SOURCE_DIR}")

# Set your header file location
include_directories(${PROJECT_SOURCE_DIR}/include)

# Set executable and libarary folder locations
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
# STATIC Library Files
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
# SHARED Library Files
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

add_subdirectory(${PROJECT_SOURCE_DIR}/src)

enable_testing()
add_subdirectory(${PROJECT_SOURCE_DIR}/tests)

