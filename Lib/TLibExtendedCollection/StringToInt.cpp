//
// Created by Pharrell_WANG on 21/1/2018.
//

/** \file     StringToInt.cpp
    \brief    entropy decoder class
*/

#include "StringToInt.h"

/**
 * constructor,
 *
 * \param TheStringToConvert
 */
StringToInt::StringToInt(const std::string &TheStringToConvert) {
  TheString = TheStringToConvert;
}

/**
 * check the operand string contains only digit and sign,
 * error handling for
 *  1. empty string.
 *  2. non-digit && non-sign
 *  3. has a sign which is not at the beginning of the string.
 *  4. has more than one signs
 *
 * \param TheStringToConvert
 * \return Bool value, if true, checking pass; else exit execution.
 */
const bool StringToInt::CheckContainsOnlyDigitsAndSign(){
  std::string tmpString = TheString;

  if (TheString.empty()) {
    std::cerr << "The string to be converted cannot be empty!" << '\n';
    exit(EXIT_FAILURE);
  }


  for (int i=0;tmpString[i]!=0;i++){
    if ((tmpString[i] - '0') < 0 || (tmpString[i] - '0') > 9){
      if ((tmpString[i] - '+') != 0 && (tmpString[i] - '-') != 0){
        std::cerr << "The non-digit character is neither a positive nor a negative sign!" << '\n';
        exit(EXIT_FAILURE);
      } else if (tmpString[0] != '+' && tmpString[0] != '-') {
        std::cerr << "The sign is not at the beginning of the string!" << '\n';
        exit(EXIT_FAILURE);
      }
    }
  }

  int counter = 0;
  for (int i=0;tmpString[i]!=0;i++){
    if (tmpString[i] == '+' || tmpString[i] == '-'){
      counter ++;
    }
  }

  if (counter>1) {
    std::cerr << "Input has more than one sign!" << '\n';
    exit(EXIT_FAILURE);
  }

  return true;
}

/**
 * Get the sign of the operand.
 * Notice that since we call this
 * function after StringToInt::CheckContainsOnlyDigitsAndSign(),
 * which means we are sure that the input string has a
 * positive/negative sign at the first position,
 * or has a omitted positive sign.
 *
 * \return Bool value, if positive, return true; else false (negative).
 */
const bool StringToInt::GetSign() {
  std::string tmpString = TheString;
  int x = tmpString[0] - '0';
  // warning: do not use `0 <= x <= 9`, that would be wrong
  if (0 <= x && x <= 9){
    return true;
  } else {
    return tmpString[0] == '+';
  }
  // do not simply use below line;
  // `return TheString[0] == '+';`
  // because it cannot correctly handle the case where
  // the positive sign is not presented
}

/**
 * Get the absolute value of the operand.
 * error handling for
 *  1. stack overflow, the integer number is out of the range (1<<31, (1 << 31) - 1].
 *
 * \return the absolute int value of the operand
 */
const int StringToInt::GetAbsoluteValue(){
  std::string tmpString = TheString;
  int i_AbsoluteValue = 0;
  for (int i=0;tmpString[i]!=0;i++){
    //warning: be careful of the index of tmpString, do not always use `0`
    if (tmpString[i] == '+' || tmpString[i] == '-'){
      continue;
    }
    i_AbsoluteValue = i_AbsoluteValue * 10 + (tmpString[i] - '0');
    if (i_AbsoluteValue < 0){
      // note that we only support the integers belonging to ((1<<31, (1 << 31) - 1]
      std::cerr << "stack overflow, the integer number is out of the range (1<<31, (1 << 31) - 1]" << '\n';
      exit(EXIT_FAILURE);
    }
  }
  return i_AbsoluteValue;
}
