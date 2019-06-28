//
// Created by mfbut on 5/14/2019.
//

#include "MatrixDimensionMismatchError.h"
#include <iostream>
#include <sstream>


Matrix::MatrixDimensionMismatchError::MatrixDimensionMismatchError
(const int dimen1, const int dimen2, const int isRow) :
DimensionMismatchError(), dimen1(dimen1), dimen2(dimen2), isRow(isRow) {
    std::stringstream errorMsg;
    errorMsg << "The first" << (isRow == 1 ? "ROW" : "COLUMN") << "dimension is: " << dimen1
    << "and is not equal to the second" << (isRow == 1 ? "ROW" : "COLUMN") << "dimension: "
    << dimen2;
    errorString = errorMsg.str();
}