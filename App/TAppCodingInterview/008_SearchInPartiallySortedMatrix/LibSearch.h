//
// Created by Pharrell_WANG on 6/2/2018.
//

#ifndef CODINGX_LIBSEARCH_H
#define CODINGX_LIBSEARCH_H

class LibSearch {
 private:
  static int m_iMat[][4];
  int m_iNumToFind;
 public:
  explicit LibSearch(int num):m_iNumToFind(num){};
  void printMat();
  int getNumOfRows();
  int getNumOfCols();
  bool find();
};

#endif //CODINGX_LIBSEARCH_H
