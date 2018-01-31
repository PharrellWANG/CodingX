//
// Created by Pharrell_WANG on 31/1/2018.
//

#include "DecimalToAny.h"
#include <iostream>
#include <map>

void DecimalToAny::convertDecimalToAny(int num, int any) {
  // two simple ways of initializing a map
  // #1:
  std::map<int, std::string> mapOfWords = {{2, "binary"}, {8, "octal"}, {16, "hexadecimal"}};
  // #2:
  std::map<int, std::string> yetAnotherMapOfWords;
  yetAnotherMapOfWords[2] = "binary";
  yetAnotherMapOfWords[8] = "octal";
  yetAnotherMapOfWords[16] = "hexadecimal";

  const int SIZE = 100;
  int remainder;
  int arr[SIZE];
  int idx = 0;
  int base = any;

  // conversion happens here
  int j = 1;
  int outputNumber = 0;
  while (num > 0){
    remainder = num % base;

    if (base < 10) {
      outputNumber += remainder * j;
      j *= 10;
    }
    arr[idx] = remainder;

    idx++;
    num /= base;
  }

  // now print result
  for (int i = idx -1;i>=0;i--){
    if (arr[i]>=10){
      // this means the character stored in array
      // is for hexadecimal, which is larger than 9,
      // e.g., A, B, ...
      // we add 55 to find their char representation
      // for output.
      // ascii table: http://www.asciitable.com
//      std::cout << arr[i]+55 << '\n'; // this will output decimal representation
      std::cout << (char)(arr[i]+55); // this will output char representation
    } else {
      std::cout << arr[i];
    }
  }

  if (base< 10){
    std::cout << "\n----------->>" << outputNumber << '\n';
  }



}