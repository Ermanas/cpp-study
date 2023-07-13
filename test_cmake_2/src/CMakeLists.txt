add_library(hello STATIC hello.cpp)
add_library(blah STATIC blah.cpp)

add_executable(main main.cpp)
target_link_libraries(main hello blah)
