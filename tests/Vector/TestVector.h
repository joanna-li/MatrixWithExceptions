//
// Created by mfbut on 5/2/2019.
//

#ifndef MATRIX_TESTVECTOR_H
#define MATRIX_TESTVECTOR_H
#include <vector>
#include <string>
#include <utility>
#include <map>
#include "gtest/gtest.h"
#include "Vector.h"
#include "ObjectScalarTestCase.h"

namespace VectorTesting {
  using DV = std::vector<double>;
  using testContainer = std::vector<std::pair<Matrix::Vector, DV>>;

  class TestVector : public ::testing::Test {
   public:
    TestVector();
    virtual ~TestVector() override = default;

    static Matrix::Vector loadVectorFromFile(const std::string& FileName);
    static DV loadAnswerVectorFromFile(const std::string& FileName);
  };

  testing::AssertionResult operator==(const Matrix::Vector& matVector, const std::vector<double>& stdVector);
  testing::AssertionResult operator==(const std::vector<double>& stdVector, const Matrix::Vector& matVector);
  testing::AssertionResult operator==(const Matrix::Vector& lhs, const Matrix::Vector& rhs);

}

#endif //MATRIX_TESTVECTOR_H
