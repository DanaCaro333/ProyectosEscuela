cmake_minimum_required(VERSION 3.0.0)
project(Practica01 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Practica01 main.cpp AnalizadorSintactico.cpp AnalizadorLexico.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
