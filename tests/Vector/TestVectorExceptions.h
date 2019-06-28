//
// Created by mfbut on 5/15/2019.
//

#ifndef MATRIX_TESTVECTOREXCEPTIONS_H
#define MATRIX_TESTVECTOREXCEPTIONS_H

#include "TestVector.h"
#include "Vector.h"
namespace VectorTesting {

  class TestVectorExceptions : public TestVector{
   public:
    TestVectorExceptions();
   protected:
    Matrix::Vector short_vec, long_vec;
  };
}

#endif //MATRIX_TESTVECTOREXCEPTIONS_H
