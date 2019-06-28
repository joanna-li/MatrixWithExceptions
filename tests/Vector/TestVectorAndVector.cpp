//
// Created by mfbut on 5/7/2019.
//

#include "TestVectorAndVector.h"

 std::vector<ProgramTesting::ObjectObjectTestCase> VectorTesting::TestVectorAndVector::plusTestCases;
 std::vector<ProgramTesting::ObjectObjectTestCase> VectorTesting::TestVectorAndVector::minusTestCases;
 std::vector<ProgramTesting::ObjectObjectTestCase> VectorTesting::TestVectorAndVector::multiplyTestCases;

void VectorTesting::TestVectorAndVector::SetUpTestSuite() {
  plusTestCases = {{INPUT_VECTOR_DIR"/VectorV1-10.txt",INPUT_VECTOR_DIR"/VectorV1-10.txt",SOL_VECTOR_VECTOR_ADD"/VectorV1-10_plus_VectorV1-10.txt"},
                   {INPUT_VECTOR_DIR"/VectorV1-10.txt",INPUT_VECTOR_DIR"/VectorV2-10.txt",SOL_VECTOR_VECTOR_ADD"/VectorV1-10_plus_VectorV2-10.txt"},
                   {INPUT_VECTOR_DIR"/VectorV1-10.txt",INPUT_VECTOR_DIR"/VectorV3-10.txt",SOL_VECTOR_VECTOR_ADD"/VectorV1-10_plus_VectorV3-10.txt"},
                   {INPUT_VECTOR_DIR"/VectorV1-1.txt",INPUT_VECTOR_DIR"/VectorV1-1.txt",SOL_VECTOR_VECTOR_ADD"/VectorV1-1_plus_VectorV1-1.txt"},
                   {INPUT_VECTOR_DIR"/VectorV1-1.txt",INPUT_VECTOR_DIR"/VectorV2-1.txt",SOL_VECTOR_VECTOR_ADD"/VectorV1-1_plus_VectorV2-1.txt"},
                   {INPUT_VECTOR_DIR"/VectorV1-1.txt",INPUT_VECTOR_DIR"/VectorV3-1.txt",SOL_VECTOR_VECTOR_ADD"/VectorV1-1_plus_VectorV3-1.txt"},
                   {INPUT_VECTOR_DIR"/VectorV1-27.txt",INPUT_VECTOR_DIR"/VectorV1-27.txt",SOL_VECTOR_VECTOR_ADD"/VectorV1-27_plus_VectorV1-27.txt"},
                   {INPUT_VECTOR_DIR"/VectorV1-27.txt",INPUT_VECTOR_DIR"/VectorV2-27.txt",SOL_VECTOR_VECTOR_ADD"/VectorV1-27_plus_VectorV2-27.txt"},
                   {INPUT_VECTOR_DIR"/VectorV1-27.txt",INPUT_VECTOR_DIR"/VectorV3-27.txt",SOL_VECTOR_VECTOR_ADD"/VectorV1-27_plus_VectorV3-27.txt"},
                   {INPUT_VECTOR_DIR"/VectorV1-36.txt",INPUT_VECTOR_DIR"/VectorV1-36.txt",SOL_VECTOR_VECTOR_ADD"/VectorV1-36_plus_VectorV1-36.txt"},
                   {INPUT_VECTOR_DIR"/VectorV1-36.txt",INPUT_VECTOR_DIR"/VectorV2-36.txt",SOL_VECTOR_VECTOR_ADD"/VectorV1-36_plus_VectorV2-36.txt"},
                   {INPUT_VECTOR_DIR"/VectorV1-36.txt",INPUT_VECTOR_DIR"/VectorV3-36.txt",SOL_VECTOR_VECTOR_ADD"/VectorV1-36_plus_VectorV3-36.txt"},
                   {INPUT_VECTOR_DIR"/VectorV1-5.txt",INPUT_VECTOR_DIR"/VectorV1-5.txt",SOL_VECTOR_VECTOR_ADD"/VectorV1-5_plus_VectorV1-5.txt"},
                   {INPUT_VECTOR_DIR"/VectorV1-5.txt",INPUT_VECTOR_DIR"/VectorV2-5.txt",SOL_VECTOR_VECTOR_ADD"/VectorV1-5_plus_VectorV2-5.txt"},
                   {INPUT_VECTOR_DIR"/VectorV1-5.txt",INPUT_VECTOR_DIR"/VectorV3-5.txt",SOL_VECTOR_VECTOR_ADD"/VectorV1-5_plus_VectorV3-5.txt"},
                   {INPUT_VECTOR_DIR"/VectorV2-10.txt",INPUT_VECTOR_DIR"/VectorV1-10.txt",SOL_VECTOR_VECTOR_ADD"/VectorV2-10_plus_VectorV1-10.txt"},
                   {INPUT_VECTOR_DIR"/VectorV2-10.txt",INPUT_VECTOR_DIR"/VectorV2-10.txt",SOL_VECTOR_VECTOR_ADD"/VectorV2-10_plus_VectorV2-10.txt"},
                   {INPUT_VECTOR_DIR"/VectorV2-10.txt",INPUT_VECTOR_DIR"/VectorV3-10.txt",SOL_VECTOR_VECTOR_ADD"/VectorV2-10_plus_VectorV3-10.txt"},
                   {INPUT_VECTOR_DIR"/VectorV2-1.txt",INPUT_VECTOR_DIR"/VectorV1-1.txt",SOL_VECTOR_VECTOR_ADD"/VectorV2-1_plus_VectorV1-1.txt"},
                   {INPUT_VECTOR_DIR"/VectorV2-1.txt",INPUT_VECTOR_DIR"/VectorV2-1.txt",SOL_VECTOR_VECTOR_ADD"/VectorV2-1_plus_VectorV2-1.txt"},
                   {INPUT_VECTOR_DIR"/VectorV2-1.txt",INPUT_VECTOR_DIR"/VectorV3-1.txt",SOL_VECTOR_VECTOR_ADD"/VectorV2-1_plus_VectorV3-1.txt"},
                   {INPUT_VECTOR_DIR"/VectorV2-27.txt",INPUT_VECTOR_DIR"/VectorV1-27.txt",SOL_VECTOR_VECTOR_ADD"/VectorV2-27_plus_VectorV1-27.txt"},
                   {INPUT_VECTOR_DIR"/VectorV2-27.txt",INPUT_VECTOR_DIR"/VectorV2-27.txt",SOL_VECTOR_VECTOR_ADD"/VectorV2-27_plus_VectorV2-27.txt"},
                   {INPUT_VECTOR_DIR"/VectorV2-27.txt",INPUT_VECTOR_DIR"/VectorV3-27.txt",SOL_VECTOR_VECTOR_ADD"/VectorV2-27_plus_VectorV3-27.txt"},
                   {INPUT_VECTOR_DIR"/VectorV2-36.txt",INPUT_VECTOR_DIR"/VectorV1-36.txt",SOL_VECTOR_VECTOR_ADD"/VectorV2-36_plus_VectorV1-36.txt"},
                   {INPUT_VECTOR_DIR"/VectorV2-36.txt",INPUT_VECTOR_DIR"/VectorV2-36.txt",SOL_VECTOR_VECTOR_ADD"/VectorV2-36_plus_VectorV2-36.txt"},
                   {INPUT_VECTOR_DIR"/VectorV2-36.txt",INPUT_VECTOR_DIR"/VectorV3-36.txt",SOL_VECTOR_VECTOR_ADD"/VectorV2-36_plus_VectorV3-36.txt"},
                   {INPUT_VECTOR_DIR"/VectorV2-5.txt",INPUT_VECTOR_DIR"/VectorV1-5.txt",SOL_VECTOR_VECTOR_ADD"/VectorV2-5_plus_VectorV1-5.txt"},
                   {INPUT_VECTOR_DIR"/VectorV2-5.txt",INPUT_VECTOR_DIR"/VectorV2-5.txt",SOL_VECTOR_VECTOR_ADD"/VectorV2-5_plus_VectorV2-5.txt"},
                   {INPUT_VECTOR_DIR"/VectorV2-5.txt",INPUT_VECTOR_DIR"/VectorV3-5.txt",SOL_VECTOR_VECTOR_ADD"/VectorV2-5_plus_VectorV3-5.txt"},
                   {INPUT_VECTOR_DIR"/VectorV3-10.txt",INPUT_VECTOR_DIR"/VectorV1-10.txt",SOL_VECTOR_VECTOR_ADD"/VectorV3-10_plus_VectorV1-10.txt"},
                   {INPUT_VECTOR_DIR"/VectorV3-10.txt",INPUT_VECTOR_DIR"/VectorV2-10.txt",SOL_VECTOR_VECTOR_ADD"/VectorV3-10_plus_VectorV2-10.txt"},
                   {INPUT_VECTOR_DIR"/VectorV3-10.txt",INPUT_VECTOR_DIR"/VectorV3-10.txt",SOL_VECTOR_VECTOR_ADD"/VectorV3-10_plus_VectorV3-10.txt"},
                   {INPUT_VECTOR_DIR"/VectorV3-1.txt",INPUT_VECTOR_DIR"/VectorV1-1.txt",SOL_VECTOR_VECTOR_ADD"/VectorV3-1_plus_VectorV1-1.txt"},
                   {INPUT_VECTOR_DIR"/VectorV3-1.txt",INPUT_VECTOR_DIR"/VectorV2-1.txt",SOL_VECTOR_VECTOR_ADD"/VectorV3-1_plus_VectorV2-1.txt"},
                   {INPUT_VECTOR_DIR"/VectorV3-1.txt",INPUT_VECTOR_DIR"/VectorV3-1.txt",SOL_VECTOR_VECTOR_ADD"/VectorV3-1_plus_VectorV3-1.txt"},
                   {INPUT_VECTOR_DIR"/VectorV3-27.txt",INPUT_VECTOR_DIR"/VectorV1-27.txt",SOL_VECTOR_VECTOR_ADD"/VectorV3-27_plus_VectorV1-27.txt"},
                   {INPUT_VECTOR_DIR"/VectorV3-27.txt",INPUT_VECTOR_DIR"/VectorV2-27.txt",SOL_VECTOR_VECTOR_ADD"/VectorV3-27_plus_VectorV2-27.txt"},
                   {INPUT_VECTOR_DIR"/VectorV3-27.txt",INPUT_VECTOR_DIR"/VectorV3-27.txt",SOL_VECTOR_VECTOR_ADD"/VectorV3-27_plus_VectorV3-27.txt"},
                   {INPUT_VECTOR_DIR"/VectorV3-36.txt",INPUT_VECTOR_DIR"/VectorV1-36.txt",SOL_VECTOR_VECTOR_ADD"/VectorV3-36_plus_VectorV1-36.txt"},
                   {INPUT_VECTOR_DIR"/VectorV3-36.txt",INPUT_VECTOR_DIR"/VectorV2-36.txt",SOL_VECTOR_VECTOR_ADD"/VectorV3-36_plus_VectorV2-36.txt"},
                   {INPUT_VECTOR_DIR"/VectorV3-36.txt",INPUT_VECTOR_DIR"/VectorV3-36.txt",SOL_VECTOR_VECTOR_ADD"/VectorV3-36_plus_VectorV3-36.txt"},
                   {INPUT_VECTOR_DIR"/VectorV3-5.txt",INPUT_VECTOR_DIR"/VectorV1-5.txt",SOL_VECTOR_VECTOR_ADD"/VectorV3-5_plus_VectorV1-5.txt"},
                   {INPUT_VECTOR_DIR"/VectorV3-5.txt",INPUT_VECTOR_DIR"/VectorV2-5.txt",SOL_VECTOR_VECTOR_ADD"/VectorV3-5_plus_VectorV2-5.txt"},
                   {INPUT_VECTOR_DIR"/VectorV3-5.txt",INPUT_VECTOR_DIR"/VectorV3-5.txt",SOL_VECTOR_VECTOR_ADD"/VectorV3-5_plus_VectorV3-5.txt"}};

minusTestCases = {{INPUT_VECTOR_DIR"/VectorV1-10.txt",INPUT_VECTOR_DIR"/VectorV1-10.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV1-10_minus_VectorV1-10.txt"},
                  {INPUT_VECTOR_DIR"/VectorV1-10.txt",INPUT_VECTOR_DIR"/VectorV2-10.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV1-10_minus_VectorV2-10.txt"},
                  {INPUT_VECTOR_DIR"/VectorV1-10.txt",INPUT_VECTOR_DIR"/VectorV3-10.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV1-10_minus_VectorV3-10.txt"},
                  {INPUT_VECTOR_DIR"/VectorV1-1.txt",INPUT_VECTOR_DIR"/VectorV1-1.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV1-1_minus_VectorV1-1.txt"},
                  {INPUT_VECTOR_DIR"/VectorV1-1.txt",INPUT_VECTOR_DIR"/VectorV2-1.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV1-1_minus_VectorV2-1.txt"},
                  {INPUT_VECTOR_DIR"/VectorV1-1.txt",INPUT_VECTOR_DIR"/VectorV3-1.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV1-1_minus_VectorV3-1.txt"},
                  {INPUT_VECTOR_DIR"/VectorV1-27.txt",INPUT_VECTOR_DIR"/VectorV1-27.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV1-27_minus_VectorV1-27.txt"},
                  {INPUT_VECTOR_DIR"/VectorV1-27.txt",INPUT_VECTOR_DIR"/VectorV2-27.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV1-27_minus_VectorV2-27.txt"},
                  {INPUT_VECTOR_DIR"/VectorV1-27.txt",INPUT_VECTOR_DIR"/VectorV3-27.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV1-27_minus_VectorV3-27.txt"},
                  {INPUT_VECTOR_DIR"/VectorV1-36.txt",INPUT_VECTOR_DIR"/VectorV1-36.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV1-36_minus_VectorV1-36.txt"},
                  {INPUT_VECTOR_DIR"/VectorV1-36.txt",INPUT_VECTOR_DIR"/VectorV2-36.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV1-36_minus_VectorV2-36.txt"},
                  {INPUT_VECTOR_DIR"/VectorV1-36.txt",INPUT_VECTOR_DIR"/VectorV3-36.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV1-36_minus_VectorV3-36.txt"},
                  {INPUT_VECTOR_DIR"/VectorV1-5.txt",INPUT_VECTOR_DIR"/VectorV1-5.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV1-5_minus_VectorV1-5.txt"},
                  {INPUT_VECTOR_DIR"/VectorV1-5.txt",INPUT_VECTOR_DIR"/VectorV2-5.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV1-5_minus_VectorV2-5.txt"},
                  {INPUT_VECTOR_DIR"/VectorV1-5.txt",INPUT_VECTOR_DIR"/VectorV3-5.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV1-5_minus_VectorV3-5.txt"},
                  {INPUT_VECTOR_DIR"/VectorV2-10.txt",INPUT_VECTOR_DIR"/VectorV1-10.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV2-10_minus_VectorV1-10.txt"},
                  {INPUT_VECTOR_DIR"/VectorV2-10.txt",INPUT_VECTOR_DIR"/VectorV2-10.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV2-10_minus_VectorV2-10.txt"},
                  {INPUT_VECTOR_DIR"/VectorV2-10.txt",INPUT_VECTOR_DIR"/VectorV3-10.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV2-10_minus_VectorV3-10.txt"},
                  {INPUT_VECTOR_DIR"/VectorV2-1.txt",INPUT_VECTOR_DIR"/VectorV1-1.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV2-1_minus_VectorV1-1.txt"},
                  {INPUT_VECTOR_DIR"/VectorV2-1.txt",INPUT_VECTOR_DIR"/VectorV2-1.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV2-1_minus_VectorV2-1.txt"},
                  {INPUT_VECTOR_DIR"/VectorV2-1.txt",INPUT_VECTOR_DIR"/VectorV3-1.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV2-1_minus_VectorV3-1.txt"},
                  {INPUT_VECTOR_DIR"/VectorV2-27.txt",INPUT_VECTOR_DIR"/VectorV1-27.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV2-27_minus_VectorV1-27.txt"},
                  {INPUT_VECTOR_DIR"/VectorV2-27.txt",INPUT_VECTOR_DIR"/VectorV2-27.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV2-27_minus_VectorV2-27.txt"},
                  {INPUT_VECTOR_DIR"/VectorV2-27.txt",INPUT_VECTOR_DIR"/VectorV3-27.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV2-27_minus_VectorV3-27.txt"},
                  {INPUT_VECTOR_DIR"/VectorV2-36.txt",INPUT_VECTOR_DIR"/VectorV1-36.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV2-36_minus_VectorV1-36.txt"},
                  {INPUT_VECTOR_DIR"/VectorV2-36.txt",INPUT_VECTOR_DIR"/VectorV2-36.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV2-36_minus_VectorV2-36.txt"},
                  {INPUT_VECTOR_DIR"/VectorV2-36.txt",INPUT_VECTOR_DIR"/VectorV3-36.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV2-36_minus_VectorV3-36.txt"},
                  {INPUT_VECTOR_DIR"/VectorV2-5.txt",INPUT_VECTOR_DIR"/VectorV1-5.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV2-5_minus_VectorV1-5.txt"},
                  {INPUT_VECTOR_DIR"/VectorV2-5.txt",INPUT_VECTOR_DIR"/VectorV2-5.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV2-5_minus_VectorV2-5.txt"},
                  {INPUT_VECTOR_DIR"/VectorV2-5.txt",INPUT_VECTOR_DIR"/VectorV3-5.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV2-5_minus_VectorV3-5.txt"},
                  {INPUT_VECTOR_DIR"/VectorV3-10.txt",INPUT_VECTOR_DIR"/VectorV1-10.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV3-10_minus_VectorV1-10.txt"},
                  {INPUT_VECTOR_DIR"/VectorV3-10.txt",INPUT_VECTOR_DIR"/VectorV2-10.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV3-10_minus_VectorV2-10.txt"},
                  {INPUT_VECTOR_DIR"/VectorV3-10.txt",INPUT_VECTOR_DIR"/VectorV3-10.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV3-10_minus_VectorV3-10.txt"},
                  {INPUT_VECTOR_DIR"/VectorV3-1.txt",INPUT_VECTOR_DIR"/VectorV1-1.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV3-1_minus_VectorV1-1.txt"},
                  {INPUT_VECTOR_DIR"/VectorV3-1.txt",INPUT_VECTOR_DIR"/VectorV2-1.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV3-1_minus_VectorV2-1.txt"},
                  {INPUT_VECTOR_DIR"/VectorV3-1.txt",INPUT_VECTOR_DIR"/VectorV3-1.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV3-1_minus_VectorV3-1.txt"},
                  {INPUT_VECTOR_DIR"/VectorV3-27.txt",INPUT_VECTOR_DIR"/VectorV1-27.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV3-27_minus_VectorV1-27.txt"},
                  {INPUT_VECTOR_DIR"/VectorV3-27.txt",INPUT_VECTOR_DIR"/VectorV2-27.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV3-27_minus_VectorV2-27.txt"},
                  {INPUT_VECTOR_DIR"/VectorV3-27.txt",INPUT_VECTOR_DIR"/VectorV3-27.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV3-27_minus_VectorV3-27.txt"},
                  {INPUT_VECTOR_DIR"/VectorV3-36.txt",INPUT_VECTOR_DIR"/VectorV1-36.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV3-36_minus_VectorV1-36.txt"},
                  {INPUT_VECTOR_DIR"/VectorV3-36.txt",INPUT_VECTOR_DIR"/VectorV2-36.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV3-36_minus_VectorV2-36.txt"},
                  {INPUT_VECTOR_DIR"/VectorV3-36.txt",INPUT_VECTOR_DIR"/VectorV3-36.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV3-36_minus_VectorV3-36.txt"},
                  {INPUT_VECTOR_DIR"/VectorV3-5.txt",INPUT_VECTOR_DIR"/VectorV1-5.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV3-5_minus_VectorV1-5.txt"},
                  {INPUT_VECTOR_DIR"/VectorV3-5.txt",INPUT_VECTOR_DIR"/VectorV2-5.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV3-5_minus_VectorV2-5.txt"},
                  {INPUT_VECTOR_DIR"/VectorV3-5.txt",INPUT_VECTOR_DIR"/VectorV3-5.txt",SOL_VECTOR_VECTOR_MINUS"/VectorV3-5_minus_VectorV3-5.txt"}};


  multiplyTestCases = {{INPUT_VECTOR_DIR"/VectorV1-10.txt",INPUT_VECTOR_DIR"/VectorV1-10.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV1-10_times_VectorV1-10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-10.txt",INPUT_VECTOR_DIR"/VectorV2-10.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV1-10_times_VectorV2-10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-10.txt",INPUT_VECTOR_DIR"/VectorV3-10.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV1-10_times_VectorV3-10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-1.txt",INPUT_VECTOR_DIR"/VectorV1-1.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV1-1_times_VectorV1-1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-1.txt",INPUT_VECTOR_DIR"/VectorV2-1.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV1-1_times_VectorV2-1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-1.txt",INPUT_VECTOR_DIR"/VectorV3-1.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV1-1_times_VectorV3-1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-27.txt",INPUT_VECTOR_DIR"/VectorV1-27.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV1-27_times_VectorV1-27.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-27.txt",INPUT_VECTOR_DIR"/VectorV2-27.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV1-27_times_VectorV2-27.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-27.txt",INPUT_VECTOR_DIR"/VectorV3-27.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV1-27_times_VectorV3-27.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-36.txt",INPUT_VECTOR_DIR"/VectorV1-36.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV1-36_times_VectorV1-36.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-36.txt",INPUT_VECTOR_DIR"/VectorV2-36.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV1-36_times_VectorV2-36.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-36.txt",INPUT_VECTOR_DIR"/VectorV3-36.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV1-36_times_VectorV3-36.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-5.txt",INPUT_VECTOR_DIR"/VectorV1-5.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV1-5_times_VectorV1-5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-5.txt",INPUT_VECTOR_DIR"/VectorV2-5.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV1-5_times_VectorV2-5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV1-5.txt",INPUT_VECTOR_DIR"/VectorV3-5.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV1-5_times_VectorV3-5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-10.txt",INPUT_VECTOR_DIR"/VectorV1-10.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV2-10_times_VectorV1-10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-10.txt",INPUT_VECTOR_DIR"/VectorV2-10.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV2-10_times_VectorV2-10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-10.txt",INPUT_VECTOR_DIR"/VectorV3-10.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV2-10_times_VectorV3-10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-1.txt",INPUT_VECTOR_DIR"/VectorV1-1.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV2-1_times_VectorV1-1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-1.txt",INPUT_VECTOR_DIR"/VectorV2-1.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV2-1_times_VectorV2-1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-1.txt",INPUT_VECTOR_DIR"/VectorV3-1.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV2-1_times_VectorV3-1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-27.txt",INPUT_VECTOR_DIR"/VectorV1-27.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV2-27_times_VectorV1-27.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-27.txt",INPUT_VECTOR_DIR"/VectorV2-27.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV2-27_times_VectorV2-27.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-27.txt",INPUT_VECTOR_DIR"/VectorV3-27.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV2-27_times_VectorV3-27.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-36.txt",INPUT_VECTOR_DIR"/VectorV1-36.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV2-36_times_VectorV1-36.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-36.txt",INPUT_VECTOR_DIR"/VectorV2-36.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV2-36_times_VectorV2-36.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-36.txt",INPUT_VECTOR_DIR"/VectorV3-36.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV2-36_times_VectorV3-36.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-5.txt",INPUT_VECTOR_DIR"/VectorV1-5.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV2-5_times_VectorV1-5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-5.txt",INPUT_VECTOR_DIR"/VectorV2-5.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV2-5_times_VectorV2-5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV2-5.txt",INPUT_VECTOR_DIR"/VectorV3-5.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV2-5_times_VectorV3-5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-10.txt",INPUT_VECTOR_DIR"/VectorV1-10.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV3-10_times_VectorV1-10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-10.txt",INPUT_VECTOR_DIR"/VectorV2-10.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV3-10_times_VectorV2-10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-10.txt",INPUT_VECTOR_DIR"/VectorV3-10.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV3-10_times_VectorV3-10.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-1.txt",INPUT_VECTOR_DIR"/VectorV1-1.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV3-1_times_VectorV1-1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-1.txt",INPUT_VECTOR_DIR"/VectorV2-1.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV3-1_times_VectorV2-1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-1.txt",INPUT_VECTOR_DIR"/VectorV3-1.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV3-1_times_VectorV3-1.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-27.txt",INPUT_VECTOR_DIR"/VectorV1-27.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV3-27_times_VectorV1-27.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-27.txt",INPUT_VECTOR_DIR"/VectorV2-27.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV3-27_times_VectorV2-27.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-27.txt",INPUT_VECTOR_DIR"/VectorV3-27.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV3-27_times_VectorV3-27.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-36.txt",INPUT_VECTOR_DIR"/VectorV1-36.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV3-36_times_VectorV1-36.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-36.txt",INPUT_VECTOR_DIR"/VectorV2-36.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV3-36_times_VectorV2-36.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-36.txt",INPUT_VECTOR_DIR"/VectorV3-36.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV3-36_times_VectorV3-36.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-5.txt",INPUT_VECTOR_DIR"/VectorV1-5.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV3-5_times_VectorV1-5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-5.txt",INPUT_VECTOR_DIR"/VectorV2-5.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV3-5_times_VectorV2-5.txt"},
                       {INPUT_VECTOR_DIR"/VectorV3-5.txt",INPUT_VECTOR_DIR"/VectorV3-5.txt",SOL_VECTOR_VECTOR_MULTIPLY"/VectorV3-5_times_VectorV3-5.txt"}};

}

