cmake_minimum_required(VERSION 3.10)
project(biblioteka)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)  # исправлено

include_directories(include)

set(PROGRAM_NAME biblioteka_program)

add_executable(${PROGRAM_NAME}
    src/main.cpp 
    src/Class1.cpp
    src/Class2.cpp
    src/Class3.cpp

)