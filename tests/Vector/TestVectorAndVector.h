//
// Created by mfbut on 5/7/2019.
//

#ifndef MATRIX_TESTVECTORANDVECTOR_H
#define MATRIX_TESTVECTORANDVECTOR_H
#include <vector>
#include "TestVector.h"
#include "ObjectObjectTestCase.h"
namespace VectorTesting {
  class TestVectorAndVector : public TestVector {
   public:
    static std::vector<ProgramTesting::ObjectObjectTestCase> plusTestCases;
    static std::vector<ProgramTesting::ObjectObjectTestCase> minusTestCases;
    static std::vector<ProgramTesting::ObjectObjectTestCase> multiplyTestCases;

    static void SetUpTestSuite();
    static void TearDownTestSuite();
  };
}

#endif //MATRIX_TESTVECTORANDVECTOR_H
