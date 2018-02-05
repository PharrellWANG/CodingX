//
// Created by Pharrell_WANG on 22/1/2018.
//

#ifndef CODINGX_OUTOFRANGE_H
#define CODINGX_OUTOFRANGE_H
#include "../TLibUtils/TypeDef.h"

class OutOfRange {
 private:
  Int m_iPosition;
  Int m_iLengthOfList;
 public:
  // constructors that are callable with a single argument must be marked as `explicit` to avoid unintentional implicit conversions
  OutOfRange(int a=0, int b=0): m_iPosition(a), m_iLengthOfList(b) {}
  void Msg();
};

#endif //CODINGX_OUTOFRANGE_H
