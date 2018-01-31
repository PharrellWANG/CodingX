//
// Created by Pharrell_WANG on 31/1/2018.
//

#include "OctalToBinary.h"
#include <iostream>
//#include <string>
#include <cmath>

const bool OctalToBinary::isOctal() {
  int rem;
  int m = m_octalNumber;

  while (m != 0){
    rem = m % 10;
    if (rem > 7) {
      return false;
    }
    m /= 10;
  }
  return true;
}

const void OctalToBinary::printBinary() {
  std::string theOctalAsString = std::to_string(m_octalNumber);
  int i = 0;
  while (theOctalAsString[i]){
    switch ( theOctalAsString[i]){
      case '0': std::cout << "000";
        break;
      case '1': std::cout << "001";
        break;
      case '2': std::cout << "010";
        break;
      case '3': std::cout << "011";
        break;
      case '4': std::cout << "100";
        break;
      case '5': std::cout << "101";
        break;
      case '6': std::cout << "110";
        break;
      case '7': std::cout << "111";
        break;
      default: std::cout << "Invalid octal number.\n";
        break;
    }
    i++;
  }
}

const long long OctalToBinary::convertO2B(){
  /// convert to decimal first, then convert to binary
  int num = m_octalNumber;
  int dec = 0;
  long long bin = 0;
  int BASE_TEN = 10;
  int BASE_EIGHT = 8;
  int powerIdx1 = 0;
  int powerIdx2 = 0;

  /// ---> now get the decimal
  while (num != 0){
    dec += num % 10 * pow(BASE_EIGHT, powerIdx1);
    num /= 10;
    powerIdx1 += 1;
  }

  /// ---> now convert decimal to binary
  while (dec != 0){
    bin += dec % 2 * pow(BASE_TEN, powerIdx2);
    powerIdx2 += 1;
    dec /= 2;
  }
  /// --> sometimes left most bits will be 0, but this codes will not be able to print those zeros.

  return bin;
}
