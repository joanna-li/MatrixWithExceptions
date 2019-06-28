//
// Created by mfbut on 5/5/2019.
//
#include <fstream>
#include "TestVectorAndScalar.h"
#include "TestVector.h"

namespace VectorTesting {
  using namespace ProgramTesting;
  std::vector<ObjectScalarTestCase> TestVectorAndScalar::plusTestCases;
  std::vector<ObjectScalarTestCase> TestVectorAndScalar::minusTestCases;
  std::vector<ObjectScalarTestCase> TestVectorAndScalar::multiplyTestCases;
  std::vector<ObjectScalarTestCase> TestVectorAndScalar::divideTestCases;
  std::vector<ObjectScalarTestCase> TestVectorAndScalar::scalarMinusTestCases;

  void TestVectorAndScalar::SetUpTestSuite() {
    plusTestCases = {
        {INPUT_VECTOR_DIR"/VectorV1-10.txt", -20, SOL_VECTOR_SCALAR_ADD"/VectorV1-10_plus_-20.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-10.txt", -34, SOL_VECTOR_SCALAR_ADD"/VectorV1-10_plus_-34.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-10.txt", 0, SOL_VECTOR_SCALAR_ADD"/VectorV1-10_plus_0.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-10.txt", 1, SOL_VECTOR_SCALAR_ADD"/VectorV1-10_plus_1.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-10.txt", 10, SOL_VECTOR_SCALAR_ADD"/VectorV1-10_plus_10.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-10.txt", 5, SOL_VECTOR_SCALAR_ADD"/VectorV1-10_plus_5.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-1.txt", -20, SOL_VECTOR_SCALAR_ADD"/VectorV1-1_plus_-20.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-1.txt", -34, SOL_VECTOR_SCALAR_ADD"/VectorV1-1_plus_-34.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-1.txt", 0, SOL_VECTOR_SCALAR_ADD"/VectorV1-1_plus_0.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-1.txt", 1, SOL_VECTOR_SCALAR_ADD"/VectorV1-1_plus_1.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-1.txt", 10, SOL_VECTOR_SCALAR_ADD"/VectorV1-1_plus_10.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-1.txt", 5, SOL_VECTOR_SCALAR_ADD"/VectorV1-1_plus_5.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-27.txt", -20, SOL_VECTOR_SCALAR_ADD"/VectorV1-27_plus_-20.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-27.txt", -34, SOL_VECTOR_SCALAR_ADD"/VectorV1-27_plus_-34.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-27.txt", 0, SOL_VECTOR_SCALAR_ADD"/VectorV1-27_plus_0.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-27.txt", 1, SOL_VECTOR_SCALAR_ADD"/VectorV1-27_plus_1.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-27.txt", 10, SOL_VECTOR_SCALAR_ADD"/VectorV1-27_plus_10.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-27.txt", 5, SOL_VECTOR_SCALAR_ADD"/VectorV1-27_plus_5.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-36.txt", -20, SOL_VECTOR_SCALAR_ADD"/VectorV1-36_plus_-20.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-36.txt", -34, SOL_VECTOR_SCALAR_ADD"/VectorV1-36_plus_-34.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-36.txt", 0, SOL_VECTOR_SCALAR_ADD"/VectorV1-36_plus_0.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-36.txt", 1, SOL_VECTOR_SCALAR_ADD"/VectorV1-36_plus_1.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-36.txt", 10, SOL_VECTOR_SCALAR_ADD"/VectorV1-36_plus_10.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-36.txt", 5, SOL_VECTOR_SCALAR_ADD"/VectorV1-36_plus_5.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-5.txt", -20, SOL_VECTOR_SCALAR_ADD"/VectorV1-5_plus_-20.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-5.txt", -34, SOL_VECTOR_SCALAR_ADD"/VectorV1-5_plus_-34.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-5.txt", 0, SOL_VECTOR_SCALAR_ADD"/VectorV1-5_plus_0.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-5.txt", 1, SOL_VECTOR_SCALAR_ADD"/VectorV1-5_plus_1.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-5.txt", 10, SOL_VECTOR_SCALAR_ADD"/VectorV1-5_plus_10.txt"},
        {INPUT_VECTOR_DIR"/VectorV1-5.txt", 5, SOL_VECTOR_SCALAR_ADD"/VectorV1-5_plus_5.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-10.txt", -20, SOL_VECTOR_SCALAR_ADD"/VectorV2-10_plus_-20.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-10.txt", -34, SOL_VECTOR_SCALAR_ADD"/VectorV2-10_plus_-34.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-10.txt", 0, SOL_VECTOR_SCALAR_ADD"/VectorV2-10_plus_0.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-10.txt", 1, SOL_VECTOR_SCALAR_ADD"/VectorV2-10_plus_1.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-10.txt", 10, SOL_VECTOR_SCALAR_ADD"/VectorV2-10_plus_10.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-10.txt", 5, SOL_VECTOR_SCALAR_ADD"/VectorV2-10_plus_5.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-1.txt", -20, SOL_VECTOR_SCALAR_ADD"/VectorV2-1_plus_-20.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-1.txt", -34, SOL_VECTOR_SCALAR_ADD"/VectorV2-1_plus_-34.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-1.txt", 0, SOL_VECTOR_SCALAR_ADD"/VectorV2-1_plus_0.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-1.txt", 1, SOL_VECTOR_SCALAR_ADD"/VectorV2-1_plus_1.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-1.txt", 10, SOL_VECTOR_SCALAR_ADD"/VectorV2-1_plus_10.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-1.txt", 5, SOL_VECTOR_SCALAR_ADD"/VectorV2-1_plus_5.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-27.txt", -20, SOL_VECTOR_SCALAR_ADD"/VectorV2-27_plus_-20.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-27.txt", -34, SOL_VECTOR_SCALAR_ADD"/VectorV2-27_plus_-34.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-27.txt", 0, SOL_VECTOR_SCALAR_ADD"/VectorV2-27_plus_0.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-27.txt", 1, SOL_VECTOR_SCALAR_ADD"/VectorV2-27_plus_1.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-27.txt", 10, SOL_VECTOR_SCALAR_ADD"/VectorV2-27_plus_10.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-27.txt", 5, SOL_VECTOR_SCALAR_ADD"/VectorV2-27_plus_5.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-36.txt", -20, SOL_VECTOR_SCALAR_ADD"/VectorV2-36_plus_-20.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-36.txt", -34, SOL_VECTOR_SCALAR_ADD"/VectorV2-36_plus_-34.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-36.txt", 0, SOL_VECTOR_SCALAR_ADD"/VectorV2-36_plus_0.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-36.txt", 1, SOL_VECTOR_SCALAR_ADD"/VectorV2-36_plus_1.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-36.txt", 10, SOL_VECTOR_SCALAR_ADD"/VectorV2-36_plus_10.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-36.txt", 5, SOL_VECTOR_SCALAR_ADD"/VectorV2-36_plus_5.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-5.txt", -20, SOL_VECTOR_SCALAR_ADD"/VectorV2-5_plus_-20.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-5.txt", -34, SOL_VECTOR_SCALAR_ADD"/VectorV2-5_plus_-34.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-5.txt", 0, SOL_VECTOR_SCALAR_ADD"/VectorV2-5_plus_0.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-5.txt", 1, SOL_VECTOR_SCALAR_ADD"/VectorV2-5_plus_1.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-5.txt", 10, SOL_VECTOR_SCALAR_ADD"/VectorV2-5_plus_10.txt"},
        {INPUT_VECTOR_DIR"/VectorV2-5.txt", 5, SOL_VECTOR_SCALAR_ADD"/VectorV2-5_plus_5.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-10.txt", -20, SOL_VECTOR_SCALAR_ADD"/VectorV3-10_plus_-20.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-10.txt", -34, SOL_VECTOR_SCALAR_ADD"/VectorV3-10_plus_-34.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-10.txt", 0, SOL_VECTOR_SCALAR_ADD"/VectorV3-10_plus_0.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-10.txt", 1, SOL_VECTOR_SCALAR_ADD"/VectorV3-10_plus_1.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-10.txt", 10, SOL_VECTOR_SCALAR_ADD"/VectorV3-10_plus_10.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-10.txt", 5, SOL_VECTOR_SCALAR_ADD"/VectorV3-10_plus_5.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-1.txt", -20, SOL_VECTOR_SCALAR_ADD"/VectorV3-1_plus_-20.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-1.txt", -34, SOL_VECTOR_SCALAR_ADD"/VectorV3-1_plus_-34.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-1.txt", 0, SOL_VECTOR_SCALAR_ADD"/VectorV3-1_plus_0.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-1.txt", 1, SOL_VECTOR_SCALAR_ADD"/VectorV3-1_plus_1.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-1.txt", 10, SOL_VECTOR_SCALAR_ADD"/VectorV3-1_plus_10.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-1.txt", 5, SOL_VECTOR_SCALAR_ADD"/VectorV3-1_plus_5.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-27.txt", -20, SOL_VECTOR_SCALAR_ADD"/VectorV3-27_plus_-20.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-27.txt", -34, SOL_VECTOR_SCALAR_ADD"/VectorV3-27_plus_-34.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-27.txt", 0, SOL_VECTOR_SCALAR_ADD"/VectorV3-27_plus_0.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-27.txt", 1, SOL_VECTOR_SCALAR_ADD"/VectorV3-27_plus_1.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-27.txt", 10, SOL_VECTOR_SCALAR_ADD"/VectorV3-27_plus_10.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-27.txt", 5, SOL_VECTOR_SCALAR_ADD"/VectorV3-27_plus_5.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-36.txt", -20, SOL_VECTOR_SCALAR_ADD"/VectorV3-36_plus_-20.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-36.txt", -34, SOL_VECTOR_SCALAR_ADD"/VectorV3-36_plus_-34.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-36.txt", 0, SOL_VECTOR_SCALAR_ADD"/VectorV3-36_plus_0.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-36.txt", 1, SOL_VECTOR_SCALAR_ADD"/VectorV3-36_plus_1.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-36.txt", 10, SOL_VECTOR_SCALAR_ADD"/VectorV3-36_plus_10.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-36.txt", 5, SOL_VECTOR_SCALAR_ADD"/VectorV3-36_plus_5.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-5.txt", -20, SOL_VECTOR_SCALAR_ADD"/VectorV3-5_plus_-20.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-5.txt", -34, SOL_VECTOR_SCALAR_ADD"/VectorV3-5_plus_-34.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-5.txt", 0, SOL_VECTOR_SCALAR_ADD"/VectorV3-5_plus_0.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-5.txt", 1, SOL_VECTOR_SCALAR_ADD"/VectorV3-5_plus_1.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-5.txt", 10, SOL_VECTOR_SCALAR_ADD"/VectorV3-5_plus_10.txt"},
        {INPUT_VECTOR_DIR"/VectorV3-5.txt", 5, SOL_VECTOR_SCALAR_ADD"/VectorV3-5_plus_5.txt"}};

    minusTestCases = {{INPUT_VECTOR_DIR"/VectorV1-10.txt", -20, SOL_VECTOR_SCALAR_MINUS"/VectorV1-10_minus_-20.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-10.txt", -34, SOL_VECTOR_SCALAR_MINUS"/VectorV1-10_minus_-34.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-10.txt", 0, SOL_VECTOR_SCALAR_MINUS"/VectorV1-10_minus_0.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-10.txt", 1, SOL_VECTOR_SCALAR_MINUS"/VectorV1-10_minus_1.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-10.txt", 10, SOL_VECTOR_SCALAR_MINUS"/VectorV1-10_minus_10.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-10.txt", 5, SOL_VECTOR_SCALAR_MINUS"/VectorV1-10_minus_5.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-1.txt", -20, SOL_VECTOR_SCALAR_MINUS"/VectorV1-1_minus_-20.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-1.txt", -34, SOL_VECTOR_SCALAR_MINUS"/VectorV1-1_minus_-34.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-1.txt", 0, SOL_VECTOR_SCALAR_MINUS"/VectorV1-1_minus_0.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-1.txt", 1, SOL_VECTOR_SCALAR_MINUS"/VectorV1-1_minus_1.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-1.txt", 10, SOL_VECTOR_SCALAR_MINUS"/VectorV1-1_minus_10.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-1.txt", 5, SOL_VECTOR_SCALAR_MINUS"/VectorV1-1_minus_5.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-27.txt", -20, SOL_VECTOR_SCALAR_MINUS"/VectorV1-27_minus_-20.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-27.txt", -34, SOL_VECTOR_SCALAR_MINUS"/VectorV1-27_minus_-34.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-27.txt", 0, SOL_VECTOR_SCALAR_MINUS"/VectorV1-27_minus_0.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-27.txt", 1, SOL_VECTOR_SCALAR_MINUS"/VectorV1-27_minus_1.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-27.txt", 10, SOL_VECTOR_SCALAR_MINUS"/VectorV1-27_minus_10.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-27.txt", 5, SOL_VECTOR_SCALAR_MINUS"/VectorV1-27_minus_5.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-36.txt", -20, SOL_VECTOR_SCALAR_MINUS"/VectorV1-36_minus_-20.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-36.txt", -34, SOL_VECTOR_SCALAR_MINUS"/VectorV1-36_minus_-34.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-36.txt", 0, SOL_VECTOR_SCALAR_MINUS"/VectorV1-36_minus_0.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-36.txt", 1, SOL_VECTOR_SCALAR_MINUS"/VectorV1-36_minus_1.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-36.txt", 10, SOL_VECTOR_SCALAR_MINUS"/VectorV1-36_minus_10.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-36.txt", 5, SOL_VECTOR_SCALAR_MINUS"/VectorV1-36_minus_5.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-5.txt", -20, SOL_VECTOR_SCALAR_MINUS"/VectorV1-5_minus_-20.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-5.txt", -34, SOL_VECTOR_SCALAR_MINUS"/VectorV1-5_minus_-34.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-5.txt", 0, SOL_VECTOR_SCALAR_MINUS"/VectorV1-5_minus_0.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-5.txt", 1, SOL_VECTOR_SCALAR_MINUS"/VectorV1-5_minus_1.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-5.txt", 10, SOL_VECTOR_SCALAR_MINUS"/VectorV1-5_minus_10.txt"},
                      {INPUT_VECTOR_DIR"/VectorV1-5.txt", 5, SOL_VECTOR_SCALAR_MINUS"/VectorV1-5_minus_5.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-10.txt", -20, SOL_VECTOR_SCALAR_MINUS"/VectorV2-10_minus_-20.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-10.txt", -34, SOL_VECTOR_SCALAR_MINUS"/VectorV2-10_minus_-34.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-10.txt", 0, SOL_VECTOR_SCALAR_MINUS"/VectorV2-10_minus_0.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-10.txt", 1, SOL_VECTOR_SCALAR_MINUS"/VectorV2-10_minus_1.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-10.txt", 10, SOL_VECTOR_SCALAR_MINUS"/VectorV2-10_minus_10.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-10.txt", 5, SOL_VECTOR_SCALAR_MINUS"/VectorV2-10_minus_5.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-1.txt", -20, SOL_VECTOR_SCALAR_MINUS"/VectorV2-1_minus_-20.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-1.txt", -34, SOL_VECTOR_SCALAR_MINUS"/VectorV2-1_minus_-34.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-1.txt", 0, SOL_VECTOR_SCALAR_MINUS"/VectorV2-1_minus_0.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-1.txt", 1, SOL_VECTOR_SCALAR_MINUS"/VectorV2-1_minus_1.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-1.txt", 10, SOL_VECTOR_SCALAR_MINUS"/VectorV2-1_minus_10.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-1.txt", 5, SOL_VECTOR_SCALAR_MINUS"/VectorV2-1_minus_5.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-27.txt", -20, SOL_VECTOR_SCALAR_MINUS"/VectorV2-27_minus_-20.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-27.txt", -34, SOL_VECTOR_SCALAR_MINUS"/VectorV2-27_minus_-34.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-27.txt", 0, SOL_VECTOR_SCALAR_MINUS"/VectorV2-27_minus_0.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-27.txt", 1, SOL_VECTOR_SCALAR_MINUS"/VectorV2-27_minus_1.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-27.txt", 10, SOL_VECTOR_SCALAR_MINUS"/VectorV2-27_minus_10.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-27.txt", 5, SOL_VECTOR_SCALAR_MINUS"/VectorV2-27_minus_5.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-36.txt", -20, SOL_VECTOR_SCALAR_MINUS"/VectorV2-36_minus_-20.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-36.txt", -34, SOL_VECTOR_SCALAR_MINUS"/VectorV2-36_minus_-34.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-36.txt", 0, SOL_VECTOR_SCALAR_MINUS"/VectorV2-36_minus_0.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-36.txt", 1, SOL_VECTOR_SCALAR_MINUS"/VectorV2-36_minus_1.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-36.txt", 10, SOL_VECTOR_SCALAR_MINUS"/VectorV2-36_minus_10.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-36.txt", 5, SOL_VECTOR_SCALAR_MINUS"/VectorV2-36_minus_5.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-5.txt", -20, SOL_VECTOR_SCALAR_MINUS"/VectorV2-5_minus_-20.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-5.txt", -34, SOL_VECTOR_SCALAR_MINUS"/VectorV2-5_minus_-34.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-5.txt", 0, SOL_VECTOR_SCALAR_MINUS"/VectorV2-5_minus_0.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-5.txt", 1, SOL_VECTOR_SCALAR_MINUS"/VectorV2-5_minus_1.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-5.txt", 10, SOL_VECTOR_SCALAR_MINUS"/VectorV2-5_minus_10.txt"},
                      {INPUT_VECTOR_DIR"/VectorV2-5.txt", 5, SOL_VECTOR_SCALAR_MINUS"/VectorV2-5_minus_5.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-10.txt", -20, SOL_VECTOR_SCALAR_MINUS"/VectorV3-10_minus_-20.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-10.txt", -34, SOL_VECTOR_SCALAR_MINUS"/VectorV3-10_minus_-34.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-10.txt", 0, SOL_VECTOR_SCALAR_MINUS"/VectorV3-10_minus_0.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-10.txt", 1, SOL_VECTOR_SCALAR_MINUS"/VectorV3-10_minus_1.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-10.txt", 10, SOL_VECTOR_SCALAR_MINUS"/VectorV3-10_minus_10.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-10.txt", 5, SOL_VECTOR_SCALAR_MINUS"/VectorV3-10_minus_5.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-1.txt", -20, SOL_VECTOR_SCALAR_MINUS"/VectorV3-1_minus_-20.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-1.txt", -34, SOL_VECTOR_SCALAR_MINUS"/VectorV3-1_minus_-34.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-1.txt", 0, SOL_VECTOR_SCALAR_MINUS"/VectorV3-1_minus_0.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-1.txt", 1, SOL_VECTOR_SCALAR_MINUS"/VectorV3-1_minus_1.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-1.txt", 10, SOL_VECTOR_SCALAR_MINUS"/VectorV3-1_minus_10.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-1.txt", 5, SOL_VECTOR_SCALAR_MINUS"/VectorV3-1_minus_5.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-27.txt", -20, SOL_VECTOR_SCALAR_MINUS"/VectorV3-27_minus_-20.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-27.txt", -34, SOL_VECTOR_SCALAR_MINUS"/VectorV3-27_minus_-34.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-27.txt", 0, SOL_VECTOR_SCALAR_MINUS"/VectorV3-27_minus_0.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-27.txt", 1, SOL_VECTOR_SCALAR_MINUS"/VectorV3-27_minus_1.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-27.txt", 10, SOL_VECTOR_SCALAR_MINUS"/VectorV3-27_minus_10.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-27.txt", 5, SOL_VECTOR_SCALAR_MINUS"/VectorV3-27_minus_5.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-36.txt", -20, SOL_VECTOR_SCALAR_MINUS"/VectorV3-36_minus_-20.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-36.txt", -34, SOL_VECTOR_SCALAR_MINUS"/VectorV3-36_minus_-34.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-36.txt", 0, SOL_VECTOR_SCALAR_MINUS"/VectorV3-36_minus_0.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-36.txt", 1, SOL_VECTOR_SCALAR_MINUS"/VectorV3-36_minus_1.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-36.txt", 10, SOL_VECTOR_SCALAR_MINUS"/VectorV3-36_minus_10.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-36.txt", 5, SOL_VECTOR_SCALAR_MINUS"/VectorV3-36_minus_5.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-5.txt", -20, SOL_VECTOR_SCALAR_MINUS"/VectorV3-5_minus_-20.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-5.txt", -34, SOL_VECTOR_SCALAR_MINUS"/VectorV3-5_minus_-34.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-5.txt", 0, SOL_VECTOR_SCALAR_MINUS"/VectorV3-5_minus_0.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-5.txt", 1, SOL_VECTOR_SCALAR_MINUS"/VectorV3-5_minus_1.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-5.txt", 10, SOL_VECTOR_SCALAR_MINUS"/VectorV3-5_minus_10.txt"},
                      {INPUT_VECTOR_DIR"/VectorV3-5.txt", 5, SOL_VECTOR_SCALAR_MINUS"/VectorV3-5_minus_5.txt"}};

    multiplyTestCases =
        {{INPUT_VECTOR_DIR"/VectorV1-10.txt", -20, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-10_times_-20.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-10.txt", -34, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-10_times_-34.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-10.txt", 0, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-10_times_0.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-10.txt", 1, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-10_times_1.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-10.txt", 10, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-10_times_10.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-10.txt", 5, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-10_times_5.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-1.txt", -20, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-1_times_-20.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-1.txt", -34, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-1_times_-34.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-1.txt", 0, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-1_times_0.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-1.txt", 1, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-1_times_1.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-1.txt", 10, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-1_times_10.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-1.txt", 5, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-1_times_5.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-27.txt", -20, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-27_times_-20.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-27.txt", -34, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-27_times_-34.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-27.txt", 0, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-27_times_0.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-27.txt", 1, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-27_times_1.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-27.txt", 10, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-27_times_10.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-27.txt", 5, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-27_times_5.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-36.txt", -20, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-36_times_-20.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-36.txt", -34, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-36_times_-34.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-36.txt", 0, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-36_times_0.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-36.txt", 1, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-36_times_1.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-36.txt", 10, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-36_times_10.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-36.txt", 5, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-36_times_5.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-5.txt", -20, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-5_times_-20.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-5.txt", -34, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-5_times_-34.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-5.txt", 0, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-5_times_0.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-5.txt", 1, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-5_times_1.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-5.txt", 10, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-5_times_10.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-5.txt", 5, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV1-5_times_5.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-10.txt", -20, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-10_times_-20.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-10.txt", -34, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-10_times_-34.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-10.txt", 0, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-10_times_0.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-10.txt", 1, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-10_times_1.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-10.txt", 10, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-10_times_10.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-10.txt", 5, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-10_times_5.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-1.txt", -20, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-1_times_-20.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-1.txt", -34, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-1_times_-34.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-1.txt", 0, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-1_times_0.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-1.txt", 1, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-1_times_1.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-1.txt", 10, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-1_times_10.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-1.txt", 5, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-1_times_5.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-27.txt", -20, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-27_times_-20.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-27.txt", -34, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-27_times_-34.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-27.txt", 0, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-27_times_0.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-27.txt", 1, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-27_times_1.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-27.txt", 10, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-27_times_10.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-27.txt", 5, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-27_times_5.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-36.txt", -20, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-36_times_-20.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-36.txt", -34, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-36_times_-34.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-36.txt", 0, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-36_times_0.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-36.txt", 1, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-36_times_1.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-36.txt", 10, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-36_times_10.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-36.txt", 5, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-36_times_5.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-5.txt", -20, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-5_times_-20.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-5.txt", -34, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-5_times_-34.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-5.txt", 0, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-5_times_0.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-5.txt", 1, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-5_times_1.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-5.txt", 10, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-5_times_10.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-5.txt", 5, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV2-5_times_5.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-10.txt", -20, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-10_times_-20.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-10.txt", -34, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-10_times_-34.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-10.txt", 0, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-10_times_0.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-10.txt", 1, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-10_times_1.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-10.txt", 10, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-10_times_10.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-10.txt", 5, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-10_times_5.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-1.txt", -20, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-1_times_-20.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-1.txt", -34, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-1_times_-34.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-1.txt", 0, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-1_times_0.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-1.txt", 1, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-1_times_1.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-1.txt", 10, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-1_times_10.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-1.txt", 5, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-1_times_5.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-27.txt", -20, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-27_times_-20.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-27.txt", -34, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-27_times_-34.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-27.txt", 0, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-27_times_0.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-27.txt", 1, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-27_times_1.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-27.txt", 10, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-27_times_10.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-27.txt", 5, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-27_times_5.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-36.txt", -20, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-36_times_-20.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-36.txt", -34, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-36_times_-34.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-36.txt", 0, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-36_times_0.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-36.txt", 1, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-36_times_1.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-36.txt", 10, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-36_times_10.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-36.txt", 5, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-36_times_5.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-5.txt", -20, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-5_times_-20.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-5.txt", -34, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-5_times_-34.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-5.txt", 0, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-5_times_0.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-5.txt", 1, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-5_times_1.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-5.txt", 10, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-5_times_10.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-5.txt", 5, SOL_VECTOR_SCALAR_MULTIPLY"/VectorV3-5_times_5.txt"}};

    divideTestCases = {{INPUT_VECTOR_DIR"/VectorV1-10.txt",-20,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-10_divide_-20.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-10.txt",-34,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-10_divide_-34.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-10.txt",1,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-10_divide_1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-10.txt",10,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-10_divide_10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-10.txt",5,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-10_divide_5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-1.txt",-20,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-1_divide_-20.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-1.txt",-34,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-1_divide_-34.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-1.txt",1,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-1_divide_1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-1.txt",10,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-1_divide_10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-1.txt",5,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-1_divide_5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-27.txt",-20,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-27_divide_-20.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-27.txt",-34,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-27_divide_-34.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-27.txt",1,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-27_divide_1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-27.txt",10,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-27_divide_10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-27.txt",5,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-27_divide_5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-36.txt",-20,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-36_divide_-20.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-36.txt",-34,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-36_divide_-34.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-36.txt",1,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-36_divide_1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-36.txt",10,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-36_divide_10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-36.txt",5,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-36_divide_5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-5.txt",-20,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-5_divide_-20.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-5.txt",-34,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-5_divide_-34.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-5.txt",1,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-5_divide_1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-5.txt",10,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-5_divide_10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-5.txt",5,SOL_VECTOR_SCALAR_DIVIDE"/VectorV1-5_divide_5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-10.txt",-20,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-10_divide_-20.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-10.txt",-34,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-10_divide_-34.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-10.txt",1,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-10_divide_1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-10.txt",10,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-10_divide_10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-10.txt",5,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-10_divide_5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-1.txt",-20,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-1_divide_-20.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-1.txt",-34,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-1_divide_-34.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-1.txt",1,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-1_divide_1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-1.txt",10,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-1_divide_10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-1.txt",5,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-1_divide_5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-27.txt",-20,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-27_divide_-20.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-27.txt",-34,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-27_divide_-34.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-27.txt",1,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-27_divide_1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-27.txt",10,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-27_divide_10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-27.txt",5,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-27_divide_5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-36.txt",-20,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-36_divide_-20.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-36.txt",-34,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-36_divide_-34.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-36.txt",1,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-36_divide_1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-36.txt",10,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-36_divide_10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-36.txt",5,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-36_divide_5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-5.txt",-20,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-5_divide_-20.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-5.txt",-34,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-5_divide_-34.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-5.txt",1,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-5_divide_1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-5.txt",10,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-5_divide_10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-5.txt",5,SOL_VECTOR_SCALAR_DIVIDE"/VectorV2-5_divide_5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-10.txt",-20,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-10_divide_-20.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-10.txt",-34,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-10_divide_-34.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-10.txt",1,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-10_divide_1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-10.txt",10,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-10_divide_10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-10.txt",5,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-10_divide_5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-1.txt",-20,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-1_divide_-20.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-1.txt",-34,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-1_divide_-34.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-1.txt",1,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-1_divide_1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-1.txt",10,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-1_divide_10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-1.txt",5,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-1_divide_5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-27.txt",-20,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-27_divide_-20.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-27.txt",-34,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-27_divide_-34.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-27.txt",1,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-27_divide_1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-27.txt",10,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-27_divide_10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-27.txt",5,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-27_divide_5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-36.txt",-20,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-36_divide_-20.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-36.txt",-34,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-36_divide_-34.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-36.txt",1,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-36_divide_1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-36.txt",10,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-36_divide_10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-36.txt",5,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-36_divide_5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-5.txt",-20,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-5_divide_-20.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-5.txt",-34,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-5_divide_-34.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-5.txt",1,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-5_divide_1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-5.txt",10,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-5_divide_10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-5.txt",5,SOL_VECTOR_SCALAR_DIVIDE"/VectorV3-5_divide_5.txt"}};

    scalarMinusTestCases =
        {{INPUT_VECTOR_DIR"/VectorV1-1.txt", -20, SOL_SCALAR_VECTOR_MINUS"/-20_minus_VectorV1-1.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-10.txt", -20, SOL_SCALAR_VECTOR_MINUS"/-20_minus_VectorV1-10.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-27.txt", -20, SOL_SCALAR_VECTOR_MINUS"/-20_minus_VectorV1-27.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-36.txt", -20, SOL_SCALAR_VECTOR_MINUS"/-20_minus_VectorV1-36.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-5.txt", -20, SOL_SCALAR_VECTOR_MINUS"/-20_minus_VectorV1-5.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-1.txt", -20, SOL_SCALAR_VECTOR_MINUS"/-20_minus_VectorV2-1.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-10.txt", -20, SOL_SCALAR_VECTOR_MINUS"/-20_minus_VectorV2-10.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-27.txt", -20, SOL_SCALAR_VECTOR_MINUS"/-20_minus_VectorV2-27.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-36.txt", -20, SOL_SCALAR_VECTOR_MINUS"/-20_minus_VectorV2-36.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-5.txt", -20, SOL_SCALAR_VECTOR_MINUS"/-20_minus_VectorV2-5.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-1.txt", -20, SOL_SCALAR_VECTOR_MINUS"/-20_minus_VectorV3-1.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-10.txt", -20, SOL_SCALAR_VECTOR_MINUS"/-20_minus_VectorV3-10.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-27.txt", -20, SOL_SCALAR_VECTOR_MINUS"/-20_minus_VectorV3-27.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-36.txt", -20, SOL_SCALAR_VECTOR_MINUS"/-20_minus_VectorV3-36.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-5.txt", -20, SOL_SCALAR_VECTOR_MINUS"/-20_minus_VectorV3-5.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-1.txt", -34, SOL_SCALAR_VECTOR_MINUS"/-34_minus_VectorV1-1.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-10.txt", -34, SOL_SCALAR_VECTOR_MINUS"/-34_minus_VectorV1-10.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-27.txt", -34, SOL_SCALAR_VECTOR_MINUS"/-34_minus_VectorV1-27.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-36.txt", -34, SOL_SCALAR_VECTOR_MINUS"/-34_minus_VectorV1-36.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-5.txt", -34, SOL_SCALAR_VECTOR_MINUS"/-34_minus_VectorV1-5.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-1.txt", -34, SOL_SCALAR_VECTOR_MINUS"/-34_minus_VectorV2-1.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-10.txt", -34, SOL_SCALAR_VECTOR_MINUS"/-34_minus_VectorV2-10.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-27.txt", -34, SOL_SCALAR_VECTOR_MINUS"/-34_minus_VectorV2-27.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-36.txt", -34, SOL_SCALAR_VECTOR_MINUS"/-34_minus_VectorV2-36.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-5.txt", -34, SOL_SCALAR_VECTOR_MINUS"/-34_minus_VectorV2-5.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-1.txt", -34, SOL_SCALAR_VECTOR_MINUS"/-34_minus_VectorV3-1.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-10.txt", -34, SOL_SCALAR_VECTOR_MINUS"/-34_minus_VectorV3-10.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-27.txt", -34, SOL_SCALAR_VECTOR_MINUS"/-34_minus_VectorV3-27.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-36.txt", -34, SOL_SCALAR_VECTOR_MINUS"/-34_minus_VectorV3-36.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-5.txt", -34, SOL_SCALAR_VECTOR_MINUS"/-34_minus_VectorV3-5.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-1.txt", 0, SOL_SCALAR_VECTOR_MINUS"/0_minus_VectorV1-1.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-10.txt", 0, SOL_SCALAR_VECTOR_MINUS"/0_minus_VectorV1-10.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-27.txt", 0, SOL_SCALAR_VECTOR_MINUS"/0_minus_VectorV1-27.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-36.txt", 0, SOL_SCALAR_VECTOR_MINUS"/0_minus_VectorV1-36.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-5.txt", 0, SOL_SCALAR_VECTOR_MINUS"/0_minus_VectorV1-5.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-1.txt", 0, SOL_SCALAR_VECTOR_MINUS"/0_minus_VectorV2-1.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-10.txt", 0, SOL_SCALAR_VECTOR_MINUS"/0_minus_VectorV2-10.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-27.txt", 0, SOL_SCALAR_VECTOR_MINUS"/0_minus_VectorV2-27.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-36.txt", 0, SOL_SCALAR_VECTOR_MINUS"/0_minus_VectorV2-36.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-5.txt", 0, SOL_SCALAR_VECTOR_MINUS"/0_minus_VectorV2-5.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-1.txt", 0, SOL_SCALAR_VECTOR_MINUS"/0_minus_VectorV3-1.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-10.txt", 0, SOL_SCALAR_VECTOR_MINUS"/0_minus_VectorV3-10.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-27.txt", 0, SOL_SCALAR_VECTOR_MINUS"/0_minus_VectorV3-27.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-36.txt", 0, SOL_SCALAR_VECTOR_MINUS"/0_minus_VectorV3-36.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-5.txt", 0, SOL_SCALAR_VECTOR_MINUS"/0_minus_VectorV3-5.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-1.txt", 10, SOL_SCALAR_VECTOR_MINUS"/10_minus_VectorV1-1.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-10.txt", 10, SOL_SCALAR_VECTOR_MINUS"/10_minus_VectorV1-10.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-27.txt", 10, SOL_SCALAR_VECTOR_MINUS"/10_minus_VectorV1-27.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-36.txt", 10, SOL_SCALAR_VECTOR_MINUS"/10_minus_VectorV1-36.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-5.txt", 10, SOL_SCALAR_VECTOR_MINUS"/10_minus_VectorV1-5.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-1.txt", 10, SOL_SCALAR_VECTOR_MINUS"/10_minus_VectorV2-1.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-10.txt", 10, SOL_SCALAR_VECTOR_MINUS"/10_minus_VectorV2-10.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-27.txt", 10, SOL_SCALAR_VECTOR_MINUS"/10_minus_VectorV2-27.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-36.txt", 10, SOL_SCALAR_VECTOR_MINUS"/10_minus_VectorV2-36.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-5.txt", 10, SOL_SCALAR_VECTOR_MINUS"/10_minus_VectorV2-5.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-1.txt", 10, SOL_SCALAR_VECTOR_MINUS"/10_minus_VectorV3-1.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-10.txt", 10, SOL_SCALAR_VECTOR_MINUS"/10_minus_VectorV3-10.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-27.txt", 10, SOL_SCALAR_VECTOR_MINUS"/10_minus_VectorV3-27.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-36.txt", 10, SOL_SCALAR_VECTOR_MINUS"/10_minus_VectorV3-36.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-5.txt", 10, SOL_SCALAR_VECTOR_MINUS"/10_minus_VectorV3-5.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-1.txt", 1, SOL_SCALAR_VECTOR_MINUS"/1_minus_VectorV1-1.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-10.txt", 1, SOL_SCALAR_VECTOR_MINUS"/1_minus_VectorV1-10.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-27.txt", 1, SOL_SCALAR_VECTOR_MINUS"/1_minus_VectorV1-27.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-36.txt", 1, SOL_SCALAR_VECTOR_MINUS"/1_minus_VectorV1-36.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-5.txt", 1, SOL_SCALAR_VECTOR_MINUS"/1_minus_VectorV1-5.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-1.txt", 1, SOL_SCALAR_VECTOR_MINUS"/1_minus_VectorV2-1.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-10.txt", 1, SOL_SCALAR_VECTOR_MINUS"/1_minus_VectorV2-10.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-27.txt", 1, SOL_SCALAR_VECTOR_MINUS"/1_minus_VectorV2-27.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-36.txt", 1, SOL_SCALAR_VECTOR_MINUS"/1_minus_VectorV2-36.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-5.txt", 1, SOL_SCALAR_VECTOR_MINUS"/1_minus_VectorV2-5.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-1.txt", 1, SOL_SCALAR_VECTOR_MINUS"/1_minus_VectorV3-1.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-10.txt", 1, SOL_SCALAR_VECTOR_MINUS"/1_minus_VectorV3-10.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-27.txt", 1, SOL_SCALAR_VECTOR_MINUS"/1_minus_VectorV3-27.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-36.txt", 1, SOL_SCALAR_VECTOR_MINUS"/1_minus_VectorV3-36.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-5.txt", 1, SOL_SCALAR_VECTOR_MINUS"/1_minus_VectorV3-5.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-1.txt", 5, SOL_SCALAR_VECTOR_MINUS"/5_minus_VectorV1-1.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-10.txt", 5, SOL_SCALAR_VECTOR_MINUS"/5_minus_VectorV1-10.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-27.txt", 5, SOL_SCALAR_VECTOR_MINUS"/5_minus_VectorV1-27.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-36.txt", 5, SOL_SCALAR_VECTOR_MINUS"/5_minus_VectorV1-36.txt"},
         {INPUT_VECTOR_DIR"/VectorV1-5.txt", 5, SOL_SCALAR_VECTOR_MINUS"/5_minus_VectorV1-5.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-1.txt", 5, SOL_SCALAR_VECTOR_MINUS"/5_minus_VectorV2-1.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-10.txt", 5, SOL_SCALAR_VECTOR_MINUS"/5_minus_VectorV2-10.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-27.txt", 5, SOL_SCALAR_VECTOR_MINUS"/5_minus_VectorV2-27.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-36.txt", 5, SOL_SCALAR_VECTOR_MINUS"/5_minus_VectorV2-36.txt"},
         {INPUT_VECTOR_DIR"/VectorV2-5.txt", 5, SOL_SCALAR_VECTOR_MINUS"/5_minus_VectorV2-5.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-1.txt", 5, SOL_SCALAR_VECTOR_MINUS"/5_minus_VectorV3-1.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-10.txt", 5, SOL_SCALAR_VECTOR_MINUS"/5_minus_VectorV3-10.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-27.txt", 5, SOL_SCALAR_VECTOR_MINUS"/5_minus_VectorV3-27.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-36.txt", 5, SOL_SCALAR_VECTOR_MINUS"/5_minus_VectorV3-36.txt"},
         {INPUT_VECTOR_DIR"/VectorV3-5.txt", 5, SOL_SCALAR_VECTOR_MINUS"/5_minus_VectorV3-5.txt"}};

  }

  void TestVectorAndScalar::TearDownTestSuite() {
    plusTestCases.clear();
    minusTestCases.clear();
    multiplyTestCases.clear();
    divideTestCases.clear();
    scalarMinusTestCases.clear();
  }

  TEST_F(TestVectorAndScalar, VectorPlusScalar) {
    for (const auto& param : plusTestCases) {
      Matrix::Vector v(loadVectorFromFile(param.objectFileName));
      DV answer(loadAnswerVectorFromFile(param.solutionFileName));
      ASSERT_TRUE(v + param.scalar == answer);
    }
  }

  TEST_F(TestVectorAndScalar, VectorPlusEqualScalar) {
    for (const auto& param : plusTestCases) {
      Matrix::Vector v(loadVectorFromFile(param.objectFileName));
      DV answer(loadAnswerVectorFromFile(param.solutionFileName));

      ASSERT_TRUE((v += param.scalar) == answer);
      ASSERT_TRUE(v == answer);
    }
  }

  TEST_F(TestVectorAndScalar, VectorMinusScalar) {
    for (const auto& param : minusTestCases) {
      Matrix::Vector v(loadVectorFromFile(param.objectFileName));
      DV answer(loadAnswerVectorFromFile(param.solutionFileName));
      ASSERT_TRUE(v - param.scalar == answer);
    }
  }

  TEST_F(TestVectorAndScalar, VectorMinusEqualScalar) {
    for (const auto& param : minusTestCases) {
      Matrix::Vector v(loadVectorFromFile(param.objectFileName));
      DV answer(loadAnswerVectorFromFile(param.solutionFileName));

      ASSERT_TRUE((v -= param.scalar) == answer);
      ASSERT_TRUE(v == answer);
    }
  }

  TEST_F(TestVectorAndScalar, VectorTimesScalar) {
    for (const auto& param : multiplyTestCases) {
      Matrix::Vector v(loadVectorFromFile(param.objectFileName));
      DV answer(loadAnswerVectorFromFile(param.solutionFileName));
      ASSERT_TRUE(v * param.scalar == answer);
    }
  }

  TEST_F(TestVectorAndScalar, VectorTimesEqualScalar) {
    for (const auto& param : multiplyTestCases) {
      Matrix::Vector v(loadVectorFromFile(param.objectFileName));
      DV answer(loadAnswerVectorFromFile(param.solutionFileName));

      ASSERT_TRUE((v *= param.scalar) == answer);
      ASSERT_TRUE(v == answer);
    }
  }

  TEST_F(TestVectorAndScalar, VectorDivideScalar) {
    for (const auto& param : divideTestCases) {
      Matrix::Vector v(loadVectorFromFile(param.objectFileName));
      DV answer(loadAnswerVectorFromFile(param.solutionFileName));
      ASSERT_TRUE(v / param.scalar == answer);
    }
  }

  TEST_F(TestVectorAndScalar, VectorDivideEqualScalar) {
    for (const auto& param : divideTestCases) {
      Matrix::Vector v(loadVectorFromFile(param.objectFileName));
      DV answer(loadAnswerVectorFromFile(param.solutionFileName));

      ASSERT_TRUE((v /= param.scalar) == answer);
      ASSERT_TRUE(v == answer);
    }
  }

  TEST_F(TestVectorAndScalar, ScalarMinusVector) {
    for (const auto& param : scalarMinusTestCases) {
      Matrix::Vector v(loadVectorFromFile(param.objectFileName));
      DV answer(loadAnswerVectorFromFile(param.solutionFileName));
      ASSERT_TRUE(param.scalar - v == answer);
    }
  }

}
