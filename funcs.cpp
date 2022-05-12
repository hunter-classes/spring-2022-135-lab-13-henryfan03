#include <iostream>

std::string printRange(int left, int right) {
  if (left == right) {
    return std::to_string(right);
  }
  else {
    return std::to_string(left) + " " + printRange(left+1, right);
  }
}

int sumRange(int left, int right) {
  if (left == right) {
    return right;
  }
  else {
    return left + sumRange(left+1, right);
  }
}

int sumArray(int *arr, int size) {
  if (size == 1) {
    return (arr)[0];
  }
  else {
    //std::cout << "REACHED THIS POINT ARR[0] IS: " << arr[0] << std::endl;
    //std::cout << "Passing in arr[1]" << arr[1] << std::endl;
    return (arr)[0] + sumArray(&arr[1], size-1);
  }
}

bool isAlphanumeric(std::string s) {
  if (s.length() == 0) {
    return true;
  }
  else {
    if ((int(s[0]) < 32) || (int(s[0]) > 127)) {
      return false;
    }
    return isAlphanumeric(s.substr(0, s.length() - 1));
  }
}

bool nestedParens(std::string s) {
  if (s.length() == 0) {
    return true;
  }
  else {
    if ((s[0] == '{') && (s[s.length()-1] == '}')) {
      return nestedParens(s.substr(1, s.length()-2));
    }
    else {
      return false;
    }
  }
}
