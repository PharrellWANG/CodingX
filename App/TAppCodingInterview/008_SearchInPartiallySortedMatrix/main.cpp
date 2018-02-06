//
// Created by Pharrell_WANG on 6/2/2018.
//
/// Test cases:
/// 1. The matrix contains the target value (including cases where the target value is the maximum or minimum in the matrix)
/// 2. The matrix does not contain the target value (including cases where the target is larger than the maximum or less than the minimum)
/// 3. Special matrices, including matrices with only one row, only one column, or with only one element

#include <iostream>
//#include <string>
#include "LibSearch.h"


int main(){
  const int iNumToFind = 0;
  LibSearch obj(iNumToFind);
  obj.printMat();
  bool bRes = obj.find();
  std::string strMsg;
  if (bRes) {
    strMsg = "found";
  } else {
    strMsg = "not found";
  }
  std::cout << "\nResult of searching: " << strMsg << std::endl;
}