void VectorTesting::TestVectorAndVector::TearDownTestSuite() {
  plusTestCases.clear();
  minusTestCases.clear();
  multiplyTestCases.clear();
}

namespace VectorTesting{
  TEST_F(TestVectorAndVector, VectorPlusVector) {
    for (const auto& param : plusTestCases) {
      Matrix::Vector lhs(loadVectorFromFile(param.lhsFileName));
      Matrix::Vector rhs(loadVectorFromFile(param.rhsFileName));
      DV answer(loadAnswerVectorFromFile(param.solutionFileName));
      ASSERT_TRUE(lhs + rhs == answer);
    }
  }

  TEST_F(TestVectorAndVector, VectorPlusEqualVector) {
    for (const auto& param : plusTestCases) {
      Matrix::Vector lhs(loadVectorFromFile(param.lhsFileName));
      Matrix::Vector rhs(loadVectorFromFile(param.rhsFileName));
      DV answer(loadAnswerVectorFromFile(param.solutionFileName));
      ASSERT_TRUE((lhs += rhs) == answer);
      ASSERT_TRUE(lhs == answer);
    }
  }

  TEST_F(TestVectorAndVector, VectorMinusVector) {
    for (const auto& param : minusTestCases) {
      Matrix::Vector lhs(loadVectorFromFile(param.lhsFileName));
      Matrix::Vector rhs(loadVectorFromFile(param.rhsFileName));
      DV answer(loadAnswerVectorFromFile(param.solutionFileName));
      ASSERT_TRUE(lhs - rhs == answer);
    }
  }

