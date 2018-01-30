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
}