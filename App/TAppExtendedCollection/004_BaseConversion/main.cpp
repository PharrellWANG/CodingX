//
// Created by Pharrell_WANG on 30/1/2018.
//

#include <iostream>
#include "../../../Lib/TLibExtendedCollection/BinaryToDecimal.h"
#include "../../../Lib/TLibExtendedCollection/DecimalToAny.h"
#include "../../../Lib/TLibExtendedCollection/OctalToBinary.h"
#include "../../../Lib/TLibExceptions/NotBinary.h"

int main() {
  std::cout << "\n--------------------------------" << '\n';
  std::cout << "\n--------------------------------" << '\n';
  BinaryToDecimal b2d;
  int binaryNumber = 111111;
  // usage of try catch. Codes after e.Msg() are executed as normal.
  try {
    BinaryToDecimal::isBinary(binaryNumber);
  } catch (NotBinary & e) {
    e.Msg();
  }
  std::cout << "\n--------" << '\n';
  const bool isBin = BinaryToDecimal::yetAnotherIsBinary(binaryNumber);
  if (!isBin){
    std::cout << "Please provide a binary which only contains digit 0 or 1." << '\n';
  } else {
    int deciResult = b2d.convertBinary2Decimal(binaryNumber);
    std::cout << deciResult << std::endl;
  }
  std::cout << "\n--------------------------------" << '\n';
  std::cout << "\n--------------------------------" << '\n';
  int deciNum = 1234;
  DecimalToAny d2a;
  d2a.convertDecimalToAny(1234, 8);

  /// --> Notice that below code is not going to work because the method `convertDecimalToAny`
  ///     does not handle negative numbers. More programming needs to be done to make it
  ///     able to handle negative numbers.
  /// --> The most important thing to know when working with signed numbers
  ///     is how large the number is (how many bits is it).
  ///     ref: see `../../PDFs/001_SignedConversions.pdf`
  d2a.convertDecimalToAny(-1234, 16);

  std::cout << "\n--------------------------------" << '\n';
  std::cout << "\n--------------------------------" << '\n';
  OctalToBinary o2b(1234567);
//  o2b.OctalToBinary(22);
  if (o2b.isOctal()){
    o2b.printBinary();
    long long bin = o2b.convertO2B();
    std::cout << "\n--->" << bin << std::endl;
  } else {
    std::cout << "Please input a valid octal number.\n";
  }
}
