cmake_minimum_required(VERSION 3.14)
project(MatrixClass LANGUAGES CXX)
set(CMAKE_CXX_STANDARD ${MATRIX_CXX_STANDARD})

add_library(MatrixClass STATIC
        Matrix.h Matrix.cpp
        Vector.h
        Vector.cpp MatrixTypeDefs.h
        )
target_include_directories(MatrixClass PUBLIC .)
add_subdirectory(Exception)
target_link_libraries(MatrixClass PUBLIC MatrixException)
target_compile_options(MatrixClass
        PRIVATE ${MATRIX_PRIVATE_COMPILE_FLAGS}
        PUBLIC ${MATRIX_PUBLIC_COMPILE_FLAGS})
