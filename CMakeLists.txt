project(cmaketest)
add_executable(main index.cpp)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall") #コンパイラ引数 warningを出すように
