//
// Created by mfbut on 5/15/2019.
//

#include <type_traits>
#include "TestMatrixExceptions.h"
#include "Matrix.h"
#include "MatrixOutOfBoundsError.h"
#include "MatrixDimensionMismatchError.h"
#include "MatrixInnerDimensionMismatchError.h"
#include "DivideByZeroError.h"

namespace MatrixTesting {

  TEST_F(TestMatrixExceptions, MatrixOutOfBoundsErrorInheritsFromOutOfBoundsError){
    const bool inheritsFromOutOfBoundsError = std::is_base_of<Matrix::OutOfBoundsError, Matrix::MatrixOutOfBoundsError>::value;
    ASSERT_TRUE(inheritsFromOutOfBoundsError);
  }

  TEST_F(TestMatrixExceptions, MatrixDimensionMismatchErrorInheritsFromDimensionMismatchError){
    const bool inheritsFromDimensionMismatchError = std::is_base_of<Matrix::DimensionMismatchError, Matrix::MatrixDimensionMismatchError>::value;
    ASSERT_TRUE(inheritsFromDimensionMismatchError);
  }

  TEST_F(TestMatrixExceptions, MatrixInnerDimensionMismatchErrorInheritsFromMatrixDimensionMismatchError){
    const bool inheritsFromMatrixDimensionMismatchError = std::is_base_of<Matrix::MatrixDimensionMismatchError, Matrix::MatrixInnerDimensionMismatchError>::value;
    ASSERT_TRUE(inheritsFromMatrixDimensionMismatchError);
  }


  TEST_F(TestMatrixExceptions, DivisionByZero){
    Matrix::Matrix mat(3,4,7);
    ASSERT_THROW(mat/0, Matrix::DivideByZeroError);
  }

  TEST_F(TestMatrixExceptions, Matrix_DimensionMismatchError) {
    Matrix::Matrix threeFour(3,4), fourThree(4,3);
    //forwards
    ASSERT_THROW(threeFour += fourThree, Matrix::MatrixDimensionMismatchError);
    ASSERT_THROW(threeFour + fourThree, Matrix::MatrixDimensionMismatchError);

    ASSERT_THROW(threeFour -= fourThree, Matrix::MatrixDimensionMismatchError);
    ASSERT_THROW(threeFour - fourThree, Matrix::MatrixDimensionMismatchError);

    //backwards
    ASSERT_THROW(fourThree += threeFour, Matrix::MatrixDimensionMismatchError);
    ASSERT_THROW(fourThree + threeFour, Matrix::MatrixDimensionMismatchError);

    ASSERT_THROW(fourThree -= threeFour, Matrix::MatrixDimensionMismatchError);
    ASSERT_THROW(fourThree - threeFour, Matrix::MatrixDimensionMismatchError);
  }

  TEST_F(TestMatrixExceptions, Matrix_OutOfBoundsError) {
    Matrix::Matrix threeFour(3, 4);

    ASSERT_THROW(threeFour.at(-2), Matrix::MatrixOutOfBoundsError);
    ASSERT_THROW(threeFour[-1], Matrix::MatrixOutOfBoundsError);
    ASSERT_THROW(threeFour.at(3), Matrix::MatrixOutOfBoundsError);
    ASSERT_THROW(threeFour[3], Matrix::MatrixOutOfBoundsError);
    ASSERT_THROW(threeFour.at(8), Matrix::MatrixOutOfBoundsError);
    ASSERT_THROW(threeFour[10], Matrix::MatrixOutOfBoundsError);

    ASSERT_THROW(threeFour.at(-1, 1), Matrix::MatrixOutOfBoundsError);
    ASSERT_THROW(threeFour.at(1, -1), Matrix::MatrixOutOfBoundsError);
    ASSERT_THROW(threeFour.at(3, 1), Matrix::MatrixOutOfBoundsError);
    ASSERT_THROW(threeFour.at(1, 4), Matrix::MatrixOutOfBoundsError);
    ASSERT_THROW(threeFour.at(3, 4), Matrix::MatrixOutOfBoundsError);
    ASSERT_THROW(threeFour.at(5, 7), Matrix::MatrixOutOfBoundsError);
    ASSERT_THROW(threeFour.at(-1, -21), Matrix::MatrixOutOfBoundsError);
  }
}
