#include <Exception/MatrixOutOfBoundsError.h>
#include <Exception/DivideByZeroError.h>
#include <Exception/MatrixDimensionMismatchError.h>
#include <Exception/MatrixInnerDimensionMismatchError.h>
#include "Matrix.h"
#include "Vector.h"

// for square matrices
Matrix::Matrix Matrix::Matrix::ident(Matrix::SizeType dim){
    Matrix ident(dim, dim);
    for (int row = 0; row < dim; ++row){
        for (int col = 0; col < dim; ++ col){
            if(row == col){
                ident.at(row, col) = 1;
            }
            else{
                ident.at(row, col) = 0;
            }
        }
    }
    return ident;
}

//create a numRows X numCols matrix where all of the elements
//are set to value
// create temporary vector because can not directly access
Matrix::Matrix::Matrix(Matrix::SizeType numRows, Matrix::SizeType numCols, const Matrix::ValueType& val):
        numRows(numRows), numCols(numCols){
    for (int row = 0; row < numRows; ++row){
        std::vector<Matrix::ValueType> tempVector;
        for (int col = 0; col < numCols; ++col){
            tempVector.push_back(val);
        }
        (*this).contents.push_back(tempVector);
    }
}


//create a numRows X numCols matrix where all of the elements
//are set to 0
Matrix::Matrix::Matrix(Matrix::SizeType numRows, Matrix::SizeType numCols):
        numRows(numRows), numCols(numCols){
    for (int row = 0; row < numRows; ++row){
        std::vector<Matrix::ValueType> tempVector;
        for (int col = 0; col < numCols; ++col){
            tempVector.push_back(0.0);
        }
        (*this).contents.push_back(tempVector);
    }
}

//create a matrix with the specified contents
Matrix::Matrix::Matrix(const std::vector<Vector>& contents) : contents(contents), numRows(contents.size()),
                                                              numCols(contents[0].size()){
//    Matrix::SizeType row = 0;
//    for (int col = 0; col < contents.size(); ++col){
//        (*this).contents[col] = contents[col];
//    }
}

// add specific contents into temporary vector then push back into function, make new array
Matrix::Matrix::Matrix(const std::vector<std::vector<Matrix::ValueType>>& contents) :
        numRows(contents.size()), numCols(contents[0].size()){
    for (int row = 0; row < numRows; ++row){
        std::vector<Matrix::ValueType> tempVector;
        for (int col = 0; col < numCols; ++col){
            tempVector.push_back(contents[row][col]);
        }
        (*this).contents.push_back(tempVector);
    }
}

Matrix::Matrix::SizeType Matrix::Matrix::getNumRows() const{
    return numRows;
}
Matrix::Matrix::SizeType Matrix::Matrix::getNumCols() const{
    return numCols;
}

//return the vector at the specified row
Matrix::Vector& Matrix::Matrix::at(int row){
    try {
        if (row < 0 || row > numRows - 1) {
            throw MatrixOutOfBoundsError(row, numRows - 1, 1);
        }
    } catch (MatrixOutOfBoundsError& e) {
        throw;
    } catch (OutOfBoundsError& e) {
        std::cout << e.what() <<std::endl;
    }
    return (*this).contents[row];
}

const Matrix::Vector& Matrix::Matrix::at(int row) const{
    try {
        if (row < 0 || row > numRows - 1) {
            throw MatrixOutOfBoundsError(row, numRows - 1, 1);
        }
    } catch (MatrixOutOfBoundsError& e) {
        throw;
    } catch (OutOfBoundsError& e) {
        std::cout << e.what() <<std::endl;
    }
    return (*this).contents[row];
}

Matrix::Vector& Matrix::Matrix::operator[](int row){
    try {
        if (row < 0 || row > numRows - 1) {
            throw MatrixOutOfBoundsError(row, numRows - 1, 1);
        }
    } catch (MatrixOutOfBoundsError& e) {
        throw;
    } catch (OutOfBoundsError& e) {
        std::cout << e.what() <<std::endl;
    }
    return at(row);
}
const Matrix::Vector& Matrix::Matrix::operator[](int row) const{
    try {
        if (row < 0 || row > numRows - 1) {
            throw MatrixOutOfBoundsError(row, numRows - 1, 1);
        }
    } catch (MatrixOutOfBoundsError& e) {
        throw;
    } catch (OutOfBoundsError& e) {
        std::cout << e.what() <<std::endl;
    }
    return at(row);
}

