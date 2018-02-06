//
// Created by Pharrell_WANG on 6/2/2018.
//

#include "Lib.h"

void Lib::Replace1() {
  std::cout << "Original string: " << str1 << std::endl;
  int idx = 0;
  int spaces = 0;
  // in ascii table nul is 0 // \0
  while (str1[idx] != 0) {
    // ascii table: 32 is blank
    if (str1[idx] == 32) {
      spaces++;
    }
    idx++;
  }
  int idxOfPre = idx;
  int idxOfNew = idx + 2 * spaces;

  while (idxOfPre >= 0 && idxOfNew > idxOfPre) {
    if (str1[idxOfPre] == ' ') {
      str1[idxOfNew--] = '0';
      str1[idxOfNew--] = '2';
      str1[idxOfNew--] = '%';
    } else {
      str1[idxOfNew--] = str1[idxOfPre];
    }
    idxOfPre --;
  }
  std::cout << "Replaced string: " << str1 << std::endl;
}

void Lib::Replace2() {
  std::cout << "Original string: " << str2 << std::endl;
//  str2.replace(1, 4, "hah");
  for (int i =0; i <str2.length(); i ++){
    if(str2[i] == 32){
      str2.replace(static_cast<unsigned long>(i), 1, "%20");
    }
  }
  std::cout << "Replaced string: " << str2 << std::endl;
}