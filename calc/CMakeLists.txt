cmake_minimum_required(VERSION 2.8)

project(MyCalc)

include_directories(include)
add_subdirectory(calc)
set(SRC src/main.cpp)
set(PROJECT_LINK_LIBS libMyLib.a)

add_executable(${PROJECT_NAME} ${SRC})
target_link_libraries(${PROJECT_NAME} MySum) 