//return the value at the specified position
Matrix::ValueType& Matrix::Matrix::at(int row, int col){
    try {
        if (row < 0 || row > numRows - 1) {
            throw MatrixOutOfBoundsError(row, numRows, 1);
        }
        if (col < 0 || col > numCols - 1) {
            throw MatrixOutOfBoundsError(col, numCols, 0);
        }
    } catch (MatrixOutOfBoundsError& e){
        throw;
    } catch (OutOfBoundsError& e) {
        std::cout << e.what() <<std::endl;
    }
    return (*this)[row][col];
}
const Matrix::ValueType& Matrix::Matrix::at(int row, int col) const{
    try {
        if (row < 0 || row > numRows - 1) {
            throw MatrixOutOfBoundsError(row, numRows, 1);
        }
        if (col < 0 || col > numCols - 1) {
            throw MatrixOutOfBoundsError(col, numCols, 0);
        }
    } catch (MatrixOutOfBoundsError& e){
        throw;
    } catch (OutOfBoundsError& e) {
        std::cout << e.what() <<std::endl;
    }
    return (*this)[row][col];
}
//return a transpose of the matrix
//https://chortle.ccsu.edu/VectorLessons/vmch13/vmch13_14.html
Matrix::Matrix Matrix::Matrix::transpose() const{
    Matrix myMat (numCols, numRows);
    Matrix copy(*this);
    // set copy to new matrix form
    for (int row = 0; row < numRows; ++ row) {
        for (int col = 0; col < numCols; ++col){
            myMat[col][row] = copy.contents[row][col];
        }
    }
    return myMat;
}

//write the matrix to out
//one row per line
//one space between each element on a row
std::ostream& Matrix::operator<<(std::ostream& out, const Matrix& matrix){
    for (int row = 0; row < matrix.getNumRows(); ++row){
        for (int col = 0; col < matrix.getNumCols(); ++col){
            std::cout << matrix[row][col] << " ";
        }
        std::cout << std::endl;
    }
    return out;
}

//read the next matrix.getRows() X matrix.getCols()
//values from in and store them in matrix
std::istream& Matrix::operator>>(std::istream& in, Matrix& matrix){
    for (int row = 0; row < matrix.getNumRows(); ++row) {
        for (int col = 0; col < matrix.getNumCols(); ++col) {
            in >> matrix[row][col];
        }
    }
    return in;
}

//matrix negation
//negate each value in self
Matrix::Matrix Matrix::operator-(const Matrix& self){
    Matrix copy(self);
    for (int row = 0; row < self.getNumRows(); ++row){
        for (int col = 0; col < self.getNumRows(); ++col){
            copy -= self[row][col];
        }
    }
    return copy;
}

//add scalar to each element in matrix
Matrix::Matrix& Matrix::operator+=(Matrix& matrix, const Matrix::ValueType& scalar){
    for (int row = 0; row < matrix.getNumRows(); ++row){
        for (int col = 0; col < matrix.getNumCols(); ++col){
            matrix[row][col] = matrix[row][col] + scalar;
        }
    }
    return matrix;
}
Matrix::Matrix Matrix::operator+(const Matrix& matrix, const Matrix::ValueType& scalar){
    Matrix copy(matrix);
    for (int row = 0; row < copy.getNumRows(); ++row){
        for (int col = 0; col < copy.getNumCols(); ++col){
            copy[row][col] = matrix[row][col] + scalar;
        }
    }
    return copy;
}
Matrix::Matrix Matrix::operator+(const Matrix::ValueType& scalar, const Matrix& matrix){
    Matrix copy(matrix);
    for (int row = 0; row < copy.getNumRows(); ++row){
        for (int col = 0; col < copy.getNumCols(); ++col){
            copy[row][col] = scalar + matrix[row][col];
        }
    }
    return copy;
}

//subtract scalar from every element of matrix
Matrix::Matrix& Matrix::operator-=(Matrix& matrix, const Matrix::ValueType& scalar){
    for (int row = 0; row < matrix.getNumRows(); ++row){
        for (int col = 0; col < matrix.getNumCols(); ++col){
            matrix[row][col] = matrix[row][col] - scalar;
        }
    }
    return matrix;
}
Matrix::Matrix Matrix::operator-(const Matrix& matrix, const Matrix::ValueType& scalar){
    Matrix copy(matrix);
    for (int row = 0; row < copy.getNumRows(); ++row){
        for (int col = 0; col < copy.getNumCols(); ++col){
            copy[row][col] = matrix[row][col] - scalar;
        }
    }
    return copy;
}

//treat scalar as a matrix with the same dimension as rhs
//but all elements are set to scalar
Matrix::Matrix Matrix::operator-(const Matrix::ValueType& scalar, const Matrix& matrix){
    Matrix copy(matrix);
    for (int row = 0; row < copy.getNumRows(); ++row){
        for (int col = 0; col < copy.getNumCols(); ++col){
            copy[row][col] = scalar - matrix[row][col];
        }
    }
    return copy;
}

