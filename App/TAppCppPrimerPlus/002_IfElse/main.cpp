//
// Created by WANG Zhenxiang Pharrell on 24/6/2018.
//
// You want to alter incoming text by scrambling the letters
// while keeping the newline character intact. In that case,
// each line of input is converted to an output line of equal length.

#include <iostream>

int main(){
    char ch;

    std::cout << 'x' << std::endl;
    std::cout << int('x') << std::endl;
    std::cout << int('s') << std::endl;
    std::cout << int('xs') << std::endl;
    std::cout << 120 * 115 << std::endl;
    std::cout << 'x' + 1 << std::endl;
    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    while (ch!= '.'){
        if (ch == '\n')
            std::cout << ch;
        else
//            std::cout << ++ch;
            std::cout << ch + 1;
        std::cin.get(ch);
    }
    return 0;
}