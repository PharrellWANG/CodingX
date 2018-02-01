//
// Created by Pharrell_WANG on 2/2/2018.
//

#include "DuplicationInArray.h"
#include <iostream>


const int DuplicationInArray::FindDuplication() {
//    here we defined the size as `size`
  int sum1 = 0;
  for (int i = 0; i < size; i++) {
    if (array[i] < 0 || array[i] > (size - 2)) {
      std::cout << 'Invalid number.' << std::endl;
      exit(1);
    }
    sum1 += array[i];
  }
  int sum2 = (size - 2) * (size - 1) >> 1;
  return sum1 - sum2;
}
