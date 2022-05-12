#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("makeVector size check") {
  CHECK((makeVector(5)).size() == 5);
  CHECK((makeVector(10)).size() == 10);
  CHECK((makeVector(0)).size() == 0);
}
