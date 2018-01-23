//
// Created by Pharrell_WANG on 22/1/2018.
//

#include <iostream>

int main()
{
  // pure playground
  int x = 3>>1;
  std::cout << " 3>>1 : " << x << std::endl;
  int y = 4294967295 >> 1; //---> unsigned long:  0 to 4,294,967,295 (2^32 - 1)
  std::cout << " 4294967295 >> 1: " << y << std::endl;
  // pure playground

  auto *ptr = new int;
  *ptr = 4;
  std::cout << *ptr << std::endl;
  delete ptr;
  return 0;
}