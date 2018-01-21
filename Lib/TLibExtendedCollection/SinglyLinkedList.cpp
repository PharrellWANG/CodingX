//
// Created by Pharrell_WANG on 22/1/2018.
//

#include "SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList() {head= nullptr;tail= nullptr;}

void SinglyLinkedList::CreateNodeAndLinkItAtTail(const int& value){
  auto *tmpNode = new Node;
  tmpNode->m_nValue = value;
  tmpNode->m_pNext = nullptr;
  if (head == nullptr){
    head = tmpNode;
    tail = tmpNode;
    delete tmpNode;
    tmpNode = nullptr;
  } else {
    tail->m_pNext = tmpNode;
    tail = tmpNode;
  }
}