add_subdirectory(/usr/src/gtest ${PROJECT_BINARY_DIR}/gtest)

include(CTest)

add_executable(test_SumVec test_SumVec.cpp)

target_link_libraries(test_SumVec
                      SumVec           # Library we're testing
                      gtest gtest_main # GTest Libraries
                      )

add_test(test_SumVec ${PROJECT_SOURCE_DIR}/bin/test_SumVec)