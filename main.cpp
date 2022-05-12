#include <iostream>
#include "funcs.h"

int main() {
  std::cout << "TASK A:" << std::endl;
  std::cout << "---------------------------------------" << std::endl;
  std::cout << "printRange(-2,10):" << std::endl;
  std::cout << printRange(-2,10) << std::endl;
  std::cout << "TASK B:" << std::endl;
  std::cout << "---------------------------------------" << std::endl;
  std::cout << "sumRange(-2,10)" << std::endl;
  std::cout << sumRange(-2,10) << std::endl;
  std::cout << "TASK C:" << std::endl;
  std::cout << "---------------------------------------" << std::endl;
  int nums[3] = {1,2,3};
  int* numsptr = &nums[0];
  std::cout << "sumArray({1,2,3},3):" << std::endl;
  std::cout << sumArray(numsptr,3) << std::endl;
  std::cout << "TASK D:" << std::endl;
  std::cout << "---------------------------------------" << std::endl;
  std::cout << "isAlphanumeric('abc123'):" << std::endl;
  std::cout << isAlphanumeric("abc123") << std::endl;
  std::cout << "TASK E:" << std::endl;
  std::cout << "---------------------------------------" << std::endl;
  std::cout << "nestedParens('{{}}'):" << std::endl;
  std::cout << nestedParens("{{}}") << std::endl;

  return 0;
}
