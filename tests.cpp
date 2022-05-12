#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("printRange Cases") {
  CHECK(printRange(-2,10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10");
  CHECK(printRange(5,15) == "5 6 7 8 9 10 11 12 13 14 15");
  CHECK(printRange(0,5) == "0 1 2 3 4 5");
}

TEST_CASE("sumRange Cases") {
  CHECK(sumRange(-2,10) == 52);
  CHECK(sumRange(5,15) == 110);
  CHECK(sumRange(0,5) == 15);
}

TEST_CASE("sumArray Cases") {
  int nums[3] = {1,2,3};
  int* numsptr = &nums[0];
  CHECK(sumArray(numsptr,3) == 6);
  int nums2[5] = {1,1,1,1,1};
  int* numsptr2 = &nums2[0];
  CHECK(sumArray(numsptr2,5) == 5);
  int nums3[5] = {0,0,0,0,0};
  int* numsptr3 = &nums3[0];
}

TEST_CASE("isAlphanumeric Cases") {
  CHECK(isAlphanumeric("abc123") == true);
  CHECK(isAlphanumeric("abc") == true);
  CHECK(isAlphanumeric("123") == true);
  CHECK(isAlphanumeric("abcd12345") == true);
  CHECK(isAlphanumeric("alphanumeric") == true);
}

TEST_CASE("nestedParens Cases") {
  CHECK(nestedParens("{{}}") == true);
  CHECK(nestedParens("{}") == true);
  CHECK(nestedParens("{{{}}}") == true);
  CHECK(nestedParens("{{{{}}}}") == true);
  CHECK(nestedParens("{{}") == false);
  CHECK(nestedParens("{{}1") == false);
  CHECK(nestedParens("{{}{{}1") == false);
  CHECK(nestedParens("12313") == false);
}
