#include <iostream>
#include <string>
#include <vector>
#include <Exception/DivideByZeroError.h>
#include <Exception/VectorOutOfBoundsError.h>
#include <Exception/VectorDimensionMismatchError.h>

#include "MatrixTypeDefs.h"
#include "Vector.h"
#include "Matrix.h"

//create a vector the same size as contents with the same values
Matrix::Vector::Vector(const std::vector<ValueType>& contents):contents(contents), numElements(contents.size()){

}

//create a vector numElements big where the elements are all initialized to value
Matrix::Vector::Vector(const SizeType& numElements, const ValueType& value):
        contents(numElements), numElements(numElements){
    for (int i = 0; i< numElements; i++){
        contents[i] = value;
    }
}

//create a vector numElements big where the elements are all initialized to 0
Matrix::Vector::Vector(const SizeType& numElements):
        numElements(numElements){
    for (int i = 0; i< numElements; ++i){
        contents.push_back(0);
    }
}

Matrix::SizeType Matrix::Vector::size() const {
    return numElements;
}

//conversion to matrix functions

//convert this vector to a 1 X N vector
Matrix::Matrix Matrix::Vector::asRowMatrix() const {
    std::vector<std::vector<Matrix::ValueType>> matVector = {1, contents};
    Matrix rowMatrix(matVector);
    return rowMatrix;
}

//convert this vector to an N X 1 vector
// N rows 1 column so must update rows
// can't directly access contents so
// must create 2D vector for Matrix constructor
Matrix::Matrix Matrix::Vector::asColMatrix() const{
    std::vector<std::vector<Matrix::ValueType>> colVector;
    for (int i = 0; i < numElements; ++i){
        std::vector<Matrix::ValueType> tempVec;
        for (int j = 0; j < 1; ++j){
            tempVec.push_back(contents[i]);
        }
        colVector.push_back(tempVec);
    }
    Matrix colMatrix(colVector);
    return colMatrix;

}

//convert this vector to a 1 X N vector
Matrix::Vector::operator Matrix() const{
    return Vector::asRowMatrix();
}


//element access
//return the element at the specified index
//it will always be in bounds
// read
const Matrix::ValueType& Matrix::Vector::at(int index) const {
    try {
       if (index < 0 || index > numElements - 1) {
           throw VectorOutOfBoundsError(index, numElements - 1);
       }
    } catch (VectorOutOfBoundsError& e) {
          throw;
    } catch (OutOfBoundsError& e) {
        std::cout << e.what() <<std::endl;
    }
    return contents[index];
}

// can write and change value
Matrix::ValueType& Matrix::Vector::at(int index){
    try {
        if (index < 0 || index > numElements - 1) {
            throw VectorOutOfBoundsError(index, numElements - 1);
        }
    } catch (VectorOutOfBoundsError& e) {
        throw;
    } catch (OutOfBoundsError& e) {
        std::cout << e.what() <<std::endl;
    }
    return contents[index];
}

const Matrix::ValueType& Matrix::Vector::operator[](int index) const{
    try {
        if (index < 0 || index > numElements - 1) {
            throw VectorOutOfBoundsError(index, numElements - 1);
        }
    } catch (VectorOutOfBoundsError& e) {
        throw;
    } catch (OutOfBoundsError& e) {
        std::cout << e.what() <<std::endl;
    }
    return at(index);
}
Matrix::ValueType& Matrix::Vector::operator[](int index){
    try {
        if (index < 0 || index > numElements - 1) {
            throw VectorOutOfBoundsError(index, numElements - 1);
        }
    } catch (VectorOutOfBoundsError& e) {
        throw;
    } catch (OutOfBoundsError& e) {
        std::cout << e.what() <<std::endl;
    }
    return at(index);
}

//print the elements of vec out with a space between each element
std::ostream& Matrix::operator<<(std::ostream& out, const Vector& vec){
    for (int i = 0; i < vec.size(); ++i){
        out << vec[i] << " ";
    }
    //std::cout << std::endl;
    return out;
}

//read the next vec.size() values from in, into vec
std::istream& Matrix::operator>>(std::istream& in, Vector& vec){
    for (int i = 0; i < vec.size(); ++i) {
        in >> vec[i];
    }
    return in;
}

//negation
//return a new vector with all elements of self negated
Matrix::Vector operator-(const Matrix::Vector& self){
    Matrix::Vector copy(self);
    copy -= self;
    return copy;
}

