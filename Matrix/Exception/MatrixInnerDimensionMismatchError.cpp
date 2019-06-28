//
// Created by mfbut on 5/14/2019.
//
#include "MatrixInnerDimensionMismatchError.h"
#include <MatrixDimensionMismatchError.h>
#include <iostream>
#include <sstream>

Matrix::MatrixInnerDimensionMismatchError::MatrixInnerDimensionMismatchError
(const int matrix1Col, const int matrix1Row, const int matrix2Row, const int matrix2Col) :
 MatrixDimensionMismatchError(matrix1Row, matrix2Col, 1),
 matrix1Col(matrix1Col), matrix1Row(matrix1Row), matrix2Row(matrix2Row),matrix2Col(matrix2Col) {
    std::stringstream errorMsg;
    errorMsg << "The first matrix's number of rows " << matrix1Row << " and columns " << matrix1Col
            << "do not equal the second matrix's number of columns " << matrix2Col << " and rows " << matrix2Row;
    errorString = errorMsg.str();
}