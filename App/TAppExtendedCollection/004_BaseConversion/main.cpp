//
// Created by Pharrell_WANG on 30/1/2018.
//

#include <iostream>
#include "../../../Lib/TLibExtendedCollection/BinaryToDecimal.h"

int main(){
    BinaryToDecimal b2d;
    int deciResult = b2d.convertBinary2Decimal(2);
    std::cout << deciResult << std::endl;
}
