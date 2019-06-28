//
// Created by mfbut on 5/14/2019.
//

#ifndef MATRIX_MATRIXDIMENSIONMISMATCHERROR_H
#define MATRIX_MATRIXDIMENSIONMISMATCHERROR_H

#include <DimensionMismatchError.h>


//used to signify that the operation requested to be
//performed on the matrices cannot be done because
//they are not the same size
namespace Matrix {

  //should inherit from DimensionMismatchError
  class MatrixDimensionMismatchError : public DimensionMismatchError {
    public:
      MatrixDimensionMismatchError(const int dimen1, const int dimen2, const int isRow);

    protected:
      const int dimen1;
      const int dimen2;
      const int isRow;

  };
}

#endif //MATRIX_MATRIXDIMENSIONMISMATCHERROR_H
