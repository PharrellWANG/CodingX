//
// Created by Pharrell_WANG on 21/1/2018.
//
// 1 == sizeof(char) <= sizeof(short) <= sizeof (int) <= sizeof(long) <= sizeof(long long)

#include <iostream>
#include <cassert>
//#include <limits>

int main(){
  std::cout << sizeof(char) << std::endl;
  std::cout << sizeof(short) << std::endl;
  std::cout << sizeof(int) << std::endl;
  std::cout << sizeof(long) << std::endl;

  int imin = std::numeric_limits<int>::min(); // minimum value
  int imax = std::numeric_limits<int>::max();

  float fmin = std::numeric_limits<float>::min(); // minimum value
  float fmax = std::numeric_limits<float>::max();

  std::cout << "imin: " << imin << std::endl;
  std::cout << "imax: " << imax << " (1<<31)-1: " << ((1<<31)-1) << " 1<<31 " << (1<<31) << std::endl;
  std::cout << "fmin: " << fmin << std::endl;
  std::cout << "fmin: " << fmax << std::endl;

  int MaxInteger = (1<<31) - 1;
  int MinInteger = 1<<31;
  int MaxIntPlusOne = MaxInteger + 1;
  std::cout << "max signed integer: " << MaxInteger << std::endl;
  std::cout << "min signed integer: " << MinInteger << std::endl;
  if (MinInteger == MaxIntPlusOne) {
    std::cout << "Yeah, great" << std::endl;
  }

  std::string str = "fo ur";
  for (int i=0;i<5;i++){
    std::cout << str[i] << std::endl;
  }
  std::cout << "=============" << std::endl;
  std::cout << (str[2] == ' ') << std::endl;
  std::cout << (str[4] == '\0') << std::endl;
  std::cout << (str[4] == NULL) << std::endl;
  std::cout << (str[15] == '\0') << std::endl;
  std::cout << (str[51] == NULL) << std::endl;
  std::cout << "=============" << std::endl;
  // `assert` is good for checking a case during run-time
  // that you expect should always have one result,
  // but perhaps could somehow produce an unexpected result
  // under unanticipated circumstances
  assert(str[4] == NULL);
  assert(str[4] == 0);
  assert(str[5] == NULL);
  assert(str[5] == '\0');
  // `static_assert` is good for testing logic in your code at compilation time.
  static_assert('\0' == 0, "");
  static_assert('\0' == NULL, "");
  std::cout << "Yeah, perfect ending" << std::endl;

  return 0;
}