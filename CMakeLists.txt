project(cmaketest)
add_executable(main index.cpp)
#warning表示
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

#c++17を使用
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

#Debug/Releaseのどちらのビルドかコンパイラにわたす
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DBUILD_TYPE=\\\"Debug\\\"")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DBUILD_TYPE=\\\"Release\\\"")
