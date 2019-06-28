//
// Created by mfbut on 5/14/2019.
//

#ifndef MATRIX_MATRIXERROR_H
#define MATRIX_MATRIXERROR_H

#include <exception>
#include <string>


//base class used to signify an error happened in
//a vector or matrix
namespace Matrix {

  //should inherit from std::exception
class MatrixError : public std::exception {

public:

    MatrixError() noexcept;
    explicit MatrixError(const std::string& msg) noexcept;
    virtual ~MatrixError() = default;
    virtual const char* what() const noexcept override;

protected:
    std::string errorString;

  };
}

#endif //MATRIX_MATRIXERROR_H
