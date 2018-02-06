//
// Created by Pharrell_WANG on 6/2/2018.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  char line[] = "short line for testing";

  // the constructor with no arguments
  string s1;
  s1 = "pharrell wang";
  cout << setw(10) << "s1:" << setw(50) << s1 << endl;

  // copy constructor
  string s2(s1);
  cout << setw(10) << "s2:" << setw(50) << s2 << endl;

  // the constructor with one argument
  string s3(line);
  cout << setw(10) << "s3:" << setw(50) << s3 << endl;

  // first arg the C string, the second arg is number of characters
  string s4(line, 10);
  cout << setw(10) << "s4:" << setw(50) << s4 << endl;

  // 1 - c++ string
  // 2 - start position
  // 3 - num of chars
  string s5(s3, 6, 4);
  cout << setw(10) << "s5:" << setw(50) << s5 << endl;

  // 1: number of characters
  // 2: character itself
  string s6(15, '*');
  cout << setw(10) << "s6:" << setw(50) << s6 << endl;

  // 1: start iterator
  // 2: end iterator
  string s7(s3.begin(), s3.end() - 5);
  cout << setw(10) << "s7:" << setw(50) << s7 << endl;

  // you can simply initialize string with assignment
  string s8 = "Use assignment to initialize the cpp string";
  cout << setw(10) << "s8:" << setw(50) << s8 << endl;

  return 0;
}