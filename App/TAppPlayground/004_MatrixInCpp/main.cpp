//
// Created by Pharrell_WANG on 6/2/2018.
//
/// Test cases:
/// 1. The matrix contains the target value (including cases where the target value is the maximum or minimum in the matrix)
/// 2. The matrix does not contain the target value (including cases where the target is larger than the maximum or less than the minimum)
/// 3. Special matrices, including matrices with only one row, only one column, or with only one element

#include <iostream>
#include "../../../Lib/TLibPlayground/MatrixInCpp.h"

int main(){
  const int cNumberToFind = 21;

  MatrixInCpp MatObj(cNumberToFind);
  MatObj.printMat();
  std::cout << "\nRows: " << MatrixInCpp::getRows() << std::endl;
  std::cout << "Cols: " << MatrixInCpp::getCols() << std::endl;
  bool bResult = MatObj.find();
  std::cout << "\nWe want to find " << cNumberToFind << " in the matrix print above." << '\n';
  std::cout << "\nThe result of searching is: " << bResult << std::endl;
}