  TEST_F(TestVectorAndVector, VectorMinusEqualVector) {
    for (const auto& param : minusTestCases) {
      Matrix::Vector lhs(loadVectorFromFile(param.lhsFileName));
      Matrix::Vector rhs(loadVectorFromFile(param.rhsFileName));
      DV answer(loadAnswerVectorFromFile(param.solutionFileName));
      ASSERT_TRUE((lhs -= rhs) == answer);
      ASSERT_TRUE(lhs == answer);
    }
  }

  TEST_F(TestVectorAndVector, VectorMulitpyVector) {
    for (const auto& param : multiplyTestCases) {
      Matrix::Vector lhs(loadVectorFromFile(param.lhsFileName));
      Matrix::Vector rhs(loadVectorFromFile(param.rhsFileName));
      DV answer(loadAnswerVectorFromFile(param.solutionFileName));
      ASSERT_NEAR(lhs * rhs, answer.front(),1);
    }
  }

  TEST_F(TestVectorAndVector, VectorMultiplyEqualVector) {
    for (const auto& param : multiplyTestCases) {
      Matrix::Vector lhs(loadVectorFromFile(param.lhsFileName));
      Matrix::Vector rhs(loadVectorFromFile(param.rhsFileName));
      DV answer(loadAnswerVectorFromFile(param.solutionFileName));
      ASSERT_NEAR(lhs *= rhs, answer.front(),1);
      ASSERT_TRUE(lhs == answer);
    }
  }

}


