cmake_minimum_required(VERSION 3.14)
project(Testing LANGUAGES CXX)

set(CMAKE_CXX_STANDARD ${MATRIX_CXX_STANDARD})

find_package(Threads REQUIRED) #needed to build google test
include(FetchContent) #so we can pull in google test
FetchContent_Declare( #declare information about google test
        googletest #its variable name
        #its location on the internet
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG master #what branch we want
        )

#download google test if we don't have it
FetchContent_GetProperties(googletest)
if (NOT googletest_POPULATED)
    FetchContent_Populate(googletest)
endif ()
#build google test
add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
#bring in the Vector Tests
add_subdirectory(Vector)
add_subdirectory(Matrices)

add_executable(Tester
        main.cpp
        ObjectScalarTestCase.cpp ObjectScalarTestCase.h
        ObjectObjectTestCase.cpp ObjectObjectTestCase.h
        )

target_link_libraries(Tester PRIVATE
        VectorTests
        MatrixTests
        )


add_compile_options(Tester PRIVATE ${MATRIX_PRIVATE_COMPILE_FLAGS})
