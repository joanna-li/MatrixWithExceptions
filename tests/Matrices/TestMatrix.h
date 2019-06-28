//
// Created by mfbut on 5/7/2019.
//

#ifndef MATRIX_TESTMATRIX_H
#define MATRIX_TESTMATRIX_H
#include <vector>
#include <utility>
#include <string>
#include "gtest/gtest.h"
#include "Matrix.h"
namespace MatrixTesting {
  using matVec = std::vector<std::vector<double>>;
  using testContainer = std::vector<std::pair<Matrix::Matrix, matVec>>;

  class TestMatrix : public ::testing::Test {
   public:
    static matVec loadMatrixFromFile(const std::string& fileName);
    static matVec loadSolutionFromFile(const std::string& fileName);
  };
  testing::AssertionResult operator==(const Matrix::Matrix& matrix, const matVec& solution);
  testing::AssertionResult operator==(const matVec& solution, const Matrix::Matrix& matrix);

}

#endif //MATRIX_TESTMATRIX_H
