//
// Created by Pharrell_WANG on 6/2/2018.
//

#include <iostream>
#include "LibSearch.h"


int LibSearch::m_iMat[][4] = {{1, 3, 5, 7},
                              {2, 4, 6, 8},
                              {6, 7, 8, 9},
                              {7, 9, 10, 11}
};

int LibSearch::getNumOfCols() {return sizeof(m_iMat[0]) / sizeof(int);}
int LibSearch::getNumOfRows() {return sizeof(m_iMat) / sizeof(m_iMat[0]);}

void LibSearch::printMat() {
  for (int i=0; i<getNumOfRows(); i++){
    for (int j=0; j<getNumOfCols(); j++){
      std::cout << m_iMat[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

/**
 * We can start from either top-right or bottom-left
 * In this example we will start from bottom-left.
 * @return
 */
bool LibSearch::find(){
  bool found = false;
  int iColIdx = 0;
  int iRowIdx = getNumOfRows() - 1;

  // when found
  // when iColIdx ++;
  // when iColIdx --;

  while (iRowIdx >= 0 && iColIdx <= (getNumOfCols()-1)){
    if (m_iMat[iRowIdx][iColIdx] == m_iNumToFind) {
      found = true;
      break; // --> remember to break after found
    }
    if (m_iMat[iRowIdx][iColIdx] > m_iNumToFind){
      iRowIdx --;
    } else {
      iColIdx ++;
    }
  }

  return found;
}
