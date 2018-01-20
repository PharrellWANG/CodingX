
//
// Created by Pharrell_WANG on 21/1/2018.
//
// 1 == sizeof(char) <= sizeof(short) <= sizeof (int) <= sizeof(long) <= sizeof(long long)

#include <iostream>
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
  int MaxIntPlusOne = MaxInteger + 1;
  std::cout << MaxIntPlusOne << std::endl;

  return 0;
}