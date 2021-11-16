cmake_minimum_required(VERSION 3.10.0)

project(UsingCustomLibraries)
add_executable(${PROJECT_NAME} main.cpp)

# Find the custom library
add_subdirectory(Adder)

target_link_directories(${PROJECT_NAME} PRIVATE Adder)
target_include_directories(${PROJECT_NAME} PUBLIC Adder)

target_link_libraries(${PROJECT_NAME} adder)
