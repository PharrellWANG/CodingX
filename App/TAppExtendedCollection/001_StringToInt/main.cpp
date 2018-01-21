//
// Created by Pharrell_WANG on 21/1/2018.
//
/// Question:
/// Perform string subtraction without the help of libraries.
/// e.g.,
/// "11" - "22" = -11
/// "11" - "-22" = 33
///
/// Think:
/// Besides basic functional requests,
/// 1. boundary conditions and
/// 2. error handling should be considered.
/// Converting a string into an integer is the basic functional request to be fulfilled.
/// Additionally, candidates should
/// pay attention to more cases, including
/// 3. the negative and positive symbols,
/// 4. the minimal and maximal integers,
/// 5. and overflow.
/// The code is also expected to handle cases
/// 6. when the input string is not numeric, with non-digit characters.
///
/// Actually,
/// 1, 2, 6 can be combined as **string contains non-digit characters**.
/// ``if (('x' - '0') < 0 or ('x' - '0') > 9)``
/// 3 can be achieved by
/// ``if (('x' - '-') == 0){//give it a negative flag}``
/// ``if (('x' - '+') == 0){//give it a positive flag}``
/// 4, 5 can be achieved by detecting overflow.
/// > Signed overflow can be easily detected by seeing
/// > that its sign is opposite to that of the operands.
/// > Overflow can only occur when sign of numbers being added is the same.
/// [Integer Overflow](http://www.cplusplus.com/articles/DE18T05o/)
///
/// Solution
/// step1: check string not empty && string contains only digits from 0 to 9 OR plus/minus sign.
/// step2: check there is only one sign which is at the beginning, if no sign presented, it is positive
/// step3: check limits, maximum value of int: (1<<31)-1; minimum value of int: 1<<31
/// step4: subtract. if two operands have opposite signs, detect overflow; else it will never overflow for signed int.


#include <iostream>
#include "../../../Lib/TLibExtendedCollection/StringToInt.h"

int main(){

  int result;

  std::string myStringA = "-2147483648";
  std::string myStringB = "0";

  StringToInt str2intA(myStringA);
  StringToInt str2intB(myStringB);

  str2intA.CheckContainsOnlyDigitsAndSign();
  str2intB.CheckContainsOnlyDigitsAndSign();

  bool SignIsPositiveA = str2intA.GetSign();
  int AbsoluteValueA = str2intA.GetAbsoluteValue();
  bool SignIsPositiveB = str2intB.GetSign();
  int AbsoluteValueB = str2intB.GetAbsoluteValue();
// todo: abstract below codes into a public function which can print msg.
  std::cout << "Operand A" << '\n';
  if (SignIsPositiveA) {
    std::cout << "  sign : +" << '\n';
  } else {
    std::cout << "  sign: -" << '\n';
  }
  std::cout << "  value: " << AbsoluteValueA << '\n' << std::endl;

  std::cout << "Operand B" << '\n';
  if (SignIsPositiveB ) {
    std::cout << "  sign: +" << '\n';
  } else {
    std::cout << "  sign: -" << '\n';
  }
  std::cout << "  value: " << AbsoluteValueB << '\n' << std::endl;

//  todo: abstract below codes to a public function to do subtraction
  if (SignIsPositiveA == SignIsPositiveB) {
    if (SignIsPositiveA) {
      result = AbsoluteValueA - AbsoluteValueB;
    } else {
      result = AbsoluteValueB - AbsoluteValueA;
    }
  } else if (SignIsPositiveA) {
    result = AbsoluteValueA + AbsoluteValueB;
    if (result < 0) {
      std::cerr << "stack overflow" << std::endl;
      exit(EXIT_FAILURE);
    }
//  } else if (SignIsPositiveB) {
  } else {
    result = -AbsoluteValueA - AbsoluteValueB;
    if (result > 0) {
      std::cerr << "stack overflow" << std::endl;
      exit(EXIT_FAILURE);
    }
  }

  std::cout << "Result: " << result << std::endl;

  return 0;
}
