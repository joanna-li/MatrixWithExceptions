//
// Created by mfbut on 5/4/2019.
//

#include "TestVector.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

namespace VectorTesting{

  TEST_F(TestVector, Constructor_Size_And_Value) {
    testContainer tests{{{3, 10}, DV(3, 10)},
                        {{20, 17}, DV(20, 17)},
                        {{5, 9}, DV(5, 9)}
    };
    for (const auto& test : tests) {
      EXPECT_TRUE(test.first == test.second);
    }
  }

  TEST_F(TestVector, Constructor_Size_Only) {
    testContainer tests{{{3}, DV(3)},
                        {{20}, DV(20)},
                        {{5}, DV(5)}
    };
    for (const auto& test : tests) {
      EXPECT_TRUE(test.first == test.second);
    }
  }

  TEST_F(TestVector, Constructor_From_Vector) {
    testContainer tests{{DV{1,2,3,4}, DV{1,2,3,4}},
                        {DV{1}, DV{1}},
                        {DV{-3,-5,29.7,63,54}, DV{-3,-5,29.7,63,54}}
    };
    for (const auto& test : tests) {
      EXPECT_TRUE(test.first == test.second);
    }
  }


  TEST_F(TestVector, Constructor_Copy) {
    std::vector<Matrix::Vector> tests{{1,10},
                                      {25},
                                      DV{25, 39, 64, 25.65, 95,24, 57} };


    for (const auto& test : tests) {
      EXPECT_TRUE(test == Matrix::Vector(test));
    }
  }
}