//scalar and vector operations

//scalar and vector addition
//scalar and vector addition isn't formally defined in mathematics
//but we are going to do it anyway
//add the scalar value to each of the elements in the Vector
Matrix::Vector& Matrix::operator+=(Vector& vector, const Vector::ValueType& scalar) {
    for (int i = 0; i < vector.size(); ++i){
        vector[i] = scalar + vector[i];
    }
    return vector;
}

Matrix::Vector Matrix::operator+(const Vector& vector, const Vector::ValueType& scalar){
    Vector copy(vector);
    for (int i = 0; i < copy.size(); ++i){
        copy[i] = copy[i] + scalar;
    }
    return copy;
}

Matrix::Vector Matrix::operator+(const Vector::ValueType& scalar, const Vector& vector){
    Vector copy(vector);
    for (int i = 0; i < copy.size(); ++i){
        copy[i] = scalar + copy[i];
    }
    return copy;
}

//scalar and vector subtraction
//scalar and vector subtraction isn't formally defined in mathematics
//but we are going to do it anyway

//subtract the scalar from vector each element of Vector
Matrix::Vector& Matrix::operator-=(Vector& vector, const Vector::ValueType& scalar) {
    for (int i = 0; i < vector.size(); ++i){
        vector[i] = vector[i] - scalar;
    }
    return vector;
}
Matrix::Vector Matrix::operator-(const Vector& vector, const Vector::ValueType& scalar) {
    Vector copy(vector);
    for (int i = 0; i < copy.size(); ++i){
        copy[i] = copy[i] - scalar;
    }
    return copy;
}

//treat scalar as a Vector the same size as vector for this operation
Matrix::Vector Matrix::operator-(const Vector::ValueType& scalar, const Vector& vector){
    Vector copy(vector);
    for (int i = 0; i < copy.size(); ++i){
        copy[i] = scalar - copy[i];
    }
    return copy;
}

//scalar and vector multiplication
//multiply each element in vector by the scalar
Matrix::Vector& Matrix::operator*=(Vector& vector, const Vector::ValueType& scalar){
    for (int i = 0; i < vector.size(); ++i){
        vector[i] = vector[i] * scalar;
    }
    return vector;
}
Matrix::Vector Matrix::operator*(const Vector& vector, const Vector::ValueType& scalar){
    Vector copy(vector);
    for (int i = 0; i < copy.size(); ++i){
        copy[i] = copy[i] * scalar;
    }
    return copy;
}
Matrix::Vector Matrix::operator*(const Vector::ValueType& scalar, const Vector& vector){
    Vector copy(vector);
    for (int i = 0; i < copy.size(); ++i){
        copy[i] = scalar * copy[i];
    }
    return copy;
}

//scalar and division subtraction
//divide each element in vector by the scalar
Matrix::Vector& Matrix::operator/=(Vector& vector, const Vector::ValueType& scalar){
    try {
        if (scalar == 0){
            throw DivideByZeroError(1);
        }

        for (int i = 0; i < vector.size(); ++i){
            vector[i] = vector[i] / scalar;
        }

    } catch (DivideByZeroError& e){
        throw;
    } catch (MatrixError& er) {
        std::cout << er.what() << std::endl;
    }
    return vector;
}

Matrix::Vector Matrix::operator/(const Vector& vector, const Vector::ValueType& scalar){
    Vector copy(vector);
    try{
        if (scalar == 0){
            throw DivideByZeroError(1);
        }

        for (int i = 0; i < copy.size(); ++i) {
            copy[i] = copy[i] / scalar;
        }
    } catch (DivideByZeroError& e) {
        throw;
    } catch (MatrixError& er) {
        std::cout << er.what() << std::endl;
    }
    return copy;
}
//division of a scalar by a vector isn't very well defined so we aren't implementing it

