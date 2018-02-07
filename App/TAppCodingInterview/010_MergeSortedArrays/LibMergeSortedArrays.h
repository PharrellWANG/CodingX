//
// Created by Pharrell_WANG on 7/2/2018.
//
/// In this solution, we allocate enough memory
/// in the first array to accommodate the merging.

#ifndef CODINGX_LIBMERGESORTEDARRAYS_H
#define CODINGX_LIBMERGESORTEDARRAYS_H

class LibMergeSortedArrays {
 private:
  static const int m_iSize1 = 11;
  static const int m_iSize2 = 6;
  int m_iFirstArray[m_iSize1 + m_iSize2] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 13, 14};
  int m_iSecondArray[m_iSize2] = {2, 3, 5, 6, 7, 8};
 public:
  void merge();
};

#endif //CODINGX_LIBMERGESORTEDARRAYS_H
