//
// Created by WANG Zhenxiang Pharrell on 24/6/2018.
//
// Apply logical NOT operator to a function return value.

#include <iostream>
#include <climits>

bool is_int(double);
int main(){
    using namespace std;
    double num;
    cout << "INT_MIN: " << INT_MIN << endl;
    cout << "INT_MAX: " << INT_MAX << endl;

    cout << "Yo, dude! Enter an integer value: ";
    cin >> num;
    while(!is_int(num)){  // apply logical NOT operator to a function return value
        cout << "Out of range -- please try again: ";
        cin >> num;
    }
    // clang-tidy: use ``auto`` when initializing with type cast to avoid duplicated type name
    auto val = int (num); // type cast
    cout << "You've entered the integer " << val << "\nBye\n";
    return 0;
}

bool is_int(double x){
    return x <= INT_MAX && x >= INT_MIN;
}