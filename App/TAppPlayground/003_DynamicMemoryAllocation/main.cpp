//
// Created by Pharrell_WANG on 22/1/2018.
//

#include <iostream>

int main()
{
    auto *ptr = new int;
    *ptr = 4;
    std::cout << *ptr << std::endl;
    delete ptr;
    return 0;
}