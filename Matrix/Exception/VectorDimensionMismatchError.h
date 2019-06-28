//
// Created by mfbut on 5/14/2019.
//

#ifndef MATRIX_VECTORDIMENSIONMISMATCHERROR_H
#define MATRIX_VECTORDIMENSIONMISMATCHERROR_H

#include <DimensionMismatchError.h>

//used to signify that the operation can't be performed on
//the vector can't be done as they aren't the same size
namespace Matrix {
  class Vector;
  //should inherit from DimensionMismatchError
  class VectorDimensionMismatchError : public DimensionMismatchError {
    public:
      VectorDimensionMismatchError(const int dimen1, const int dimen2);

    protected:
      const int dimen1;
      const int dimen2;

  };
}

#endif //MATRIX_VECTORDIMENSIONMISMATCHERROR_H
