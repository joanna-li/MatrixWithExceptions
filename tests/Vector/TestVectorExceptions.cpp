//
// Created by mfbut on 5/15/2019.
//
#include <type_traits>
#include <Exception/MatrixOutOfBoundsError.h>
#include "gtest/gtest.h"
#include "TestVectorExceptions.h"
#include "VectorDimensionMismatchError.h"
#include "VectorOutOfBoundsError.h"
#include "DivideByZeroError.h"

namespace VectorTesting {

  TestVectorExceptions::TestVectorExceptions() :
      TestVector(), short_vec(3), long_vec(10) {

  }

  TEST_F(TestVectorExceptions, MatrixErrorInheritsFromStdException) {
    const bool inheritsFromStdExcept = std::is_base_of<std::exception, Matrix::MatrixError>::value;
    ASSERT_TRUE(inheritsFromStdExcept);
  }

  TEST_F(TestVectorExceptions, OutOfBoundsErrorInheritsFromMatrixError) {
    const bool inheritsFromMatrixError = std::is_base_of<Matrix::MatrixError, Matrix::OutOfBoundsError>::value;
    ASSERT_TRUE(inheritsFromMatrixError);
  }

  TEST_F(TestVectorExceptions, DimensionMismatchErrorInheritsFromMatrixError) {
    const bool inheritsFromMatrixError = std::is_base_of<Matrix::DimensionMismatchError, Matrix::VectorDimensionMismatchError>::value;
    ASSERT_TRUE(inheritsFromMatrixError);
  }

  TEST_F(TestVectorExceptions, VectorOutOfBoundsErrorInheritsFromOutOfBoundsError) {
    const bool inheritsFromOutOfBoundsError = std::is_base_of<Matrix::OutOfBoundsError, Matrix::VectorOutOfBoundsError>::value;
    ASSERT_TRUE(inheritsFromOutOfBoundsError);
  }

  TEST_F(TestVectorExceptions, VectorDimensionMisMatchErrorInheritsFromDimensionMisMatchError) {
    const bool inheritsFromOutOfBoundsError = std::is_base_of<Matrix::DimensionMismatchError, Matrix::VectorDimensionMismatchError>::value;
    ASSERT_TRUE(inheritsFromOutOfBoundsError);
  }


  TEST_F(TestVectorExceptions, DivideByZeroInheritsFromMatrixError) {
    const bool inheritsFromMatrixError = std::is_base_of<Matrix::MatrixError, Matrix::DivideByZeroError>::value;
    ASSERT_TRUE(inheritsFromMatrixError);
  }





  TEST_F(TestVectorExceptions, Vector_DivideByZero) {
    Matrix::Vector v(3, 9);
    ASSERT_THROW(v / 0, Matrix::DivideByZeroError);
  }

  TEST_F(TestVectorExceptions, Vector_DimensionMismatchError) {

    //short to long
    ASSERT_THROW(short_vec += long_vec, Matrix::VectorDimensionMismatchError);
    ASSERT_THROW(short_vec + long_vec, Matrix::VectorDimensionMismatchError);

    ASSERT_THROW(short_vec -= long_vec, Matrix::VectorDimensionMismatchError);
    ASSERT_THROW(short_vec - long_vec, Matrix::VectorDimensionMismatchError);

    ASSERT_THROW(short_vec *= long_vec, Matrix::VectorDimensionMismatchError);
    ASSERT_THROW(short_vec * long_vec, Matrix::VectorDimensionMismatchError);

    //long to short
    ASSERT_THROW(long_vec += short_vec, Matrix::VectorDimensionMismatchError);
    ASSERT_THROW(long_vec + short_vec, Matrix::VectorDimensionMismatchError);

    ASSERT_THROW(long_vec -= short_vec, Matrix::VectorDimensionMismatchError);
    ASSERT_THROW(long_vec - short_vec, Matrix::VectorDimensionMismatchError);

    ASSERT_THROW(long_vec *= short_vec, Matrix::VectorDimensionMismatchError);
    ASSERT_THROW(long_vec * short_vec, Matrix::VectorDimensionMismatchError);
  }

  TEST_F(TestVectorExceptions, Vector_OutOfBoundsError) {
    ASSERT_THROW(short_vec.at(-2), Matrix::VectorOutOfBoundsError);
    ASSERT_THROW(short_vec[-1], Matrix::VectorOutOfBoundsError);
    ASSERT_THROW(short_vec.at(3), Matrix::VectorOutOfBoundsError);
    ASSERT_THROW(short_vec[3], Matrix::VectorOutOfBoundsError);
    ASSERT_THROW(short_vec.at(8), Matrix::VectorOutOfBoundsError);
    ASSERT_THROW(short_vec[10], Matrix::VectorOutOfBoundsError);
  }

}
