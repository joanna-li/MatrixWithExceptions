//
// Created by mfbut on 5/7/2019.
//

#include <fstream>
#include <sstream>
#include "TestMatrix.h"
#include "gmock/gmock.h"

testing::AssertionResult MatrixTesting::operator==(const Matrix::Matrix& matrix,
                                                   const MatrixTesting::matVec& solution) {
  using namespace testing;
  if (matrix.getNumRows() != solution.size()) {
    return AssertionFailure() << "Matrix has incorrect number of rows" << std::endl <<
                              "It should be " << solution.size() << std::endl <<
                              "But is actually " << matrix.getNumRows();
  } else if (matrix.getNumCols() != solution.front().size()) {
    return AssertionFailure() << "Matrix has incorrect number of columns" << std::endl <<
                              "It should be " << solution.front().size() << std::endl <<
                              "But is actually " << matrix.getNumCols();
  } else {
    bool allElementsMatch = true;
    AssertionResult mismatch(AssertionFailure());
    for (unsigned int i = 0; i < solution.size(); ++i) {
      for (unsigned int j = 0; j < solution.front().size(); ++j) {
        if (!Matches(DoubleNear(solution.at(i).at(j), 1))(matrix.at(i,j))) {
          allElementsMatch = false;
          mismatch << "matrix[" << i << "][" << j<< "](value: " << matrix.at(i,j) << ") ! = " <<
                   "answer[" << i << "][" << j<< "](value: " << solution.at(i).at(j) << ")" << std::endl;
        }
      }
    }

    if (allElementsMatch) {
      return AssertionSuccess();
    } else {
      return mismatch;
    }
  }
}

testing::AssertionResult MatrixTesting::operator==(const MatrixTesting::matVec& solution,
                                                   const Matrix::Matrix& matrix) {
  return matrix == solution;
}

MatrixTesting::matVec MatrixTesting::TestMatrix::loadMatrixFromFile(const std::string& fileName) {
  std::ifstream inFile(fileName);
  int numRows, numCols;
  inFile >> numRows >> numCols;

  matVec answer(numRows, std::vector<double>(numCols,0));
  for (int i = 0; i < numRows; ++i) {
    for (int j = 0; j < numCols; ++j) {
      inFile >> answer.at(i).at(j);
    }
  }
  return answer;
}

MatrixTesting::matVec MatrixTesting::TestMatrix::loadSolutionFromFile(const std::string& fileName) {
  std::ifstream inFile(fileName);


  matVec answer;
  std::string input_row;

  while(std::getline(inFile, input_row)){
    std::stringstream rowParse(input_row);
    double val;
    std::vector<double> row;
    while(rowParse >> val){
      row.push_back(val);
    }
    answer.push_back(row);
  }
  return answer;
}
