//
// Created by mfbut on 5/4/2019.
//

#include "ObjectScalarTestCase.h"

ProgramTesting::ObjectScalarTestCase::ObjectScalarTestCase(const std::string& inputVectorFile, double scalar, const std::string& answerFile)
    : objectFileName(inputVectorFile), scalar(scalar), solutionFileName(answerFile) {}
