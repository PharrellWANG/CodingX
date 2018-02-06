//
// Created by Pharrell_WANG on 6/2/2018.
//

#include <iostream>
#include "../../../Lib/TLibPlayground/MatrixInCpp.h"

int main(){
  const int cNumberToFind = 8;

  MatrixInCpp MatObj(cNumberToFind);
  MatObj.printMat();
  std::cout << "\nRows: " << MatrixInCpp::getRows() << std::endl;
  std::cout << "Cols: " << MatrixInCpp::getCols() << std::endl;
  bool bResult = MatObj.find();
  std::cout << "\nWe want to find " << cNumberToFind << " in the matrix print above." << '\n';
  std::cout << "\nThe result of searching is: " << bResult << std::endl;
}