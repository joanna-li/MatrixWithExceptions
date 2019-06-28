//
// Created by mfbut on 5/14/2019.
//

#ifndef MATRIX_OUTOFBOUNDSERROR_H
#define MATRIX_OUTOFBOUNDSERROR_H
#include "MatrixError.h"
#include <exception>

//used to signify that an index used to access
//an element in a matrix/vector is out of bounds
namespace Matrix {

  //Should inherit from MatrixError
  class OutOfBoundsError : public MatrixError {
  };
}

#endif //MATRIX_OUTOFBOUNDSERROR_H
