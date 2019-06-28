cmake_minimum_required(VERSION 3.14)
project(Matrix LANGUAGES CXX)

set(MATRIX_PRIVATE_COMPILE_FLAGS -Wall -Werror)
set(MATRIX_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD ${MATRIX_CXX_STANDARD})

add_subdirectory(Matrix)
add_subdirectory(tests)



