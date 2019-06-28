//
// Created by mfbut on 5/2/2019.
//

#ifndef MATRIX_VECTOR_H
#define MATRIX_VECTOR_H
#include <vector>
#include <iostream>
#include <string>
#include "MatrixTypeDefs.h"


namespace Matrix {
    class Matrix; //forward declaration

    class Vector {
    public:
        using ValueType = ::Matrix::ValueType;
        using SizeType = ::Matrix::SizeType;
        friend Vector& operator+=(Vector& lhs, const Vector& rhs);
        friend Vector operator+(const Vector& lhs, const Vector& rhs);
        friend Vector& operator-=(Vector& lhs, const Vector& rhs);
        friend Vector operator-(const Vector& lhs, const Vector& rhs);
        friend Vector::ValueType operator*=(Vector& lhs, const Vector& rhs);
        friend Vector::ValueType operator*(const Vector& lhs, const Vector& rhs);


        //constructors

        //create a vector the same size as contents with the same values
        Vector(const std::vector<ValueType>& contents);

        //create a vector numElements big where the elements are all initialized to value
        Vector(const SizeType& numElements, const ValueType& value);

        //create a vector numElements big where the elements are all initialized to 0
        Vector(const SizeType& numElements);

        //copy constructor
        Vector(const Vector& orig) = default;
        virtual ~Vector() = default;

        SizeType size() const;

        //conversion to matrix functions

        //convert this vector to a 1 X N vector
        Matrix asRowMatrix() const;

        //convert this vector to an N X 1 vector
        Matrix asColMatrix() const;

        //convert this vector to a 1 X N vector
        operator Matrix() const;

        //element access
        //return the element at the specified index
        //it will always be in bounds
        const ValueType& at(int index) const;
        ValueType& at(int index);

        const ValueType& operator[](int index) const;
        ValueType& operator[](int index);

    private:
        std::vector<ValueType> contents;
        SizeType numElements;
//    SizeType curSize;
//    ValueType value;
    };

    //print the elements of vec out with a space between each element
    std::ostream& operator<<(std::ostream& out, const Vector& vec);

    //read the next vec.size() values from in, into vec
    std::istream& operator>>(std::istream& in, Vector& vec);

    //negation
    //return a new vector with all elements of self negated
    Vector operator-(const Vector& self);

    //scalar and vector operations

    //scalar and vector addition
    //scalar and vector addition isn't formally defined in mathematics
    //but we are going to do it anyway
    //add the scalar value to each of the elements in the Vector
    Vector& operator+=(Vector& vector, const Vector::ValueType& scalar);
    Vector operator+(const Vector& vector, const Vector::ValueType& scalar);
    Vector operator+(const Vector::ValueType& scalar, const Vector& vector);

    //scalar and vector subtraction
    //scalar and vector subtraction isn't formally defined in mathematics
    //but we are going to do it anyway

    //subtract the scalar from vector each element of Vector
    Vector& operator-=(Vector& vector, const Vector::ValueType& scalar);
    Vector operator-(const Vector& vector, const Vector::ValueType& scalar);

    //treat scalar as a Vector the same size as vector for this operation
    //then it will just be like the vector addition below
    Vector operator-(const Vector::ValueType& scalar, const Vector& vector);

    //scalar and vector multiplication
    //multiply each element in vector by the scalar
    Vector& operator*=(Vector& vector, const Vector::ValueType& scalar);
    Vector operator*(const Vector& vector, const Vector::ValueType& scalar);
    Vector operator*(const Vector::ValueType& scalar, const Vector& vector);

    //scalar and division subtraction
    //divide each element in vector by the scalar
    Vector& operator/=(Vector& vector, const Vector::ValueType& scalar);
    Vector operator/(const Vector& vector, const Vector::ValueType& scalar);
    //division of a scalar by a vector isn't very well defined so we aren't implementing it


    //vector and vector operations

    //vector addition: https://www.varsitytutors.com/hotmath/hotmath_help/topics/adding-and-subtracting-vectors
    //add together the elements in both vectors at the same positions together
    //the vectors will have the same size
    Vector& operator+=(Vector& lhs, const Vector& rhs);
    Vector operator+(const Vector& lhs, const Vector& rhs);

    //vector subtraction: https://www.varsitytutors.com/hotmath/hotmath_help/topics/adding-and-subtracting-vectors
    //subtract from each vector the elements at the same position
    //the vectors will have the same size
    Vector& operator-=(Vector& lhs, const Vector& rhs);
    Vector operator-(const Vector& lhs, const Vector& rhs);

    //dot product: https://www.mathsisfun.com/algebra/vectors-dot-product.html
    //multiply the elements in the same positions together and then add
    //all of the products together. Note the return types of both
    //functions are ValueType as opposed to Vector because
    //we end up with only a single element

    //this will change lhs into a 1 X 1 vector
    Vector::ValueType operator*=(Vector& lhs, const Vector& rhs);

    //lhs isn't modified in this function
    Vector::ValueType operator*(const Vector& lhs, const Vector& rhs);
}

#endif //MATRIX_VECTOR_H
