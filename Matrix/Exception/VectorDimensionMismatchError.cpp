//
// Created by mfbut on 5/14/2019.
//


#include "VectorDimensionMismatchError.h"
#include <iostream>
#include <sstream>


Matrix::VectorDimensionMismatchError::VectorDimensionMismatchError
(const int dimen1, const int dimen2) :
DimensionMismatchError(), dimen1(dimen1), dimen2(dimen2) {
    std::stringstream errorMsg;
    errorMsg << "The first dimension is: " << dimen1 << "and is not equal to the second dimension: " << dimen2;
    errorString = errorMsg.str();
}