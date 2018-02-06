//
// Created by Pharrell_WANG on 6/2/2018.
//
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int main(){
  string str;
  cout << "Type arbitrary string with EOL as $, then hit Enter: " << endl;
  /// First usage >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  getline(cin, str, '$');
  cout << "str is: " << str << endl;

  // ifstream myFile("data.dat"); // --->relative path does not work, please use absolute path
  ifstream myFile("/Users/pharrell_wang/ClionProjects/CodingX/App/TAppPlayground/005_StringInCpp/data.dat");
  vector<string> v;
  string line;
  cout << endl << "Read data from file starts now." << endl << endl;
  if (myFile.is_open()){
    /// Second usage >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    while(getline(myFile, line)){
      v.push_back(line);
    }
  } else {
    cout << "Open file failed." << endl;
  }
//  while (! myFile.eof()) {
//    cout << "----" << endl;
//    getline(myFile, str);
//    v.push_back(str);
//  }
  copy(v.begin(), v.end(), ostream_iterator<string>(cout, "\n"));
  cout << endl;

  return 0;
}