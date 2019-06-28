//
// Created by mfbut on 5/14/2019.
//

#include "MatrixError.h"

// method will not create another exception
const char* Matrix::MatrixError::what() const noexcept {
    return errorString.c_str();
}

Matrix::MatrixError::MatrixError() noexcept {
    errorString = "Matrix Error based exception";
}

Matrix::MatrixError::MatrixError(const std::string& msg) noexcept: errorString(msg) {

}





