//
// Created by mfbut on 5/7/2019.
//

#include "TestMatrixAndScalar.h"
namespace MatrixTesting {
  std::vector<ProgramTesting::ObjectScalarTestCase> TestMatrixAndScalar::plusTestCases;
  std::vector<ProgramTesting::ObjectScalarTestCase> TestMatrixAndScalar::minusTestCases;
  std::vector<ProgramTesting::ObjectScalarTestCase> TestMatrixAndScalar::multiplyTestCases;
  std::vector<ProgramTesting::ObjectScalarTestCase> TestMatrixAndScalar::divideTestCases;
  std::vector<ProgramTesting::ObjectScalarTestCase> TestMatrixAndScalar::scalarMinusTestCases;

  void TestMatrixAndScalar::SetUpTestSuite() {
    plusTestCases = {{INPUT_MATRIX_DIR"/Matrix-1-1.txt", -20, SOL_MATRIX_SCALAR_ADD"/Matrix-1-1_plus_-20.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-1-1.txt", -34, SOL_MATRIX_SCALAR_ADD"/Matrix-1-1_plus_-34.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 0, SOL_MATRIX_SCALAR_ADD"/Matrix-1-1_plus_0.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 1, SOL_MATRIX_SCALAR_ADD"/Matrix-1-1_plus_1.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 10, SOL_MATRIX_SCALAR_ADD"/Matrix-1-1_plus_10.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 5, SOL_MATRIX_SCALAR_ADD"/Matrix-1-1_plus_5.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-2-2.txt", -20, SOL_MATRIX_SCALAR_ADD"/Matrix-2-2_plus_-20.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-2-2.txt", -34, SOL_MATRIX_SCALAR_ADD"/Matrix-2-2_plus_-34.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 0, SOL_MATRIX_SCALAR_ADD"/Matrix-2-2_plus_0.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 1, SOL_MATRIX_SCALAR_ADD"/Matrix-2-2_plus_1.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 10, SOL_MATRIX_SCALAR_ADD"/Matrix-2-2_plus_10.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 5, SOL_MATRIX_SCALAR_ADD"/Matrix-2-2_plus_5.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-3-4.txt", -20, SOL_MATRIX_SCALAR_ADD"/Matrix-3-4_plus_-20.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-3-4.txt", -34, SOL_MATRIX_SCALAR_ADD"/Matrix-3-4_plus_-34.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 0, SOL_MATRIX_SCALAR_ADD"/Matrix-3-4_plus_0.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 1, SOL_MATRIX_SCALAR_ADD"/Matrix-3-4_plus_1.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 10, SOL_MATRIX_SCALAR_ADD"/Matrix-3-4_plus_10.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 5, SOL_MATRIX_SCALAR_ADD"/Matrix-3-4_plus_5.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-4-3.txt", -20, SOL_MATRIX_SCALAR_ADD"/Matrix-4-3_plus_-20.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-4-3.txt", -34, SOL_MATRIX_SCALAR_ADD"/Matrix-4-3_plus_-34.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 0, SOL_MATRIX_SCALAR_ADD"/Matrix-4-3_plus_0.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 1, SOL_MATRIX_SCALAR_ADD"/Matrix-4-3_plus_1.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 10, SOL_MATRIX_SCALAR_ADD"/Matrix-4-3_plus_10.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 5, SOL_MATRIX_SCALAR_ADD"/Matrix-4-3_plus_5.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-5-5.txt", -20, SOL_MATRIX_SCALAR_ADD"/Matrix-5-5_plus_-20.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-5-5.txt", -34, SOL_MATRIX_SCALAR_ADD"/Matrix-5-5_plus_-34.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 0, SOL_MATRIX_SCALAR_ADD"/Matrix-5-5_plus_0.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 1, SOL_MATRIX_SCALAR_ADD"/Matrix-5-5_plus_1.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 10, SOL_MATRIX_SCALAR_ADD"/Matrix-5-5_plus_10.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 5, SOL_MATRIX_SCALAR_ADD"/Matrix-5-5_plus_5.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-5-7.txt", -20, SOL_MATRIX_SCALAR_ADD"/Matrix-5-7_plus_-20.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-5-7.txt", -34, SOL_MATRIX_SCALAR_ADD"/Matrix-5-7_plus_-34.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 0, SOL_MATRIX_SCALAR_ADD"/Matrix-5-7_plus_0.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 1, SOL_MATRIX_SCALAR_ADD"/Matrix-5-7_plus_1.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 10, SOL_MATRIX_SCALAR_ADD"/Matrix-5-7_plus_10.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 5, SOL_MATRIX_SCALAR_ADD"/Matrix-5-7_plus_5.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-8-3.txt", -20, SOL_MATRIX_SCALAR_ADD"/Matrix-8-3_plus_-20.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-8-3.txt", -34, SOL_MATRIX_SCALAR_ADD"/Matrix-8-3_plus_-34.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 0, SOL_MATRIX_SCALAR_ADD"/Matrix-8-3_plus_0.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 1, SOL_MATRIX_SCALAR_ADD"/Matrix-8-3_plus_1.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 10, SOL_MATRIX_SCALAR_ADD"/Matrix-8-3_plus_10.txt"},
                     {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 5, SOL_MATRIX_SCALAR_ADD"/Matrix-8-3_plus_5.txt"}};

    minusTestCases = {{INPUT_MATRIX_DIR"/Matrix-1-1.txt", -20, SOL_MATRIX_SCALAR_MINUS"/Matrix-1-1_minus_-20.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-1-1.txt", -34, SOL_MATRIX_SCALAR_MINUS"/Matrix-1-1_minus_-34.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 0, SOL_MATRIX_SCALAR_MINUS"/Matrix-1-1_minus_0.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 1, SOL_MATRIX_SCALAR_MINUS"/Matrix-1-1_minus_1.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 10, SOL_MATRIX_SCALAR_MINUS"/Matrix-1-1_minus_10.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 5, SOL_MATRIX_SCALAR_MINUS"/Matrix-1-1_minus_5.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-2-2.txt", -20, SOL_MATRIX_SCALAR_MINUS"/Matrix-2-2_minus_-20.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-2-2.txt", -34, SOL_MATRIX_SCALAR_MINUS"/Matrix-2-2_minus_-34.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 0, SOL_MATRIX_SCALAR_MINUS"/Matrix-2-2_minus_0.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 1, SOL_MATRIX_SCALAR_MINUS"/Matrix-2-2_minus_1.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 10, SOL_MATRIX_SCALAR_MINUS"/Matrix-2-2_minus_10.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 5, SOL_MATRIX_SCALAR_MINUS"/Matrix-2-2_minus_5.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-3-4.txt", -20, SOL_MATRIX_SCALAR_MINUS"/Matrix-3-4_minus_-20.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-3-4.txt", -34, SOL_MATRIX_SCALAR_MINUS"/Matrix-3-4_minus_-34.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 0, SOL_MATRIX_SCALAR_MINUS"/Matrix-3-4_minus_0.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 1, SOL_MATRIX_SCALAR_MINUS"/Matrix-3-4_minus_1.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 10, SOL_MATRIX_SCALAR_MINUS"/Matrix-3-4_minus_10.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 5, SOL_MATRIX_SCALAR_MINUS"/Matrix-3-4_minus_5.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-4-3.txt", -20, SOL_MATRIX_SCALAR_MINUS"/Matrix-4-3_minus_-20.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-4-3.txt", -34, SOL_MATRIX_SCALAR_MINUS"/Matrix-4-3_minus_-34.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 0, SOL_MATRIX_SCALAR_MINUS"/Matrix-4-3_minus_0.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 1, SOL_MATRIX_SCALAR_MINUS"/Matrix-4-3_minus_1.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 10, SOL_MATRIX_SCALAR_MINUS"/Matrix-4-3_minus_10.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 5, SOL_MATRIX_SCALAR_MINUS"/Matrix-4-3_minus_5.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-5-5.txt", -20, SOL_MATRIX_SCALAR_MINUS"/Matrix-5-5_minus_-20.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-5-5.txt", -34, SOL_MATRIX_SCALAR_MINUS"/Matrix-5-5_minus_-34.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 0, SOL_MATRIX_SCALAR_MINUS"/Matrix-5-5_minus_0.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 1, SOL_MATRIX_SCALAR_MINUS"/Matrix-5-5_minus_1.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 10, SOL_MATRIX_SCALAR_MINUS"/Matrix-5-5_minus_10.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 5, SOL_MATRIX_SCALAR_MINUS"/Matrix-5-5_minus_5.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-5-7.txt", -20, SOL_MATRIX_SCALAR_MINUS"/Matrix-5-7_minus_-20.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-5-7.txt", -34, SOL_MATRIX_SCALAR_MINUS"/Matrix-5-7_minus_-34.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 0, SOL_MATRIX_SCALAR_MINUS"/Matrix-5-7_minus_0.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 1, SOL_MATRIX_SCALAR_MINUS"/Matrix-5-7_minus_1.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 10, SOL_MATRIX_SCALAR_MINUS"/Matrix-5-7_minus_10.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 5, SOL_MATRIX_SCALAR_MINUS"/Matrix-5-7_minus_5.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-8-3.txt", -20, SOL_MATRIX_SCALAR_MINUS"/Matrix-8-3_minus_-20.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-8-3.txt", -34, SOL_MATRIX_SCALAR_MINUS"/Matrix-8-3_minus_-34.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 0, SOL_MATRIX_SCALAR_MINUS"/Matrix-8-3_minus_0.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 1, SOL_MATRIX_SCALAR_MINUS"/Matrix-8-3_minus_1.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 10, SOL_MATRIX_SCALAR_MINUS"/Matrix-8-3_minus_10.txt"},
                      {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 5, SOL_MATRIX_SCALAR_MINUS"/Matrix-8-3_minus_5.txt"}};
    multiplyTestCases =
        {{INPUT_MATRIX_DIR"/Matrix-1-1.txt", -20, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-1-1_times_-20.txt"},
         {INPUT_MATRIX_DIR"/Matrix-1-1.txt", -34, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-1-1_times_-34.txt"},
         {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 0, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-1-1_times_0.txt"},
         {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 1, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-1-1_times_1.txt"},
         {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 10, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-1-1_times_10.txt"},
         {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 5, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-1-1_times_5.txt"},
         {INPUT_MATRIX_DIR"/Matrix-2-2.txt", -20, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-2-2_times_-20.txt"},
         {INPUT_MATRIX_DIR"/Matrix-2-2.txt", -34, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-2-2_times_-34.txt"},
         {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 0, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-2-2_times_0.txt"},
         {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 1, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-2-2_times_1.txt"},
         {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 10, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-2-2_times_10.txt"},
         {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 5, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-2-2_times_5.txt"},
         {INPUT_MATRIX_DIR"/Matrix-3-4.txt", -20, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-3-4_times_-20.txt"},
         {INPUT_MATRIX_DIR"/Matrix-3-4.txt", -34, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-3-4_times_-34.txt"},
         {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 0, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-3-4_times_0.txt"},
         {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 1, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-3-4_times_1.txt"},
         {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 10, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-3-4_times_10.txt"},
         {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 5, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-3-4_times_5.txt"},
         {INPUT_MATRIX_DIR"/Matrix-4-3.txt", -20, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-4-3_times_-20.txt"},
         {INPUT_MATRIX_DIR"/Matrix-4-3.txt", -34, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-4-3_times_-34.txt"},
         {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 0, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-4-3_times_0.txt"},
         {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 1, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-4-3_times_1.txt"},
         {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 10, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-4-3_times_10.txt"},
         {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 5, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-4-3_times_5.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-5.txt", -20, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-5-5_times_-20.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-5.txt", -34, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-5-5_times_-34.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 0, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-5-5_times_0.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 1, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-5-5_times_1.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 10, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-5-5_times_10.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 5, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-5-5_times_5.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-7.txt", -20, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-5-7_times_-20.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-7.txt", -34, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-5-7_times_-34.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 0, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-5-7_times_0.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 1, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-5-7_times_1.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 10, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-5-7_times_10.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 5, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-5-7_times_5.txt"},
         {INPUT_MATRIX_DIR"/Matrix-8-3.txt", -20, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-8-3_times_-20.txt"},
         {INPUT_MATRIX_DIR"/Matrix-8-3.txt", -34, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-8-3_times_-34.txt"},
         {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 0, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-8-3_times_0.txt"},
         {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 1, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-8-3_times_1.txt"},
         {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 10, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-8-3_times_10.txt"},
         {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 5, SOL_MATRIX_SCALAR_MULTIPLY"/Matrix-8-3_times_5.txt"}};
    divideTestCases = {{INPUT_MATRIX_DIR"/Matrix-1-1.txt", -20, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-1-1_divide_-20.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-1-1.txt", -34, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-1-1_divide_-34.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 1, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-1-1_divide_1.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 10, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-1-1_divide_10.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 5, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-1-1_divide_5.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-2-2.txt", -20, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-2-2_divide_-20.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-2-2.txt", -34, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-2-2_divide_-34.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 1, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-2-2_divide_1.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 10, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-2-2_divide_10.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 5, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-2-2_divide_5.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-3-4.txt", -20, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-3-4_divide_-20.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-3-4.txt", -34, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-3-4_divide_-34.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 1, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-3-4_divide_1.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 10, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-3-4_divide_10.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 5, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-3-4_divide_5.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-4-3.txt", -20, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-4-3_divide_-20.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-4-3.txt", -34, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-4-3_divide_-34.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 1, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-4-3_divide_1.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 10, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-4-3_divide_10.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 5, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-4-3_divide_5.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-5-5.txt", -20, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-5-5_divide_-20.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-5-5.txt", -34, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-5-5_divide_-34.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 1, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-5-5_divide_1.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 10, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-5-5_divide_10.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 5, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-5-5_divide_5.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-5-7.txt", -20, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-5-7_divide_-20.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-5-7.txt", -34, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-5-7_divide_-34.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 1, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-5-7_divide_1.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 10, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-5-7_divide_10.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 5, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-5-7_divide_5.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-8-3.txt", -20, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-8-3_divide_-20.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-8-3.txt", -34, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-8-3_divide_-34.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 1, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-8-3_divide_1.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 10, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-8-3_divide_10.txt"},
                       {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 5, SOL_MATRIX_SCALAR_DIVIDE"/Matrix-8-3_divide_5.txt"}};
    scalarMinusTestCases =
        {{INPUT_MATRIX_DIR"/Matrix-1-1.txt", -20, SOL_SCALAR_MATRIX_MINUS"/-20_minus_Matrix-1-1.txt"},
         {INPUT_MATRIX_DIR"/Matrix-2-2.txt", -20, SOL_SCALAR_MATRIX_MINUS"/-20_minus_Matrix-2-2.txt"},
         {INPUT_MATRIX_DIR"/Matrix-3-4.txt", -20, SOL_SCALAR_MATRIX_MINUS"/-20_minus_Matrix-3-4.txt"},
         {INPUT_MATRIX_DIR"/Matrix-4-3.txt", -20, SOL_SCALAR_MATRIX_MINUS"/-20_minus_Matrix-4-3.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-5.txt", -20, SOL_SCALAR_MATRIX_MINUS"/-20_minus_Matrix-5-5.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-7.txt", -20, SOL_SCALAR_MATRIX_MINUS"/-20_minus_Matrix-5-7.txt"},
         {INPUT_MATRIX_DIR"/Matrix-8-3.txt", -20, SOL_SCALAR_MATRIX_MINUS"/-20_minus_Matrix-8-3.txt"},
         {INPUT_MATRIX_DIR"/Matrix-1-1.txt", -34, SOL_SCALAR_MATRIX_MINUS"/-34_minus_Matrix-1-1.txt"},
         {INPUT_MATRIX_DIR"/Matrix-2-2.txt", -34, SOL_SCALAR_MATRIX_MINUS"/-34_minus_Matrix-2-2.txt"},
         {INPUT_MATRIX_DIR"/Matrix-3-4.txt", -34, SOL_SCALAR_MATRIX_MINUS"/-34_minus_Matrix-3-4.txt"},
         {INPUT_MATRIX_DIR"/Matrix-4-3.txt", -34, SOL_SCALAR_MATRIX_MINUS"/-34_minus_Matrix-4-3.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-5.txt", -34, SOL_SCALAR_MATRIX_MINUS"/-34_minus_Matrix-5-5.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-7.txt", -34, SOL_SCALAR_MATRIX_MINUS"/-34_minus_Matrix-5-7.txt"},
         {INPUT_MATRIX_DIR"/Matrix-8-3.txt", -34, SOL_SCALAR_MATRIX_MINUS"/-34_minus_Matrix-8-3.txt"},
         {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 0, SOL_SCALAR_MATRIX_MINUS"/0_minus_Matrix-1-1.txt"},
         {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 0, SOL_SCALAR_MATRIX_MINUS"/0_minus_Matrix-2-2.txt"},
         {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 0, SOL_SCALAR_MATRIX_MINUS"/0_minus_Matrix-3-4.txt"},
         {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 0, SOL_SCALAR_MATRIX_MINUS"/0_minus_Matrix-4-3.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 0, SOL_SCALAR_MATRIX_MINUS"/0_minus_Matrix-5-5.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 0, SOL_SCALAR_MATRIX_MINUS"/0_minus_Matrix-5-7.txt"},
         {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 0, SOL_SCALAR_MATRIX_MINUS"/0_minus_Matrix-8-3.txt"},
         {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 10, SOL_SCALAR_MATRIX_MINUS"/10_minus_Matrix-1-1.txt"},
         {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 10, SOL_SCALAR_MATRIX_MINUS"/10_minus_Matrix-2-2.txt"},
         {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 10, SOL_SCALAR_MATRIX_MINUS"/10_minus_Matrix-3-4.txt"},
         {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 10, SOL_SCALAR_MATRIX_MINUS"/10_minus_Matrix-4-3.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 10, SOL_SCALAR_MATRIX_MINUS"/10_minus_Matrix-5-5.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 10, SOL_SCALAR_MATRIX_MINUS"/10_minus_Matrix-5-7.txt"},
         {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 10, SOL_SCALAR_MATRIX_MINUS"/10_minus_Matrix-8-3.txt"},
         {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 1, SOL_SCALAR_MATRIX_MINUS"/1_minus_Matrix-1-1.txt"},
         {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 1, SOL_SCALAR_MATRIX_MINUS"/1_minus_Matrix-2-2.txt"},
         {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 1, SOL_SCALAR_MATRIX_MINUS"/1_minus_Matrix-3-4.txt"},
         {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 1, SOL_SCALAR_MATRIX_MINUS"/1_minus_Matrix-4-3.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 1, SOL_SCALAR_MATRIX_MINUS"/1_minus_Matrix-5-5.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 1, SOL_SCALAR_MATRIX_MINUS"/1_minus_Matrix-5-7.txt"},
         {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 1, SOL_SCALAR_MATRIX_MINUS"/1_minus_Matrix-8-3.txt"},
         {INPUT_MATRIX_DIR"/Matrix-1-1.txt", 5, SOL_SCALAR_MATRIX_MINUS"/5_minus_Matrix-1-1.txt"},
         {INPUT_MATRIX_DIR"/Matrix-2-2.txt", 5, SOL_SCALAR_MATRIX_MINUS"/5_minus_Matrix-2-2.txt"},
         {INPUT_MATRIX_DIR"/Matrix-3-4.txt", 5, SOL_SCALAR_MATRIX_MINUS"/5_minus_Matrix-3-4.txt"},
         {INPUT_MATRIX_DIR"/Matrix-4-3.txt", 5, SOL_SCALAR_MATRIX_MINUS"/5_minus_Matrix-4-3.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-5.txt", 5, SOL_SCALAR_MATRIX_MINUS"/5_minus_Matrix-5-5.txt"},
         {INPUT_MATRIX_DIR"/Matrix-5-7.txt", 5, SOL_SCALAR_MATRIX_MINUS"/5_minus_Matrix-5-7.txt"},
         {INPUT_MATRIX_DIR"/Matrix-8-3.txt", 5, SOL_SCALAR_MATRIX_MINUS"/5_minus_Matrix-8-3.txt"}};

  }

  void TestMatrixAndScalar::TearDownTestSuite() {
    plusTestCases.clear();
    minusTestCases.clear();
    multiplyTestCases.clear();
    divideTestCases.clear();
    scalarMinusTestCases.clear();
  }

  TEST_F(TestMatrixAndScalar, MatrixPlusScalar) {
    for (const auto& param : plusTestCases) {
      Matrix::Matrix mat(loadMatrixFromFile(param.objectFileName));
      matVec answer(loadSolutionFromFile(param.solutionFileName));
      ASSERT_TRUE(mat + param.scalar == answer);
    }
  }

  TEST_F(TestMatrixAndScalar, MatrixPlusEqualScalar) {
    for (const auto& param : plusTestCases) {
      Matrix::Matrix mat(loadMatrixFromFile(param.objectFileName));
      matVec answer(loadSolutionFromFile(param.solutionFileName));
      ASSERT_TRUE((mat += param.scalar) == answer);
      ASSERT_TRUE(mat == answer);
    }
  }

  TEST_F(TestMatrixAndScalar, MatrixMinusScalar) {
    for (const auto& param : minusTestCases) {
      Matrix::Matrix mat(loadMatrixFromFile(param.objectFileName));
      matVec answer(loadSolutionFromFile(param.solutionFileName));
      ASSERT_TRUE(mat - param.scalar == answer);
    }
  }

  TEST_F(TestMatrixAndScalar, MatrixMinusEqualScalar) {
    for (const auto& param : minusTestCases) {
      Matrix::Matrix mat(loadMatrixFromFile(param.objectFileName));
      matVec answer(loadSolutionFromFile(param.solutionFileName));
      ASSERT_TRUE((mat -= param.scalar) == answer);
      ASSERT_TRUE(mat == answer);
    }
  }

  TEST_F(TestMatrixAndScalar, MatrixTimesScalar) {
    for (const auto& param : multiplyTestCases) {
      Matrix::Matrix mat(loadMatrixFromFile(param.objectFileName));
      matVec answer(loadSolutionFromFile(param.solutionFileName));
      ASSERT_TRUE(mat * param.scalar == answer);
    }
  }

  TEST_F(TestMatrixAndScalar, MatrixTimesEqualScalar) {
    for (const auto& param : multiplyTestCases) {
      Matrix::Matrix mat(loadMatrixFromFile(param.objectFileName));
      matVec answer(loadSolutionFromFile(param.solutionFileName));
      ASSERT_TRUE((mat *= param.scalar) == answer);
      ASSERT_TRUE(mat == answer);
    }
  }

  TEST_F(TestMatrixAndScalar, MatrixDividScalar) {
    for (const auto& param : divideTestCases) {
      Matrix::Matrix mat(loadMatrixFromFile(param.objectFileName));
      matVec answer(loadSolutionFromFile(param.solutionFileName));
      ASSERT_TRUE(mat / param.scalar == answer);
    }
  }

  TEST_F(TestMatrixAndScalar, MatrixDivideEqualScalar) {
    for (const auto& param : divideTestCases) {
      Matrix::Matrix mat(loadMatrixFromFile(param.objectFileName));
      matVec answer(loadSolutionFromFile(param.solutionFileName));
      ASSERT_TRUE((mat /= param.scalar) == answer);
      ASSERT_TRUE(mat == answer);
    }
  }

  TEST_F(TestMatrixAndScalar, ScalarMinusMatrix) {
    for (const auto& param : scalarMinusTestCases) {
      Matrix::Matrix mat(loadMatrixFromFile(param.objectFileName));
      matVec answer(loadSolutionFromFile(param.solutionFileName));
      ASSERT_TRUE(param.scalar - mat == answer);
    }
  }
}
