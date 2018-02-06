//
// Created by Pharrell_WANG on 6/2/2018.
//
#include <iostream>
#include "MatrixInCpp.h"

int MatrixInCpp::m_iMat[][4] =
    {{1, 2, 3, 4},
     {5, 6, 7, 8},
     {9, 10, 11, 12},
     {13, 14, 15, 16},
     {17, 18, 19, 20},
    };

int MatrixInCpp::getRows(){return sizeof(m_iMat) / sizeof(m_iMat[0]);}

int MatrixInCpp::getCols(){return sizeof(m_iMat[0]) / sizeof(int);}

void MatrixInCpp::printMat() {
  for (int i=0;i < getRows();i++) {
    for (int j=0;j<getCols();j++){
      std::cout << m_iMat[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

/**
 * Binary search.
 *
 * If there are m rows and n columns in a matrix,
 * the time efficiency for the binary search algorithm is
 * O(logmn).
 *
 * @param int number to find
 * @return the found int number
 */
bool MatrixInCpp::find(){
  int rows = getRows();
  int cols = getCols();

  int start = 0;
  int end = rows * cols -1;

  while(start < end){ // --> attention to the conditionof start < end
    int mid = start + (end-start)/2;
    int row = mid / cols; // --> attention that there exist no minus 1, because everthing starts with 0.
    int col = mid % cols;
    int value = m_iMat[row][col];
    if (value == m_iNumToFind) {
      return true;
    }
    if (value > m_iNumToFind){
      end = mid -1;
    } else {
      start = mid + 1;
    }
  }
  return false;
}