//scalar and matrix multiplication
//multiply every element in matrix by scalar
Matrix::Matrix& Matrix::operator*=(Matrix& matrix, const Matrix::ValueType& scalar){
    for (int row = 0; row < matrix.getNumRows(); ++row){
        for (int col = 0; col < matrix.getNumCols(); ++col){
            matrix[row][col] = matrix[row][col] * scalar;
        }
    }
    return matrix;
}
Matrix::Matrix Matrix::operator*(const Matrix& matrix, const Matrix::ValueType& scalar){
    Matrix copy(matrix);
    for (int row = 0; row < copy.getNumRows(); ++row){
        for (int col = 0; col < copy.getNumCols(); ++col){
            copy[row][col] = matrix[row][col] * scalar;
        }
    }
    return copy;
}
Matrix::Matrix Matrix::operator*(const Matrix::ValueType& scalar, const Matrix& matrix){
    Matrix copy(matrix);
    for (int row = 0; row < copy.getNumRows(); ++row){
        for (int col = 0; col < copy.getNumCols(); ++col){
            copy[row][col] = scalar * matrix[row][col];
        }
    }
    return copy;
}

//scalar matrix division
//divide every element in matrix by scalar
Matrix::Matrix& Matrix::operator/=(Matrix& matrix, const Matrix::Matrix::ValueType& scalar){
    try {
        if (scalar == 0){
            throw DivideByZeroError(0);
        }

        for (int row = 0; row < matrix.getNumRows(); ++row) {
            for (int col = 0; col < matrix.getNumCols(); ++col) {
                matrix[row][col] = matrix[row][col] / scalar;
            }
        }

    } catch (DivideByZeroError& e){
        throw;
    } catch (MatrixError& e) {
        std::cout << e.what() <<std::endl;
    }
    return matrix;
}
Matrix::Matrix Matrix::operator/(const Matrix& matrix, const Matrix::Matrix::ValueType& scalar){
    Matrix copy(matrix);
    try {
        if (scalar == 0){
            throw DivideByZeroError(0);
        }

        for (int row = 0; row < matrix.getNumRows(); ++row) {
            for (int col = 0; col < matrix.getNumCols(); ++col) {
                copy[row][col] = matrix[row][col] / scalar;
            }
        }

    } catch (DivideByZeroError& e){
        throw;
    } catch (MatrixError& e) {
        std::cout << e.what() <<std::endl;
    }
    return copy;
}

//matrix operators

// add or subtract matching elements from 2 matrices (on the same position)
//matrix addition: https://www.purplemath.com/modules/mtrxadd.htm
Matrix::Matrix& Matrix::operator+=(Matrix& lhs, const Matrix& rhs){

    int lRowLength = lhs.contents.size();
    int rRowLength = rhs.contents.size();
    int lColLength = lhs.contents[0].size();
    int rColLength = rhs.contents[0].size();
    try {
        if (lRowLength != rRowLength) {
            throw MatrixDimensionMismatchError(lhs.contents.size(), rhs.contents.size(), 1);
        }
        if (lColLength != rColLength) {
            throw MatrixDimensionMismatchError(lhs.contents.size(), rhs.contents.size(), 0);
        }
        auto elemItr = lhs.contents.begin();
        for (const auto& element : rhs.contents){
            *elemItr += element;
            ++elemItr;
        }
    } catch(MatrixDimensionMismatchError& e){
        throw;
    } catch (DimensionMismatchError& e) {
        std::cout << e.what() <<std::endl;
    }
    return lhs;
}

Matrix::Matrix Matrix::operator+(const Matrix& lhs, const Matrix& rhs){
    Matrix copy(lhs);

    int lRowLength = lhs.contents.size();
    int rRowLength = rhs.contents.size();
    int lColLength = lhs.contents[0].size();
    int rColLength = rhs.contents[0].size();
    try {
        if (lRowLength != rRowLength) {
            throw MatrixDimensionMismatchError(lhs.contents.size(), rhs.contents.size(), 1);
        }
        if (lColLength != rColLength) {
            throw MatrixDimensionMismatchError(lhs.contents.size(), rhs.contents.size(), 0);
        }
        auto elemItr = copy.contents.begin();
        for (const auto& element : rhs.contents){
            *elemItr += element;
            ++elemItr;
        }
    } catch(MatrixDimensionMismatchError& e){
        throw;
    } catch (DimensionMismatchError& e) {
        std::cout << e.what() <<std::endl;
    }
    return copy;
}

