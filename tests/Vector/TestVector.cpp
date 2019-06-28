//
// Created by mfbut on 5/2/2019.
//
#include "TestVectorAndScalar.h"
#include <fstream>
#include <iostream>
#include <map>
#include "TestVector.h"
#include "Vector.h"
#include "gmock/gmock.h"

VectorTesting::TestVector::TestVector()
/*:
scalars{0, 1, 0.5, 2.5, 10, -2, -5, -100},
vectors{DV{0},}*/{

}

testing::AssertionResult VectorTesting::operator==(const Matrix::Vector& matVector,
                                                   const DV& stdVector) {
  //normally this one would have jut cast the vector of
  //doubles to a Matrix::Vector but I don't know if student code
  //works correctly so I can't do that
  using namespace ::testing;

  if (matVector.size() != stdVector.size()) {
    return AssertionFailure() << "Vector has incorrect size." << std::endl <<
                              "It should be " << stdVector.size() << std::endl <<
                              "But is actually" << matVector.size() << std::endl;
  }

  bool allElementsMatch = true;
  AssertionResult mismatch(AssertionFailure());
  for (int i = 0; i < matVector.size(); ++i) {
    if (!Matches(DoubleNear(stdVector.at(i), 1))(matVector.at(i))) {
      allElementsMatch = false;
      mismatch << "vec[" << i << "](value: " << matVector.at(i) << ") ! = " <<
               "answer[" << i << "](value: " << stdVector.at(i) << ")" << std::endl;
    }
  }

  if (allElementsMatch) {
    return AssertionSuccess();
  } else {
    return mismatch;
  }

}

testing::AssertionResult VectorTesting::operator==(const DV& stdVector,
                                                   const Matrix::Vector& matVector) {
  return matVector == stdVector;
}

testing::AssertionResult VectorTesting::operator==(const Matrix::Vector& lhs, const Matrix::Vector& rhs) {
  using namespace ::testing;

  if (lhs.size() != rhs.size()) {
    return AssertionFailure() << "Vector has incorrect size." << std::endl <<
                              "It should be " << rhs.size() << std::endl <<
                              "But is actually" << lhs.size() << std::endl;
  }

  bool allElementsMatch = true;
  AssertionResult mismatch(AssertionFailure());
  for (int i = 0; i < lhs.size(); ++i) {
    if (!Matches(DoubleNear(rhs.at(i),1))(lhs.at(i))) {
      allElementsMatch = false;
      mismatch << "vec[" << i << "](value: " << lhs.at(i) << ") ! = " <<
               "answer[" << i << "](value: " << rhs.at(i) << ")" << std::endl;
    }
  }

  if (allElementsMatch) {
    return AssertionSuccess();
  } else {
    return mismatch;
  }
}

Matrix::Vector VectorTesting::TestVector::loadVectorFromFile(const std::string& FileName) {
  std::ifstream inputFile(FileName);
  int size;
  inputFile >> size;
  DV contents;
  contents.reserve(size);
  double val;
  while(inputFile >> val){
    contents.push_back(val);
  }
  return Matrix::Vector (contents);;
}

VectorTesting::DV VectorTesting::TestVector::loadAnswerVectorFromFile(const std::string& FileName) {
  DV answer;
  std::ifstream answerFile(FileName);
  double val;
  while (answerFile >> val) {
    answer.push_back(val);
  }
  return answer;
}
