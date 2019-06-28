//
// Created by mfbut on 5/14/2019.
//


#include "VectorOutOfBoundsError.h"
#include <iostream>
#include <sstream>

Matrix::VectorOutOfBoundsError::VectorOutOfBoundsError(const int myIndex, const int maxIndex) :
    OutOfBoundsError(), myIndex(myIndex), maxIndex(maxIndex) {
    std::stringstream errorMsg;
    errorMsg << "The vector index " << myIndex << "is out of bounds (" << maxIndex << ")";
    errorString = errorMsg.str();
}





