//
// Created by Pharrell_WANG on 5/2/2018.
//
#include "../../../Lib/TLibCodingInterview/MoreDuplicationInArray.h"
#include "../../../Lib/TLibExceptions/SimpleOutOfRange.h"

int main(){
  MoreDuplicationInArray instance(1000);
  instance.PseudoRandomGenAndPushToArrayWithDuplication();
  try{
    instance.TheFirstDuplicationThatWeWillFind();
  } catch (SimpleOutOfRange & e) {
    e.Msg();
  }
}

