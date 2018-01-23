//
// Created by Pharrell_WANG on 22/1/2018.
//

#include <iostream>

int main()
{
  int x = 3>>1;
  std::cout << " 3>>1 : " << x << std::endl;
  auto *ptr = new int;
  *ptr = 4;
  std::cout << *ptr << std::endl;
  delete ptr;
  return 0;
}