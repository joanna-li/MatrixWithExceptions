//
// Created by mfbut on 5/7/2019.
//

#ifndef MATRIX_TESTMATRIXANDSCALAR_H
#define MATRIX_TESTMATRIXANDSCALAR_H
#include <vector>
#include "TestMatrix.h"
#include "ObjectScalarTestCase.h"
namespace MatrixTesting {
  class TestMatrixAndScalar : public TestMatrix {
   public:
    using TestCaseContainer = std::vector<ProgramTesting::ObjectScalarTestCase>;
    static TestCaseContainer plusTestCases;
    static TestCaseContainer minusTestCases;
    static TestCaseContainer multiplyTestCases;
    static TestCaseContainer divideTestCases;
    static TestCaseContainer scalarMinusTestCases;
    static void SetUpTestSuite();
    static void TearDownTestSuite();
    
  };
}

#endif //MATRIX_TESTMATRIXANDSCALAR_H
