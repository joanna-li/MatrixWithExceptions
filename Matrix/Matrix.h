//
// Created by mfbut on 5/2/2019.
//

#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H
#include <vector>
#include <iostream>
#include <string>
#include "Vector.h"
#include "MatrixTypeDefs.h"
namespace Matrix {
  class Matrix {
   public:
    using ValueType = ::Matrix::ValueType;
    using SizeType = ::Matrix::SizeType;
    using iterator = std::vector<Vector>::iterator;
    using const_iterator = std::vector<Vector>::const_iterator;

    friend Matrix& operator+=(Matrix& lhs, const Matrix& rhs);
    friend Matrix operator+(const Matrix& lhs, const Matrix& rhs);
    friend Matrix& operator-=(Matrix& lhs, const Matrix& rhs);
    friend Matrix operator-(const Matrix& lhs, const Matrix& rhs);
    friend Matrix& operator*=(Matrix& lhs, const Matrix& rhs);
    friend Matrix operator*(const Matrix& lhs, const Matrix& rhs);


    //create an identity matrix: https://en.wikipedia.org/wiki/Identity_matrix
    //that is a dim X dim matrix with 1's on the main diagonal
    static Matrix ident(SizeType dim);

    //constructors

    //create a numRows X numCols matrix where all of the elements
    //are set to value
    Matrix(SizeType numRows, SizeType numCols, const ValueType& val);

    //create a numRows X numCols matrix where all of the elements
    //are set to 0
    Matrix(SizeType numRows, SizeType numCols);

    //create a matrix with the specified contents
    Matrix(const std::vector<Vector>& contents);
    Matrix(const std::vector<std::vector<ValueType>>& contents);

    //copy constructor
    Matrix(const Matrix& orig) = default;
    virtual ~Matrix() = default;

    SizeType getNumRows() const;
    SizeType getNumCols() const;

    //element access

    //return the vector at the specified row
    Vector& at(int row);
    const Vector& at(int row) const;
    Vector& operator[](int row);
    const Vector& operator[](int row) const;

    //return the value at the specified position
    ValueType& at(int row, int col);
    const ValueType& at(int row, int col) const;


    //return a transpose of the matrix
    //https://chortle.ccsu.edu/VectorLessons/vmch13/vmch13_14.html
    Matrix transpose() const;


   private:
    //the contents of the matrix
    std::vector<Vector> contents;
    SizeType numRows;
    SizeType numCols;
  };

  //write the matrix to out
  //one row per line
  //one space between each element on a row
  std::ostream& operator<<(std::ostream& out, const Matrix& matrix);

  //read the next matrix.getRows() X matrix.getCols()
  //values from in and store them in matrix
  std::istream& operator>>(std::istream& in, Matrix& matrix);

  //matrix negation
  //negate each value in self
  Matrix operator-(const Matrix& self);

  //scalar and matrix operations

  //scalar and matrix addition
  //scalar and Matrix addition isn't formally defined in mathematics
  //but we are going to do it anyway

  //add scalar to each element in matrix
  Matrix& operator+=(Matrix& matrix, const Matrix::ValueType& scalar);
  Matrix operator+(const Matrix& matrix, const Matrix::ValueType& scalar);
  Matrix operator+(const Matrix::ValueType& scalar, const Matrix& matrix);

  //scalar and matrix subtraction
  //scalar and Matrix subtraction isn't formally defined in mathematics
  //but we are going to do it anyway

  //subtract scalar from every element of matrix
  Matrix& operator-=(Matrix& matrix, const Matrix::ValueType& scalar);
  Matrix operator-(const Matrix& matrix, const Matrix::ValueType& scalar);

  //treat scalar as a matrix with the same dimension as rhs
  //but all elements are set to scalar
  Matrix operator-(const Matrix::ValueType& scalar, const Matrix& matrix);

  //scalar and matrix multiplication
  //multiply every element in matrix by scalar
  Matrix& operator*=(Matrix& matrix, const Matrix::ValueType& scalar);
  Matrix operator*(const Matrix& matrix, const Matrix::ValueType& scalar);
  Matrix operator*(const Matrix::ValueType& scalar, const Matrix& matrix);

  //scalar matrix division
  //divide every element in matrix by scalar
  Matrix& operator/=(Matrix& matrix, const Matrix::ValueType& scalar);
  Matrix operator/(const Matrix& matrix, const Matrix::ValueType& scalar);
  //scalar divided by a matrix isn't well defined so we aren't implementing it

  //matrix operators

  //matrix addition: https://www.purplemath.com/modules/mtrxadd.htm
  Matrix& operator+=(Matrix& lhs, const Matrix& rhs);
  Matrix operator+(const Matrix& lhs, const Matrix& rhs);

  //matrix subtraction: https://www.purplemath.com/modules/mtrxadd.htm
  Matrix& operator-=(Matrix& lhs, const Matrix& rhs);
  Matrix operator-(const Matrix& lhs, const Matrix& rhs);

  //matrix multiplication: https://www.purplemath.com/modules/mtrxmult.htm
  Matrix& operator*=(Matrix& lhs, const Matrix& rhs);
  Matrix operator*(const Matrix& lhs, const Matrix& rhs);

}
#endif //MATRIX_MATRIX_H