//matrix subtraction: https://www.purplemath.com/modules/mtrxadd.htm
Matrix::Matrix& Matrix::operator-=(Matrix& lhs, const Matrix& rhs){

    int lRowLength = lhs.contents.size();
    int rRowLength = rhs.contents.size();
    int lColLength = lhs.contents[0].size();
    int rColLength = rhs.contents[0].size();
    try {
        if (lRowLength != rRowLength) {
            throw MatrixDimensionMismatchError(lhs.contents.size(), rhs.contents.size(), 1);
        }
        if (lColLength != rColLength) {
            throw MatrixDimensionMismatchError(lhs.contents.size(), rhs.contents.size(), 0);
        }
        auto elemItr = lhs.contents.begin();
        for (const auto& element : rhs.contents){
            *elemItr -= element;
            ++elemItr;
        }
    } catch(MatrixDimensionMismatchError& e){
        throw;
    } catch (DimensionMismatchError& e) {
        std::cout << e.what() <<std::endl;
    }
    return lhs;
}
Matrix::Matrix Matrix::operator-(const Matrix& lhs, const Matrix& rhs){
    Matrix copy(lhs);

    int lRowLength = lhs.contents.size();
    int rRowLength = rhs.contents.size();
    int lColLength = lhs.contents[0].size();
    int rColLength = rhs.contents[0].size();
    try {
        if (lRowLength != rRowLength) {
            throw MatrixDimensionMismatchError(lhs.contents.size(), rhs.contents.size(), 1);
        }
        if (lColLength != rColLength) {
            throw MatrixDimensionMismatchError(lhs.contents.size(), rhs.contents.size(), 0);
        }
        auto elemItr = copy.contents.begin();
        for (const auto& element : rhs.contents){
            *elemItr -= element;
            ++elemItr;
        }
    } catch(MatrixDimensionMismatchError& e){
        throw;
    } catch (DimensionMismatchError& e) {
        std::cout << e.what() <<std::endl;
    }
    return copy;
}

//matrix multiplication: https://www.purplemath.com/modules/mtrxmult.htm
// take the element of the row in lhs and multiply with the matching element in the col of rhs
// then add results together
// save sum to a new matrix
// after done looping, assign those values back to lhs to return final matrix
Matrix::Matrix& Matrix::operator*=(Matrix& lhs, const Matrix& rhs){
    Matrix copy(lhs);
    int lRowLength = lhs.contents.size();
    int rRowLength = rhs.contents.size();
    int lColLength = lhs.contents[0].size();
    int rColLength = rhs.contents[0].size();
    try {
        if (lRowLength != rColLength) {
            throw MatrixInnerDimensionMismatchError(lRowLength, rRowLength, lColLength, rColLength);
        }
        if (lColLength != rRowLength) {
            throw MatrixInnerDimensionMismatchError(lRowLength, rRowLength, lColLength, rColLength);
        }

        for (int row = 0; row < lhs.getNumRows(); ++row){
            for (int col = 0; col < rhs.getNumCols(); ++col) {
                double sum = 0;
                for (int row2 = 0; row2 < rhs.getNumRows(); ++row2) {
                    sum = sum + lhs[row][row2] * rhs[row2][col];
                }
                copy[row][col] = sum;
            }
        }
        lhs = copy;
    } catch (MatrixInnerDimensionMismatchError& e){
        throw;
    } catch (MatrixDimensionMismatchError& e) {
        throw;
    } catch (DimensionMismatchError& e) {
        std::cout << e.what() <<std::endl;
    }
    return lhs;
}

// same as above except return copy because lhs is now a const
Matrix::Matrix Matrix::operator*(const Matrix& lhs, const Matrix& rhs){
    Matrix copy(lhs);
    int lRowLength = lhs.contents.size();
    int rRowLength = rhs.contents.size();
    int lColLength = lhs.contents[0].size();
    int rColLength = rhs.contents[0].size();
    try {
        if (lRowLength != rColLength) {
            throw MatrixInnerDimensionMismatchError(lRowLength, rRowLength, lColLength, rColLength);
        }
        if (lColLength != rRowLength) {
            throw MatrixInnerDimensionMismatchError(lRowLength, rRowLength, lColLength, rColLength);
        }

        for (int row = 0; row < lhs.getNumRows(); ++row){
            for (int col = 0; col < rhs.getNumCols(); ++col){
                double sum = 0;
                for (int row2 = 0; row2 < rhs.getNumRows(); ++row2){
                    sum = sum + lhs[row][row2] * rhs[row2][col];
                }
                copy[row][col] = sum;
            }
        }
    } catch (MatrixInnerDimensionMismatchError& e){
        throw;
    } catch (MatrixDimensionMismatchError& e) {
        throw;
    } catch (DimensionMismatchError& e) {
        std::cout << e.what() <<std::endl;
    }
    return copy;
}
