//
// Created by mfbut on 5/7/2019.
//

#ifndef MATRIX_OBJECTOBJECTTESTCASE_H
#define MATRIX_OBJECTOBJECTTESTCASE_H
#include <string>
namespace ProgramTesting {

  class ObjectObjectTestCase {
   public:
    std::string lhsFileName, rhsFileName, solutionFileName;
    ObjectObjectTestCase(const std::string& lhsFileName,
                         const std::string& rhsFileName,
                         const std::string& solutionFileName);
  };
}
#endif //MATRIX_OBJECTOBJECTTESTCASE_H
