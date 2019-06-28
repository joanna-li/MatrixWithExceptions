//
// Created by mfbut on 5/14/2019.
//

#ifndef MATRIX_MATRIXOUTOFBOUNDSERROR_H
#define MATRIX_MATRIXOUTOFBOUNDSERROR_H

#include <OutOfBoundsError.h>

//used to signify that at least one of the indices
//used to access an element in a matrix is out of bounds
namespace Matrix {

  //should inherit from OutOfBoundsError
  class MatrixOutOfBoundsError : public OutOfBoundsError {
    public:
      MatrixOutOfBoundsError(const int myIndex, const int maxIndex, const int isRow);

    protected:
      const int myIndex;
      const int maxIndex;
      const int isRow;

  };
}

#endif //MATRIX_MATRIXOUTOFBOUNDSERROR_H
