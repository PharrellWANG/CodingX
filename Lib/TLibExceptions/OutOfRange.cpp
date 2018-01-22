//
// Created by Pharrell_WANG on 22/1/2018.
//

#include <iostream>
#include "OutOfRange.h"

void OutOfRange::Msg() {
  std::cout << "Error Hint 1. The input integer " << m_iPosition << " is out of range. " << std::endl;
  std::cout << "Error Hint 2. The length of list is: " << m_iLengthOfList << std::endl;
  std::cout << "Error Hint 3. Position should be within the range of [1," << m_iLengthOfList + 1 <<"]." << std::endl;
}