//
// Created by Pharrell_WANG on 5/2/2018.
//


#include <iostream>
#include <random>
#include "MoreDuplicationInArray.h"
#include "../TLibExceptions/SimpleOutOfRange.h"


void MoreDuplicationInArray::PseudoRandomGenAndPushToArrayWithDuplication(){
  // size 1000
  std::random_device rd; // -->	define the name of a function to obtain a true random number from entropy pool.
  std::mt19937 RandomGen(rd()); // --> use the true random to seed the mt19937 uniform pseudo random generator to make it more like true random.
  std::uniform_int_distribution<> uid1000(0, 1000); // --> define the distribution type and the range
  std::uniform_int_distribution<> uidBool(0, 1); // --> this will be used to decide whether to push a generated number twice.

  /**
   Warning: the approach below does not guarantee the numbers in m_iArray
   after looping will have duplications.
   See the code block right after this comment for an example where guarantees
   are provided.
   * for (int i=0;i<1000;i++){
   *    m_iArray[i] = uid1000(RandomGen);
  }*/
//  for (int i=0;i<1000;i++)
//    m_iArray[i] = uid1000(RandomGen);

  for (int i=0;i<1000;i++){
    int NumToPush = uid1000(RandomGen);
    int RandomPositionFromWhereWeStartGuaranteedDuplicationWithProbability = uid1000(RandomGen);
    int BoolDecisionOfPushingTwice = uidBool(RandomGen);
    if (RandomPositionFromWhereWeStartGuaranteedDuplicationWithProbability > 990){
      if (BoolDecisionOfPushingTwice == 1){
        m_iArray[i] = NumToPush;
        i++;
        m_iArray[i] = NumToPush;
      } else {
        m_iArray[i] = NumToPush;
      }
    } else {
      m_iArray[i] = NumToPush;
    }
  }
  // --> use std::shuffle to reorder the array sequence.
  // --> Notice that the second parameter is using
  // script 1000, instead of 999.
  // This is because if you use 999, the last element will not be included for shuffling.
  std::shuffle(&m_iArray[0], &m_iArray[1000], RandomGen);
}

/**
 scan, compare, swap, until duplication found
 */
void MoreDuplicationInArray::TheFirstDuplicationThatWeWillFind(){
  for (int i=0; i< 10; i++){
    std::cout << m_iArray[i] << std::endl;
  }
  for (int i=0; i< 1000; i++){
    if (m_iArray[i] < 0 || m_iArray[i] > 999){
      throw SimpleOutOfRange();  // --> call the implicit constructor to use the error class of `SimpleOutOfRange` defined by myself.
    }
    while(m_iArray[i]!=i){
//      std::cout << "========" << std::endl;
//      std::cout << i << std::endl;
//      std::cout << m_iArray[i] << std::endl;
      int m = m_iArray[i];
//      std::cout << m_iArray[m] << std::endl;
//      std::cout << "========" << std::endl;
      if(m_iArray[i]==m_iArray[m]){
        std::cout << "The first duplicated number that has been found: " << m << '\n';
        std::cout << "The position m is: " << m << std::endl;
        std::cout << "The position i is: " << i << std::endl;
        for (int j=0; j< 10; j++){
          std::cout << m_iArray[j] << std::endl;
        }
        return;
      } else {
        // swap
        int tmp;
        tmp = m_iArray[i];
        m_iArray[i] = m_iArray[m];
        m_iArray[m] = tmp;
      }
    }
  }
}