//add together the elements in both vectors at the same positions together
//the vectors will have the same size
Matrix::Vector& Matrix::operator+=(Vector& lhs, const Vector& rhs){

    try {
        if (lhs.contents.size() != rhs.contents.size()) {
            throw VectorDimensionMismatchError(lhs.contents.size(), rhs.contents.size());
        }
        auto elemItr = lhs.contents.begin();
        for (const auto& element : rhs.contents){
            *elemItr += element;
            ++elemItr;
        }
    } catch(VectorDimensionMismatchError& e){
        throw;
    } catch (DimensionMismatchError& e) {
        std::cout << e.what() <<std::endl;
    }
    return lhs;
}
Matrix::Vector Matrix::operator+(const Vector& lhs, const Vector& rhs){
    Vector copy(lhs);

    try {
        if (lhs.contents.size() != rhs.contents.size()) {
            throw VectorDimensionMismatchError(lhs.contents.size(), rhs.contents.size());
        }
        auto elemItr = copy.contents.begin();
        for (const auto& element : rhs.contents){
            *elemItr += element;
            ++elemItr;
        }
    } catch(VectorDimensionMismatchError& e){
        throw;
    } catch (DimensionMismatchError& e) {
        std::cout << e.what() << std::endl;
    }
    return copy;
}

Matrix::Vector& Matrix::operator-=(Vector& lhs, const Vector& rhs){
    try {
        if (lhs.contents.size() != rhs.contents.size()) {
            throw VectorDimensionMismatchError(lhs.contents.size(), rhs.contents.size());
        }
        auto elemItr = lhs.contents.begin();
        for (const auto& element : rhs.contents){
            *elemItr -= element;
            ++elemItr;
        }
    } catch(VectorDimensionMismatchError& e){
        throw;
    } catch (DimensionMismatchError& e) {
        std::cout << e.what() << std::endl;
    }
    return lhs;
}
Matrix::Vector Matrix::operator-(const Vector& lhs, const Vector& rhs){
    Vector copy(lhs);

    try {
        if (lhs.contents.size() != rhs.contents.size()) {
            throw VectorDimensionMismatchError(lhs.contents.size(), rhs.contents.size());
        }
        auto elemItr = copy.contents.begin();
        for (const auto& element : rhs.contents){
            *elemItr -= element;
            ++elemItr;
        }
    } catch(VectorDimensionMismatchError& e){
        throw;
    } catch (DimensionMismatchError& e) {
        std::cout << e.what() << std::endl;
    }
    return copy;
}

// iterate through vector through and loop through iterator address
Matrix::Vector::ValueType Matrix::operator*=(Vector& lhs, const Vector& rhs){
    auto elemItr2 = lhs.contents.begin();
    try {
        if (lhs.contents.size() != rhs.contents.size()) {
            throw VectorDimensionMismatchError(lhs.contents.size(), rhs.contents.size());
        }
        auto elemItr = lhs.contents.begin();
        for (const auto& element : rhs.contents){
            *elemItr *= element;
            ++elemItr;
        }
        // add together all the multiplied values
        // put into beginning
        // returns total as a double
        // only 1 element in vector

        double temp = *elemItr2;
        for (const auto& element : lhs.contents){
            *elemItr2 += element;
        }
        // first value added an extra time
        // delete extra occurrence
        *elemItr2 = *elemItr2 - temp;
        int length = lhs.contents.size();
        // remove all elements except first one to get 1 element vector of total value
        for (int i = 0; i < length - 1; ++i) {
            lhs.contents.pop_back();
        }
        lhs.numElements = 1;
    } catch(VectorDimensionMismatchError& e){
        throw;
    } catch (DimensionMismatchError& e) {
        std::cout << e.what() << std::endl;
    }
    return lhs.contents[0];
}

// same as above but a copy of lhs and rhs because can not directly update const
Matrix::Vector::ValueType Matrix::operator*(const Vector& lhs, const Vector& rhs){
    Vector copy(lhs);
    auto elemItr2 = copy.contents.begin();
    try {
        if (lhs.contents.size() != rhs.contents.size()) {
            throw VectorDimensionMismatchError(lhs.contents.size(), rhs.contents.size());
        }
        auto elemItr = copy.contents.begin();
        for (const auto& element : rhs.contents){
            *elemItr *= element;
            ++elemItr;
        }
        double temp = *elemItr2;
        for (const auto& element : copy.contents){
            *elemItr2 += element;
        }
        *elemItr2 = *elemItr2 - temp;
        int length = copy.contents.size();
        for (int i = 0; i < length - 1; ++i){
            copy.contents.pop_back();
        }
    } catch(VectorDimensionMismatchError& e){
        throw;
    } catch (DimensionMismatchError& e) {
        std::cout << e.what() << std::endl;
    }
    return *elemItr2;
}

