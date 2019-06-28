//
// Created by mfbut on 5/14/2019.
//

#ifndef MATRIX_VECTOROUTOFBOUNDSERROR_H
#define MATRIX_VECTOROUTOFBOUNDSERROR_H

#include <OutOfBoundsError.h>

//used t signify that the index used to access
//an element in the Vector is out of bounds
namespace Matrix {
  //should inherit from OutOfBoundsError
class VectorOutOfBoundsError : public OutOfBoundsError {
    public:
      VectorOutOfBoundsError(const int myIndex, const int maxIndex);

    protected:
      const int myIndex;
      const int maxIndex;

  };
}

#endif //MATRIX_VECTOROUTOFBOUNDSERROR_H
