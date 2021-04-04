cmake_minimum_required(VERSION 3.1)

project(CPPToolingExample)

add_subdirectory(Demo)
add_subdirectory(Library)

include(CTest)
enable_testing()
add_subdirectory(Tests)