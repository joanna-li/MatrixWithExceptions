//
// Created by mfbut on 5/19/2019.
//

#include "DivideByZeroError.h"
#include <iostream>
#include <string>


// constructors

Matrix::DivideByZeroError::DivideByZeroError(const int isVector) : MatrixError(), isVector(isVector) {
    errorString = isVector == 1? "Vector" : "Matrix";
    errorString += " cannot be divided by zero";
}