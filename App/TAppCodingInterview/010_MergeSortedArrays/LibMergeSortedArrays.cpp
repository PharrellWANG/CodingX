//
// Created by Pharrell_WANG on 7/2/2018.
//

#include <iostream>
#include "LibMergeSortedArrays.h"

void LibMergeSortedArrays::merge(){
  if (!m_iFirstArray || !m_iSecondArray){
    return;
  }
  int i1 = m_iSize1 - 1;
  int i2 = m_iSize2 - 1;
  int i3 = m_iSize2 + m_iSize1 - 1;
  while(i1 >= 0 && i2 >=0){
    if (m_iFirstArray[i1] >= m_iSecondArray[i2]){
      m_iFirstArray[i3] = m_iFirstArray[i1];
      i1--;
      i3--;
    } else {
      m_iFirstArray[i3] = m_iSecondArray[i2];
      i2--;
      i3--;
    }
  }
  while(i2>=0){
    m_iFirstArray[i3] = m_iSecondArray[i2];
    i2--;
    i3--;
  }
  int cnt = 0;
  for (int i=0; i<=(m_iSize1+m_iSize2-1);i++){
    cnt += 1;
    std::cout << m_iFirstArray[i] << '\t';
  }
  std::cout << "\nTotally " << cnt << " items in the merged array. (Should be 17)" << std::endl;
}