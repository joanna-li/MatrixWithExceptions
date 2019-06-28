cmake_minimum_required(VERSION 3.14)
project(VectorTests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD ${MATRIX_CXX_STANDARD})

add_library(VectorTests INTERFACE)
target_sources(VectorTests INTERFACE
        TestVector.cpp TestVector.h
        ConstructorTests.cpp
        MemberTests.cpp
        TestVectorAndScalar.cpp TestVectorAndScalar.h
        TestVectorAndVector.cpp TestVectorAndVector.h
        TestVectorExceptions.cpp TestVectorExceptions.h)

target_link_libraries(VectorTests INTERFACE gtest gmock MatrixClass)
target_include_directories(VectorTests INTERFACE . ..)

set(INPUT_VECTOR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Inputs)
set(SOL_VECTOR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Answers)
set(SOL_VECTOR_AND_SCALAR_DIR ${SOL_VECTOR_DIR}/VectorAndScalar)
set(SOL_VECTOR_AND_VECTOR_DIR ${SOL_VECTOR_DIR}/VectorAndVector)

#scalar answer directories
set(SOL_VECTOR_SCALAR_ADD ${SOL_VECTOR_AND_SCALAR_DIR}/Plus)
set(SOL_VECTOR_SCALAR_MINUS ${SOL_VECTOR_AND_SCALAR_DIR}/Minus)
set(SOL_VECTOR_SCALAR_MULTIPLY ${SOL_VECTOR_AND_SCALAR_DIR}/Multiply)
set(SOL_VECTOR_SCALAR_DIVIDE ${SOL_VECTOR_AND_SCALAR_DIR}/Divide)
set(SOL_SCALAR_VECTOR_MINUS ${SOL_VECTOR_AND_SCALAR_DIR}/ScalarMinus)

#vector answer directories
set(SOL_VECTOR_VECTOR_ADD ${SOL_VECTOR_AND_VECTOR_DIR}/Plus)
set(SOL_VECTOR_VECTOR_MINUS ${SOL_VECTOR_AND_VECTOR_DIR}/Minus)
set(SOL_VECTOR_VECTOR_MULTIPLY ${SOL_VECTOR_AND_VECTOR_DIR}/Multiply)




#make the directories visible to the C++ code
target_compile_definitions(VectorTests INTERFACE
        #input
        INPUT_VECTOR_DIR="${INPUT_VECTOR_DIR}"

        #vector and scalar
        SOL_VECTOR_SCALAR_ADD="${SOL_VECTOR_SCALAR_ADD}"
        SOL_VECTOR_SCALAR_MINUS="${SOL_VECTOR_SCALAR_MINUS}"
        SOL_VECTOR_SCALAR_MULTIPLY="${SOL_VECTOR_SCALAR_MULTIPLY}"
        SOL_VECTOR_SCALAR_DIVIDE="${SOL_VECTOR_SCALAR_DIVIDE}"
        SOL_SCALAR_VECTOR_MINUS="${SOL_SCALAR_VECTOR_MINUS}"

        #vector and vector
        SOL_VECTOR_VECTOR_ADD="${SOL_VECTOR_VECTOR_ADD}"
        SOL_VECTOR_VECTOR_MINUS="${SOL_VECTOR_VECTOR_MINUS}"
        SOL_VECTOR_VECTOR_MULTIPLY="${SOL_VECTOR_VECTOR_MULTIPLY}"
        )
