cmake_minimum_required(VERSION 3.14)
project(MatrixException LANGUAGES CXX)
set(CMAKE_CXX_STANDARD ${MATRIX_CXX_STANDARD})

add_library(MatrixException STATIC
        MatrixError.h OutOfBoundsError.h VectorOutOfBoundsError.cpp VectorOutOfBoundsError.h DimensionMismatchError.h MatrixOutOfBoundsError.cpp MatrixOutOfBoundsError.h MatrixError.cpp VectorDimensionMismatchError.cpp VectorDimensionMismatchError.h MatrixDimensionMismatchError.cpp MatrixDimensionMismatchError.h MatrixInnerDimensionMismatchError.cpp MatrixInnerDimensionMismatchError.h DivideByZeroError.cpp DivideByZeroError.h)
target_include_directories(MatrixException PUBLIC .)
target_link_libraries(MatrixException PUBLIC MatrixClass)
target_compile_options(MatrixException
        PRIVATE ${MATRIX_PRIVATE_COMPILE_FLAGS}
        PUBLIC ${MATRIX_PUBLIC_COMPILE_FLAGS})
