//
// Created by mfbut on 5/7/2019.
//
#include "TestMatrix.h"
#include "gtest/gtest.h"
namespace MatrixTesting {
  TEST_F(TestMatrix, Constructor_Size_And_Value) {
    testContainer tests{
        {{3, 4, 7}, matVec(3, std::vector<double>(4, 7))},
        {{1, 1, 9}, matVec(1, std::vector<double>(1, 9))},
        {{25, 10, -3}, matVec(25, std::vector<double>(10, -3))}
    };

    for (const auto& test : tests) {
      EXPECT_TRUE(test.first == test.second);
    }
  }

  TEST_F(TestMatrix, Constructor_Size_Only) {
    testContainer tests{
        {{3, 4}, matVec(3, std::vector<double>(4, 0))},
        {{1, 1}, matVec(1, std::vector<double>(1, 0))},
        {{25, 10}, matVec(25, std::vector<double>(10, 0))}
    };

    for (const auto& test : tests) {
      EXPECT_TRUE(test.first == test.second);
    }
  }

  TEST_F(TestMatrix, Constructor_From_Vector) {
    std::vector<matVec> tests{
        {{1, 2}, {3, 4}},
        {{1, 2, 3}, {4, 5, 6}},
        {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}, {4, 5, 6}}
    };

    for (const auto& test : tests) {
      EXPECT_TRUE(Matrix::Matrix(test) == test);
    }
  }

  TEST_F(TestMatrix, Identity_Constructor) {
    testContainer tests{
        {Matrix::Matrix::ident(1), {{1}}},
        {Matrix::Matrix::ident(2), {{1, 0}, {0, 1}}},
        {Matrix::Matrix::ident(3), {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}}}
    };

    for (const auto& test : tests) {
      EXPECT_TRUE(test.first == test.second);
    }
  }

  TEST_F(TestMatrix, Transpose) {
    testContainer tests{
        {Matrix::Matrix::ident(1), {{1}}},
        {matVec{{1,2}, {3,4}}, {{1, 3}, {2, 4}}},
        {matVec{{1,2,3}, {4,5,6}}, {{1, 4}, {2, 5}, {3, 6}}}
    };

    for (const auto& test : tests) {
      EXPECT_TRUE(test.first.transpose() == test.second);
    }
  }



}
