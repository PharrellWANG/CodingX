//
// Created by Pharrell_WANG on 30/1/2018.
//

#include <iostream>
#include "BinaryToDecimal.h"

const int BinaryToDecimal::convertBinary2Decimal(int num) {
    // init
    int base = 1; // pow(2,0) = 1
    int deci = 0; // the value of the decimal number
    int ls; // th least significant bit, remainder
    int bin = num; // the binary to convert, store it here for final output

    while(num > 0){
        ls = num % 10;
        deci += ls * base;
        base *= 2;
        num /= 10;
    }
    std::cout << "The decimal equivalent of " << bin << ": " << deci << '\n';
    return deci;
}