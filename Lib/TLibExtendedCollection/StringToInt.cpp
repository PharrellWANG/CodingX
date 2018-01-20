//
// Created by Pharrell_WANG on 21/1/2018.
//

#include "StringToInt.h"

StringToInt::StringToInt(const std::string &TheStringToConvert) {
  this->TheString = TheStringToConvert;
}

const bool StringToInt::CheckContainsOnlyDigitsAndSign(){
  std::string tmpString = this->TheString;
//  std::cout << tmpString << std::endl;
//  std::cout << ((tmpString[0] - '-') == 0) << std::endl;

  for (int i=0;tmpString[i]!=0;i++){
    if ((tmpString[i] - '0') < 0 || (tmpString[i] - '0') > 9){
//      std::cout << "---->1" << std::endl;
      if ((tmpString[i] - '+') != 0 && (tmpString[i] - '-') != 0){
//        std::cout << "---->2" << std::endl;
        return false;
      } else if (tmpString[0] != '+' && tmpString[0] != '-') {
//        std::cout << "---->3" << std::endl;
        return false;
      }
    }
  }
  return true;
}
