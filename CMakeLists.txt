cmake_minimum_required(VERSION 3.16)
project(MultiplyTest LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

find_package(GTest REQUIRED)

add_executable(div_test div_test.cpp)

target_link_libraries(div_test
 PRIVATE
  GTest::GTest)

add_test(div_gtest div_test)
