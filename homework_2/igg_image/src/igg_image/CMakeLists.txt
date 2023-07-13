# ################### Import the 'io_tools' library here ########################
find_library(LIBIOTOOLS NAMES iotools libio_tools.so PATHS ${LIBRARY_OUTPUT_PATH})

# ################### Create a library 'image' below this line ##################
add_library(image ${PROJECT_SOURCE_DIR}/src/igg_image/image.cpp)
target_link_libraries(image ${LIBIOTOOLS})

add_executable(simple_test simple_test.cpp)
target_link_libraries(simple_test image ${LIBIOTOOLS})

# Show messages in the terminal
message(STATUS "Thank you for using CMake :)")
