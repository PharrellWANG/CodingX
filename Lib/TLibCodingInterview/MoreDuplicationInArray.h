//
// Created by Pharrell_WANG on 5/2/2018.
//
/// An array contains n numbers ranging from 0 to n-1. There're some numbers duplicated
/// in the array. It is not clear how many numbers are duplicated or how many times
/// a number gets duplicated. How do you find a duplicated number in the array?
/// E.G., if an array of length 7 contains the numbers {2, 3, 1, 0, 2, 5, 3}, the implemented
/// function (or method) should return either 2 or 3
///
/// Ideas: use the concept of a hash set.
/// (A hash table stores information by using a mechanism called hashing.
/// In hashing, the informational content of a key is used to determine a
/// unique value, called its hash code.)
///
/// Attention: throw more exceptions to make your code complete and robust.
///
///
/// Clues of Solution:
/// 1. Generate the best pseudo random numbers which are `more like` true random
/// with the mt19937 generator. Push the generated random numbers to a empty array.
/// 2. Implement the ideas of using the concept of a hash set, i.e., All numbers
/// in the input array are scanned sequentially. When a number is scanned, we
/// check whether it is already in the hash set. If it is, it is a duplicated
/// number. Otherwise, it is inserted into the set.
///
/// (More specifically, rearrange the input array. All numbers are scanned
/// one by one. When the
/// ith number is visited, first it checks whether the value (denoted as m)
/// is equal to i. If it is, we continue to scan the next number. Otherwise,
/// we compare it with the mth number. If the ith number equals the mth number,
/// duplication has been found. If not, we locate the number m in its correct
/// place, swapping it with the mth number. We continue to scan, compare,
/// and swap until a duplicated number is found.)
///
/// Indexes in an array with length n are in the range 0 to n-1. If
/// there were no duplication in the n numbers ranging from 0 to n-1,
/// we could rearrange them in sorted order, locating the number i as
/// the ith number. Since there are duplicate numbers in the array,
/// some locations are occupied by multiple numbers, but some locations
/// are vacant.


#ifndef CODINGX_MOREDUPLICATIONINARRAY_H
#define CODINGX_MOREDUPLICATIONINARRAY_H

class MoreDuplicationInArray {
 private:
  int * m_iArray;
  int m_iSizeOfArray;
 public:
  // the constructor below is just building up the empty array
  explicit MoreDuplicationInArray(int SizeOfArray = 1000):
      m_iArray(new int[SizeOfArray]),
      m_iSizeOfArray(SizeOfArray) {};
  void PseudoRandomGenAndPushToArrayWithDuplication();
  // use the concept of a hash set
  void TheFirstDuplicationThatWeWillFind();
};

#endif //CODINGX_MOREDUPLICATIONINARRAY_H
