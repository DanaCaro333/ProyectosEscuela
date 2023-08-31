cmake_minimum_required(VERSION 3.0.0)
project(Practica3 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Practica3 main.cpp)
target_compile_features(Practica3 PRIVATE cxx_std_17)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
