//
// Created by mfbut on 5/7/2019.
//

#include "TestMatrixAndMatrix.h"

namespace MatrixTesting {
  std::vector<ProgramTesting::ObjectObjectTestCase> TestMatrixAndMatrix::plusTestCases;
  std::vector<ProgramTesting::ObjectObjectTestCase> TestMatrixAndMatrix::minusTestCases;
  std::vector<ProgramTesting::ObjectObjectTestCase> TestMatrixAndMatrix::multiplyTestCases;

  void TestMatrixAndMatrix::SetUpTestSuite() {
    plusTestCases = {{INPUT_MATRIX_DIR"/Matrix-1-1.txt",INPUT_MATRIX_DIR"/Matrix-1-1.txt",SOL_MATRIX_MATRIX_ADD"/Matrix-1-1_plus_Matrix-1-1.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-2-2.txt",INPUT_MATRIX_DIR"/Matrix-2-2.txt",SOL_MATRIX_MATRIX_ADD"/Matrix-2-2_plus_Matrix-2-2.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-3-4.txt",INPUT_MATRIX_DIR"/Matrix-3-4.txt",SOL_MATRIX_MATRIX_ADD"/Matrix-3-4_plus_Matrix-3-4.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-4-3.txt",INPUT_MATRIX_DIR"/Matrix-4-3.txt",SOL_MATRIX_MATRIX_ADD"/Matrix-4-3_plus_Matrix-4-3.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-5-5.txt",INPUT_MATRIX_DIR"/Matrix-5-5.txt",SOL_MATRIX_MATRIX_ADD"/Matrix-5-5_plus_Matrix-5-5.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-5-7.txt",INPUT_MATRIX_DIR"/Matrix-5-7.txt",SOL_MATRIX_MATRIX_ADD"/Matrix-5-7_plus_Matrix-5-7.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-8-3.txt",INPUT_MATRIX_DIR"/Matrix-8-3.txt",SOL_MATRIX_MATRIX_ADD"/Matrix-8-3_plus_Matrix-8-3.txt"}};

    minusTestCases = {{INPUT_MATRIX_DIR"/Matrix-1-1.txt",INPUT_MATRIX_DIR"/Matrix-1-1.txt",SOL_MATRIX_MATRIX_MINUS"/Matrix-1-1_minus_Matrix-1-1.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-2-2.txt",INPUT_MATRIX_DIR"/Matrix-2-2.txt",SOL_MATRIX_MATRIX_MINUS"/Matrix-2-2_minus_Matrix-2-2.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-3-4.txt",INPUT_MATRIX_DIR"/Matrix-3-4.txt",SOL_MATRIX_MATRIX_MINUS"/Matrix-3-4_minus_Matrix-3-4.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-4-3.txt",INPUT_MATRIX_DIR"/Matrix-4-3.txt",SOL_MATRIX_MATRIX_MINUS"/Matrix-4-3_minus_Matrix-4-3.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-5-5.txt",INPUT_MATRIX_DIR"/Matrix-5-5.txt",SOL_MATRIX_MATRIX_MINUS"/Matrix-5-5_minus_Matrix-5-5.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-5-7.txt",INPUT_MATRIX_DIR"/Matrix-5-7.txt",SOL_MATRIX_MATRIX_MINUS"/Matrix-5-7_minus_Matrix-5-7.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-8-3.txt",INPUT_MATRIX_DIR"/Matrix-8-3.txt",SOL_MATRIX_MATRIX_MINUS"/Matrix-8-3_minus_Matrix-8-3.txt"}};


    multiplyTestCases = {{INPUT_MATRIX_DIR"/Matrix-1-1.txt",INPUT_MATRIX_DIR"/Matrix-1-1.txt",SOL_MATRIX_MATRIX_MULTIPLY"/Matrix-1-1_times_Matrix-1-1.txt"},
                         {INPUT_MATRIX_DIR"/Matrix-2-2.txt",INPUT_MATRIX_DIR"/Matrix-2-2.txt",SOL_MATRIX_MATRIX_MULTIPLY"/Matrix-2-2_times_Matrix-2-2.txt"},
                         {INPUT_MATRIX_DIR"/Matrix-5-5.txt",INPUT_MATRIX_DIR"/Matrix-5-5.txt",SOL_MATRIX_MATRIX_MULTIPLY"/Matrix-5-5_times_Matrix-5-5.txt"}};

  }

  void TestMatrixAndMatrix::TearDownTestSuite() {
    plusTestCases.clear();
    minusTestCases.clear();
    multiplyTestCases.clear();
  }

  TEST_F(TestMatrixAndMatrix, MatrixPlusMatrix) {
    for (const auto& param : plusTestCases) {
      Matrix::Matrix lhs(loadMatrixFromFile(param.lhsFileName));
      Matrix::Matrix rhs(loadMatrixFromFile(param.rhsFileName));
      matVec answer(loadSolutionFromFile(param.solutionFileName));
      ASSERT_TRUE(lhs + rhs == answer);
    }
  }

  TEST_F(TestMatrixAndMatrix, MatrixPlusEqualMatrix) {
    for (const auto& param : plusTestCases) {
      Matrix::Matrix lhs(loadMatrixFromFile(param.lhsFileName));
      Matrix::Matrix rhs(loadMatrixFromFile(param.rhsFileName));
      matVec answer(loadSolutionFromFile(param.solutionFileName));
      ASSERT_TRUE((lhs += rhs) == answer);
      ASSERT_TRUE(lhs == answer);
    }
  }

  TEST_F(TestMatrixAndMatrix, MatrixMinusMatrix) {
    for (const auto& param : minusTestCases) {
      Matrix::Matrix lhs(loadMatrixFromFile(param.lhsFileName));
      Matrix::Matrix rhs(loadMatrixFromFile(param.rhsFileName));
      matVec answer(loadSolutionFromFile(param.solutionFileName));
      ASSERT_TRUE(lhs - rhs == answer);
    }
  }

  TEST_F(TestMatrixAndMatrix, MatrixMinusEqualMatrix) {
    for (const auto& param : minusTestCases) {
      Matrix::Matrix lhs(loadMatrixFromFile(param.lhsFileName));
      Matrix::Matrix rhs(loadMatrixFromFile(param.rhsFileName));
      matVec answer(loadSolutionFromFile(param.solutionFileName));
      ASSERT_TRUE((lhs -= rhs) == answer);
      ASSERT_TRUE(lhs == answer);
    }
  }

  TEST_F(TestMatrixAndMatrix, MatrixMultiplyMatrix) {
    for (const auto& param : multiplyTestCases) {
      Matrix::Matrix lhs(loadMatrixFromFile(param.lhsFileName));
      Matrix::Matrix rhs(loadMatrixFromFile(param.rhsFileName));
      matVec answer(loadSolutionFromFile(param.solutionFileName));
      ASSERT_TRUE(lhs * rhs == answer);
    }
  }

  TEST_F(TestMatrixAndMatrix, MatrixMultiplyEqualMatrix) {
    for (const auto& param : multiplyTestCases) {
      Matrix::Matrix lhs(loadMatrixFromFile(param.lhsFileName));
      Matrix::Matrix rhs(loadMatrixFromFile(param.rhsFileName));
      matVec answer(loadSolutionFromFile(param.solutionFileName));
      ASSERT_TRUE((lhs *= rhs) == answer);
      ASSERT_TRUE(lhs == answer);
    }
  }

}
