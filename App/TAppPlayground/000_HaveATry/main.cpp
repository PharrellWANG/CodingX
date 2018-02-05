//
// Created by Pharrell_WANG on 26/1/2018.
//
/// A modern C++ approach to generate random integer numbers
/// within a range.

#include <iostream>
#include <random>
#include <iomanip> // std::setw

//int main()
//{
//  std::random_device rd; // obtain a random number from hardware
//  std::cout << rd() << std::endl;
//  std::mt19937 eng(rd()); // seed the generator
//  std::uniform_int_distribution<> distr(0, 9); // define the range [0, 9]

//  for(int n=0; n<40; ++n)
//    std::cout << distr(eng) << ' '; // generate numbers

//  std::cout << std::setw(30) << "sizeof(int): " << std::setw(6) << sizeof(int) << '\n';
//  std::cout << std::setw(30) << "sizeof(unsigned int): " << std::setw(6) << sizeof(unsigned int) << '\n';
//  std::cout << std::setw(30) << "sizeof(signed int): " << std::setw(6) << sizeof(signed int) << '\n' << '\n';
//
//  std::cout << std::setw(30) << "sizeof(short int): " << std::setw(6) << sizeof(short int) << '\n';
//  std::cout << std::setw(30) << "sizeof(short): " << std::setw(6) << sizeof(short) << '\n';
//  std::cout << std::setw(30) << "sizeof(unsigned short): " << std::setw(6) << sizeof(unsigned short) << '\n';
//  std::cout << std::setw(30) << "sizeof(signed short): " << std::setw(6) << sizeof(signed short) << '\n' << '\n';
//
//  std::cout << std::setw(30) << "sizeof(long int): " << std::setw(6) << sizeof(long int) << '\n';
//  std::cout << std::setw(30) << "sizeof(long): " << std::setw(6) << sizeof(long) << '\n';
//  std::cout << std::setw(30) << "sizeof(long long int): " << std::setw(6) << sizeof(long long int) << '\n';
//  std::cout << std::setw(30) << "sizeof(long long): " << std::setw(6) << sizeof(long long) << '\n';
//}

// shuffle algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::shuffle
#include <array>        // std::array
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

int main () {
  std::array<int,5> foo {1,9,13,14,59};

  // obtain a time-based seed:
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

  shuffle (foo.begin(), foo.end(), std::default_random_engine(seed));

  std::cout << "shuffled elements:";
  for (int& x: foo) std::cout << ' ' << x;
  std::cout << '\n';

  int m_iArray[10];
  for (int i=0; i<10; i++){
    m_iArray[i] = i+2;
  }
  std::cout << m_iArray[9] << std::endl;
  std::cout << m_iArray[10] << std::endl;
  std::random_device rd;
  std::mt19937 gen(rd()); // seed the generator which has a uniform distribution
  std::shuffle(&m_iArray[0], &m_iArray[10], gen);
  for (int i=0; i<10; i++){
    std::cout << m_iArray[i] << std::endl;
  }

  return 0;
}
