//
// Created by mfbut on 5/4/2019.
//

#ifndef MATRIX_OBJECTSCALARTESTCASE_H
#define MATRIX_OBJECTSCALARTESTCASE_H

#include <string>
namespace ProgramTesting {
  class ObjectScalarTestCase {
   public:
    ObjectScalarTestCase(const std::string& inputVectorFile, double scalar, const std::string& answerFile);
    std::string objectFileName;
    double scalar;
    std::string solutionFileName;
  };
}

#endif //MATRIX_OBJECTSCALARTESTCASE_H
