//
// Created by Pharrell_WANG on 23/1/2018.
//

#include <iostream>

/**
 * Check whether the first character and the last one are identical,
 * and then compare the second character and the second one
 * from the end, and so on.
 *
 * \param str, the string to check
 */
int IsPalindrome(const std::string & str)
{
  int palindrome = 1;
  if (!str.empty())
  {
    unsigned long length = str.length();
    unsigned long half = length >> 1;

    for (int i = 0; i< half; ++i)
    {
      if(str[i]!=str[length-1-i])
      {
        palindrome = 0;
        break;
      }
    }
  }
  return palindrome;
}

/**
 * ====== Solution 1 ======
 * First converting a number into a string,
 * second check whether the string is palindrome or not
 *
 * \param number, the number to check
 */
int IsPalindromeSolution1(unsigned int number)
{
  std::string str = std::to_string(number);
  return IsPalindrome(str);
}

// ====== Solution 2 ======
// Composing a reversed number, if reserved == original,
// then it is a palindrome.

/**
 * ====== Solution 2 ======
 * Composing a reversed number,
 * if reserved == original,
 * then it is a palindrome.
 *
 * \param number, the number to check
 */
int IsPalindromeSolution2(unsigned int number)
{
  int reserved = 0;
  int copy = number;

  while(number!=0)
  {
    reserved = reserved * 10 + number % 10;
    number = number/10;
  }
  return (reserved == copy) ? 1 : 0;
}

void Test(const std::string &TestName, unsigned int NumberInput, unsigned int ExpectedOutput)
{
  if(!TestName.empty())
    std::cout << '\n' << TestName << " starts:" << '\n';

  if(IsPalindromeSolution1(NumberInput) == ExpectedOutput)
    std::cout << "  Solution 1 -->  passed" << '\n';
  else
    std::cout << "  Solution 1 -->  FAILED" << '\n';

  if (IsPalindromeSolution2(NumberInput) == ExpectedOutput)
    std::cout << "  Solution 2 -->  passed" << '\n';
  else
    std::cout << "  Solution 2 -->  FAILED" << '\n';

  std::cout << "=================\n" << std::endl;
}

int main()
{
  Test("Test1", 5, 1);
  Test("Test2", 121, 1);
  Test("Test3", 13231, 1);
  Test("Test4", 511115, 1);
  Test("Test5", 5556555, 1);

  Test("Test6", 52, 0);
  Test("Test7", 1231, 0);
  Test("Test8", 132931, 0);
  Test("Test9", 5111815, 0);
  Test("Test10", 55565855, 0);
}