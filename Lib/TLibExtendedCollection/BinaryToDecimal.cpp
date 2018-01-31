//
// Created by Pharrell_WANG on 30/1/2018.
//

#include <iostream>
#include "BinaryToDecimal.h"
#include "../TLibExceptions/NotBinary.h"


const int BinaryToDecimal::convertBinary2Decimal(int num) {
  // we need to check a number is a valid binary number.
  // it can be negative, but must only contain digit 0 or 1; or the digit cannot be larger than 1.
  // init
  int base = 1; // pow(2,0) = 1
  int deci = 0; // the value of the decimal number
  int ls; // th least significant bit, remainder
  int bin = num; // the binary to convert, store it here for final output

  while (num > 0) {
    ls = num % 10;
    deci += ls * base;
    base *= 2;
    num /= 10;
  }
  std::cout << "The decimal equivalent of " << bin << ": " << deci << '\n';
  return deci;
}

void BinaryToDecimal::isBinary(int num) {
  int remainder;
//  bool result = true;
  while(num != 0){
    remainder = num % 10;
    if (remainder > 1){
//      result = false;
      throw NotBinary();
    }
    num /= 10;
  }
//  return result;
}

const bool BinaryToDecimal::yetAnotherIsBinary(int num) {
  int remainder;
  while(num!=0){
    remainder = num % 10;
    if (remainder > 1){
      return false;
    }
    num /= 10;
  }
  return true;
}