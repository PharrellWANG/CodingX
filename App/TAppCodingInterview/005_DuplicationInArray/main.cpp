//
// Created by Pharrell_WANG on 2/2/2018.
//

#include <iostream>
#include "../../../Lib/TLibCodingInterview/DuplicationInArray.h"

int main(){
  DuplicationInArray instanceToPlayWith(100, 4); // ---> call constructor, size 100, duplicated number is 4
  const int dupNum = instanceToPlayWith.FindDuplication();
  std::cout << "Duplicated number is: " << dupNum << '\n';
}