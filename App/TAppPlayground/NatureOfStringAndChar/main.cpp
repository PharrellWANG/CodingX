//
// Created by Pharrell_WANG on 21/1/2018.
//
// [ASCII](http://www.asciitable.com)
// ASCII stands for ``American Standard Code for Information Interchange``.

#include <iostream>
//#include <assert.h>

int main() {
  std::string str = "0123456789";

  for (int i = 0; i < 10; i++){
    std::cout << "The char of " << str[i] << " (" << typeid(str[i]).name() << ")"
              << " converted to integer is: "
              << (str[i] - 48) << " (" << typeid(str[i] - 48).name() << ") " << std::endl;
  }
  if (str[1] == '1'){
    std::cout << "\nYes, str[1] == '1' " << std::endl;
  }
  std::cout << "\n'1' - 48  = " << ('1' - 48);
  std::cout << "\n\n'1' - '0' = " << ('1' - '0');
  std::cout << "\n\n'+' - '+' = " << ('+' - '+');
  std::cout << "\n\n'-' - '-' = " << ('-' - '-');

  // [static_assert](http://en.cppreference.com/w/cpp/language/static_assert)
  static_assert(('-' - '-') == 0, "('-' - '-') should be equal to 0, isn't it?");

  std::cout << "\n\nPerfect ending :)\n";

  return 0;
};