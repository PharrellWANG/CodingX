//
// Created by Pharrell_WANG on 21/1/2018.
//

// #pragma once
#ifndef CODINGX_STRINGTOINT_H
#define CODINGX_STRINGTOINT_H

#include <iostream>
#include <string>

class StringToInt {
//Private members and methods are only accessible via methods in the class definition
//Another option is 'protected', which are members and methods only accessible in the class definition or by classes who extend this class
private:
  std::string TheString;
//Public members and methods are accessible to anyone who creates an instance of the class
public:
  explicit StringToInt(const std::string& TheStringToConvert);

  const bool CheckContainsOnlyDigitsAndSign();

};


#endif //CODINGX_STRINGTOINT_H
