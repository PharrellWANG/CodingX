
//
// Created by Pharrell_WANG on 30/1/2018.
//
/// You need to first judge whether the number is binary or not.

#ifndef CODINGX_BINARYTODECIMAL_H
#define CODINGX_BINARYTODECIMAL_H

class BinaryToDecimal {
 public:
  static void isBinary(int num); // ---> this function is for throw error msg, it will not stop the execution of codes after throwing.
  static const bool yetAnotherIsBinary(int num);
  const int convertBinary2Decimal(int num);
};

#endif //CODINGX_BINARYTODECIMAL_H
