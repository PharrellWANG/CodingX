//
// Created by Pharrell_WANG on 21/1/2018.
//
// [ASCII](http://www.asciitable.com)
// ASCII stands for ``American Standard Code for Information Interchange``.

#include <iostream>
#include <cassert>

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
  std::cout << "\n\n' ' - '0' = " << (' ' - '0') << std::endl;

  std::cout << 0001 - 00002 << std::endl;

  // [static_assert](http://en.cppreference.com/w/cpp/language/static_assert)
  static_assert(('-' - '-') == 0, "('-' - '-') should be equal to 0, isn't it?");
//  assert("" == NULL);
//  assert("" == 0);
  std::cout << "The length of empty string is: " << strlen("") << std::endl;
//  assert("" == '\0');
  std::cout << "\n\nPerfect ending :)\n";

  return 0;
};