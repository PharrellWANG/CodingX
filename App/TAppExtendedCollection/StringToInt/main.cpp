//
// Created by Pharrell_WANG on 21/1/2018.
//
// Question:
// Perform string subtraction without the help of libraries.
// e.g.,
// "11" - "22" = -11
// "11" - "-22" = 33
//
// Think:
// Besides basic functional requests,
// 1. boundary conditions and
// 2. error handling should be considered.
// Converting a string into an integer is the basic functional request to be fulfilled.
// Additionally, candidates should
// pay attention to more cases, including
// 3. the negative and positive symbols,
// 4. the minimal and maximal integers,
// 5. and overflow.
// The code is also expected to handle cases
// 6. when the input string is not numeric, with non-digit characters.
//
// Actually,

// 1, 2, 6 can be combined as **string contains non-digit characters**.
// ``if (('x' - '0') < 0 or ('x' - '0') > 9)``

// 3 can be achieved by
// ``if (('x' - '-') == 0){//give it a negative flag}``
// ``if (('x' - '+') == 0){//give it a positive flag}``

// 4, 5 can be achieved by detecting overflow
// todo:


#include <iostream>

int main(){
  std::cout << 'happy day' << std::endl;
  return 0;
}
