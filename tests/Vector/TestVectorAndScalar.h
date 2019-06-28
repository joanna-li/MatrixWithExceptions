//
// Created by mfbut on 5/5/2019.
//

#ifndef MATRIX_TESTVECTORANDSCALAR_H
#define MATRIX_TESTVECTORANDSCALAR_H
#include <vector>
#include <string>
#include "Vector.h"
#include "TestVector.h"
#include "ObjectScalarTestCase.h"
#include "gtest/gtest.h"
namespace VectorTesting {
  using namespace ProgramTesting;
  class TestVectorAndScalar : public TestVector{
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
#endif //MATRIX_TESTVECTORANDSCALAR_H
