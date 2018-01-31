//
// Created by Pharrell_WANG on 31/1/2018.
//

#ifndef CODINGX_OCTALTOBINARY_H
#define CODINGX_OCTALTOBINARY_H

class OctalToBinary {
 private:
  int m_octalNumber;
 public:
  // It is constructor, which has the same name as the class
  // constructor cannot have a return type.
  // single-argument constructor must be marked as `explicit` to avoid unintentional implicit conversions
  explicit OctalToBinary(int m): m_octalNumber(m){}

  // input validation, isOctal
  const bool isOctal();

  // Method#1: we can convert the int number to string, then print the converted results
  const void printBinary();

  // Method#2: we can convert the octal to decimal, then decimal to binary
  const long long convertO2B();
};

#endif //CODINGX_OCTALTOBINARY_H
