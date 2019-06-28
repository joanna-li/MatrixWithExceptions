//
// Created by mfbut on 5/19/2019.
//

#ifndef MATRIX_DIVIDEBYZEROERROR_H
#define MATRIX_DIVIDEBYZEROERROR_H

#include "MatrixError.h"

//used to signify an attempted division by scalar value 0
namespace Matrix  {

  //should inherit from MatrixError
  class DivideByZeroError : public MatrixError {
    public:
      DivideByZeroError(const int isVector);

      //virtual ~DivideByZeroError() = default;
      //virtual const char* what() const noexcept;

    protected:
      const int isVector;


  };
}

#endif //MATRIX_DIVIDEBYZEROERROR_H
