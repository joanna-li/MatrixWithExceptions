//
// Created by mfbut on 5/8/2019.
//
#include <sstream>
#include "TestMatrix.h"
#include "gtest/gtest.h"
namespace MatrixTesting {
  TEST_F(TestMatrix, IndexingTest_Read) {
    std::vector<matVec> tests{{{1, 2, 3, 4}, {5, 6, 7, 8}},
                              {{10}},
                              {{5, 6, 7},
                               {8, 9, 10},
                               {15, 16, 17},
                               {25, 26, 27}}
    };

    for (const auto& test : tests) {
      Matrix::Matrix mat(test);
      for (unsigned int i = 0; i < test.size(); ++i) {
        for (unsigned int j = 0; j < test.at(i).size(); ++j) {
          ASSERT_NEAR(test.at(i).at(j), mat.at(i).at(j), 1);
          ASSERT_NEAR(test.at(i).at(j), mat.at(i, j), 1);
          ASSERT_NEAR(test[i][j], mat[i][j], 1);
        }
      }
    }
  }

  TEST_F(TestMatrix, IndexingTest_Write) {
    std::vector<matVec> tests{{{1, 2, 3, 4}, {5, 6, 7, 8}},
                              {{10}},
                              {{5, 6, 7},
                               {8, 9, 10},
                               {15, 16, 17},
                               {25, 26, 27}}
    };

    for (auto& test : tests) {
      Matrix::Matrix mat(test);
      for (unsigned int i = 0; i < test.size(); ++i) {
        for (unsigned int j = 0; j < test.at(i).size(); ++j) {
          test.at(i).at(j) += 3;
          mat.at(i).at(j) += 3;
        }
        ASSERT_TRUE(mat == test);
      }
    }
    for (auto& test : tests) {
      Matrix::Matrix mat(test);
      for (unsigned int i = 0; i < test.size(); ++i) {
        for (unsigned int j = 0; j < test.at(i).size(); ++j) {
          test[i][j] += 10;
          mat[i][j] += 10;
        }
        ASSERT_TRUE(mat == test);
      }
    }

    for (auto& test : tests) {
      Matrix::Matrix mat(test);
      for (unsigned int i = 0; i < test.size(); ++i) {
        for (unsigned int j = 0; j < test.at(i).size(); ++j) {
          test.at(i).at(j) += 20;
          mat.at(i, j) += 20;
        }
        ASSERT_TRUE(mat == test);
      }
    }
  }

  TEST_F(TestMatrix, Stream_Read) {
    std::stringstream stream("1 2 3\n4 5 6\n7 8 9\n22 25 26");
    matVec answer{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {22, 25, 26}};
    Matrix::Matrix mat(4, 3);
    stream >> mat;
    ASSERT_TRUE(mat == answer);
  }

  TEST_F(TestMatrix, VectorToMatrix_Row) {
    std::vector<matVec> tests{{{1, 2, 3, 4}},
                              {{10}}
    };

    for (const auto& test: tests) {
      Matrix::Vector v(test.front());
      Matrix::Matrix mat = v.asRowMatrix();
      ASSERT_TRUE(mat == test);
    }
  }

  TEST_F(TestMatrix, VectorToMatrix_Cast) {
    std::vector<matVec> tests{{{1, 2, 3, 4}},
                              {{10}}
    };

    for (const auto& test: tests) {
      Matrix::Vector v(test.front());
      Matrix::Matrix mat = static_cast<Matrix::Matrix>(v);
      ASSERT_TRUE(mat == test);
    }
  }

  TEST_F(TestMatrix, VectorToMatrix_Col) {
    std::vector<std::pair<std::vector<std::vector<double>>, std::vector<std::vector<double>>>> tests{
        {{{10}}, {{10}}},
        {{{1, 2, 3, 4}}, {{1}, {2}, {3}, {4}}}
    };

    for (const auto& test: tests) {
      Matrix::Vector v(test.first.front());
      Matrix::Matrix mat = v.asColMatrix();
      ASSERT_TRUE(mat == test.second);
    }
  }

}


