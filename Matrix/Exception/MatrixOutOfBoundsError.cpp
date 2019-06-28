//
// Created by mfbut on 5/14/2019.
//

#include "MatrixOutOfBoundsError.h"
#include <iostream>
#include <sstream>

Matrix::MatrixOutOfBoundsError::MatrixOutOfBoundsError(const int myIndex, const int maxIndex, const int isRow):
    OutOfBoundsError(), myIndex(myIndex), maxIndex(maxIndex), isRow(isRow) {
    std::stringstream errorMsg;

    errorMsg << "The matrix index " << myIndex << "is out of" << (isRow == 1 ? "ROW" : "COLUMN")
                << "bounds (" << maxIndex << ")";
    errorString = errorMsg.str();
}

