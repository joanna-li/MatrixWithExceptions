//
// Created by mfbut on 5/8/2019.
//
#include <sstream>
#include "TestVector.h"
#include "gtest/gtest.h"

namespace VectorTesting {
  TEST_F(TestVector, IndexingTest_Read) {
    std::vector<DV> tests{{1, 2, 3, 4},
                          {10},
                          {5, 6, 7, 8, 9, 10}};

    for (const auto& test : tests) {
      Matrix::Vector v(test);
      for (unsigned int i = 0; i < test.size(); ++i) {
        ASSERT_NEAR(test.at(i), v.at(i), 1);
        ASSERT_NEAR(test[i], v[i], 1);
      }
    }
  }

  TEST_F(TestVector, IndexingTest_Write) {
    std::vector<DV> tests{{1, 2, 3, 4},
                          {10},
                          {5, 6, 7, 8, 9, 10}};

    for (auto& test : tests) {
      Matrix::Vector v(test);
      for (unsigned int i = 0; i < test.size(); ++i) {
        test.at(i) += 3;
        v.at(i) += 3;
      }
      ASSERT_TRUE(v == test);
    }

    for (auto& test : tests) {
      Matrix::Vector v(test);
      for (unsigned int i = 0; i < test.size(); ++i) {
        test[i] += 9;
        v[i] += 9;
      }
      ASSERT_TRUE(v == test);
    }
  }

  TEST_F(TestVector, Stream_Read) {
    std::stringstream stream("10 20 30 44");
    DV answer{10, 20, 30, 44};
    Matrix::Vector v(4);
    stream >> v;
    ASSERT_TRUE(v == answer);
  }

}
