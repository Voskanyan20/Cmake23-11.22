cmake_minimum_required(VERSION 2.8)

project(MyFactor)

include_directories(include)
add_subdirectory(factorial)
add_subdirectory(bigNum)
set(SRC src/main.cpp)
set(PROJECT_LINK_LIBS libMyLib.a)

add_executable(${PROJECT_NAME} ${SRC})
target_link_libraries(${PROJECT_NAME} MyFact MyBigNum) 
