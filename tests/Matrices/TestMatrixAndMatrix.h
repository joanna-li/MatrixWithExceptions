//
// Created by mfbut on 5/7/2019.
//

#ifndef MATRIX_TESTMATRIXANDMATRIX_H
#define MATRIX_TESTMATRIXANDMATRIX_H
#include "TestMatrix.h"
#include "ObjectObjectTestCase.h"

namespace MatrixTesting {

  class TestMatrixAndMatrix : public TestMatrix {
   public:
    using TestCaseContainer = std::vector<ProgramTesting::ObjectObjectTestCase>;
    static TestCaseContainer plusTestCases;
    static TestCaseContainer minusTestCases;
    static TestCaseContainer multiplyTestCases;
    
    static void SetUpTestSuite();
    static void TearDownTestSuite();
  };
}

#endif //MATRIX_TESTMATRIXANDMATRIX_H
