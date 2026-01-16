
cmake_minimum_required(VERSION 3.10)

# my project name
project(calc-cli VERSION 1.5)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#calc already a thing that why i use pcalc
add_executable(pcalc main.cpp laws.cpp solver.cpp)
target_include_directories(pcalc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
  install(TARGETS pcalc DESTINATION bin)
