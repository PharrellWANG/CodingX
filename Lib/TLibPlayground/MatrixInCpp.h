//
// Created by Pharrell_WANG on 6/2/2018.
//
/// In a 2-D matrix, every row is increasingly sorted from
/// left to right, and the last number in each row is not
/// greater than the first number of the next row. A sample
/// matrix follows. Please implement a function to check
/// whether a number is in such a matrix or not. It returns
/// true if it tries to find the number 7 in the sample
/// matrix, but it returns false if it tries to find
/// the number 12.
///  1   3    5
///  7   9   11
/// 13  15   17

#ifndef CODINGX_MATRIXINCPP_H
#define CODINGX_MATRIXINCPP_H

class MatrixInCpp {
 private:
//  in-class initializer for static data member of type 'const int [4][4]' requires 'constexpr' specifier
  static int m_iMat[][4];
  int m_iNumToFind;
//  int m_iMat2[][4];
 public:
  explicit MatrixInCpp(int number):m_iNumToFind(number){};
  static int getRows();
  static int getCols();
  static void printMat();
  bool find();
};
#endif //CODINGX_MATRIXINCPP_H
