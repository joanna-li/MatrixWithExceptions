cmake_minimum_required(VERSION 3.14)
project(MatrixTests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD ${MATRIX_CXX_STANDARD})

add_library(MatrixTests INTERFACE)
target_sources(MatrixTests INTERFACE
        TestMatrix.cpp TestMatrix.h
        ConstructorTests.cpp
        MemberTests.cpp
        TestMatrixAndScalar.cpp TestMatrixAndScalar.h
        TestMatrixAndMatrix.cpp TestMatrixAndMatrix.h
        TestMatrixExceptions.cpp TestMatrixExceptions.h)

target_link_libraries(MatrixTests INTERFACE gtest gmock MatrixClass)
target_include_directories(MatrixTests INTERFACE . ..)

set(INPUT_MATRIX_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Inputs)
set(SOL_MATRIX_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Answers)
set(SOL_MATRIX_AND_SCALAR_DIR ${SOL_MATRIX_DIR}/MatrixAndScalar)
set(SOL_MATRIX_AND_MATRIX_DIR ${SOL_MATRIX_DIR}/MatrixAndMatrix)

#scalar answer directories
set(SOL_MATRIX_SCALAR_ADD ${SOL_MATRIX_AND_SCALAR_DIR}/Plus)
set(SOL_MATRIX_SCALAR_MINUS ${SOL_MATRIX_AND_SCALAR_DIR}/Minus)
set(SOL_MATRIX_SCALAR_MULTIPLY ${SOL_MATRIX_AND_SCALAR_DIR}/Multiply)
set(SOL_MATRIX_SCALAR_DIVIDE ${SOL_MATRIX_AND_SCALAR_DIR}/Divide)
set(SOL_SCALAR_MATRIX_MINUS ${SOL_MATRIX_AND_SCALAR_DIR}/ScalarMinus)

#MATRIX answer directories
set(SOL_MATRIX_MATRIX_ADD ${SOL_MATRIX_AND_MATRIX_DIR}/Plus)
set(SOL_MATRIX_MATRIX_MINUS ${SOL_MATRIX_AND_MATRIX_DIR}/Minus)
set(SOL_MATRIX_MATRIX_MULTIPLY ${SOL_MATRIX_AND_MATRIX_DIR}/Multiply)


#make the directories visible to the C++ code
target_compile_definitions(MatrixTests INTERFACE
        #input
        INPUT_MATRIX_DIR="${INPUT_MATRIX_DIR}"

        #MATRIX and scalar
        SOL_MATRIX_SCALAR_ADD="${SOL_MATRIX_SCALAR_ADD}"
        SOL_MATRIX_SCALAR_MINUS="${SOL_MATRIX_SCALAR_MINUS}"
        SOL_MATRIX_SCALAR_MULTIPLY="${SOL_MATRIX_SCALAR_MULTIPLY}"
        SOL_MATRIX_SCALAR_DIVIDE="${SOL_MATRIX_SCALAR_DIVIDE}"
        SOL_SCALAR_MATRIX_MINUS="${SOL_SCALAR_MATRIX_MINUS}"

        #MATRIX and MATRIX
        SOL_MATRIX_MATRIX_ADD="${SOL_MATRIX_MATRIX_ADD}"
        SOL_MATRIX_MATRIX_MINUS="${SOL_MATRIX_MATRIX_MINUS}"
        SOL_MATRIX_MATRIX_MULTIPLY="${SOL_MATRIX_MATRIX_MULTIPLY}"
        )
