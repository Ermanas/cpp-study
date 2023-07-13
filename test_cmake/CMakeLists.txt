cmake_minimum_required(VERSION 3.1)

project(test_cmake)

# add_compile_options(-std=c++11) // this will effect all targets
set(CMAKE_CXX_STANDARD 11)

if(NOT CMAKE_BUILD_TYPE )
set(CMAKE_BUILD_TYPE Release) # Fastest without debug symbols and extra things in the binary.
endif()

# Set additional flags.
set( CMAKE_CXX_FLAGS "-Wall -Wextra ")
set( CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set( CMAKE_CXX_FLAGS_RELEASE "-O3")

# Set your header file location
include_directories(${PROJECT_SOURCE_DIR}/include)

# Set executable and libarary folder locations
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
# STATIC Library Files
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
# SHARED Library Files
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

# Compiling and Creating Libraries
add_library(SumVec ${PROJECT_SOURCE_DIR}/src/SumVec.cpp)
add_library(MultiVec ${PROJECT_SOURCE_DIR}/src/MultiVec.cpp)

# Compiling and creating executables
add_executable(main ${PROJECT_SOURCE_DIR}/src/main.cpp)

# Linking the executables with the specified libraries
target_link_libraries(main SumVec MultiVec)

# Sub Directories
enable_testing()
add_subdirectory(${PROJECT_SOURCE_DIR}/tests)

# Show messages in the terminal
message(STATUS "Thank you for using CMake :)")
