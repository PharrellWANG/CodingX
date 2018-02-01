
//
// Created by Pharrell_WANG on 2/2/2018.
//
/// ======================================================
/// Q: An array contains n numbers ranging from 0 to n-2.
/// There is exactly one number duplicated in the array.
/// How do you find the duplicated number?
/// For example, if an array with length 5 contains
/// numbers {0, 2, 1, 3, 2}, the duplicated number is 2.
/// ======================================================
/// This class has a private member that is an array.
/// The size of the array is unknown and shall be initialized
/// by the constructor.
/// The other way might be better if we can bear the little
/// time inefficiency introduced by std::vector
/// todo: implementation with vector.

#ifndef CODINGX_DUPLICATIONINARRAY_H
#define CODINGX_DUPLICATIONINARRAY_H


class DuplicationInArray {
private:
    int* array; // ---> pointer to int
    unsigned int size; // ---> unsigned int can be 2 or 4 bytes, hence [0, 2**16] or [0, 2**32]
    // use =delete to prevent calling of a special member function
//    DuplicationInArray(const DuplicationInArray&) = delete; //---> copy constructor
public:
    DuplicationInArray(unsigned int Size, int duplicatedNumber):
            array(new int[Size]),
            size(Size) {
      for (int i = 0; i < size-1; i ++ ){
        array[i] = i;
      }
      array[size-1] = duplicatedNumber;
    };
    ~DuplicationInArray(){
        delete array;
    }
    const int FindDuplication();
};


#endif //CODINGX_DUPLICATIONINARRAY_H
