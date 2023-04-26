cmake_minimum_required(VERSION 3.26)

project(cmaketest)

#g++でコンパイル
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_C_COMPILER clang)

#compile_commands.jsonを生成する
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

#warning表示
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

#c++17を使用
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

#Debug/Releaseのどちらのビルドかコンパイラにわたす
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DBUILD_TYPE=\\\"Debug\\\"")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DBUILD_TYPE=\\\"Release\\\"")

include_directories("includes")
add_library(temp STATIC temp.cpp)
add_executable(main index.cpp)
target_link_libraries(main temp)
