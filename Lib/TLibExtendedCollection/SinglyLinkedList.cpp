//
// Created by Pharrell_WANG on 22/1/2018.
//

#include <iostream>
#include <stack>
#include "SinglyLinkedList.h"
//#include "../TLibUtils/TypeDef.h"
#include "../TLibExceptions/OutOfRange.h"

//Constructor
//You must scope the method definitions with the class name (LinkedList::)
LinkedList::LinkedList() {
  m_head = nullptr;
}

Node* LinkedList::CreateNode(Int value) {
  auto *newNode = new Node;
  newNode->m_iValue = value;
  newNode->m_pNext = nullptr;
  return newNode;
}

Node* LinkedList::GetTailNode() {
  auto * tmpNode = m_head;
  if(tmpNode == nullptr){
    return tmpNode;
  }
  while(tmpNode->m_pNext){
    tmpNode = tmpNode->m_pNext;
  }
  return tmpNode;
}

Node* LinkedList::GetHeadNode(){
  return m_head;
}

const int LinkedList::GetLengthOfList(){
  auto* tmpNode = m_head;
  Int length = 0;
  while(tmpNode){
    length ++;
    tmpNode = tmpNode->m_pNext;
  }
  return length;
};
//<----Below codes is also for getting the length of linked list
//      But it is not better than the other two methods.
//      Kept here for reference.
//const int LinkedList::GetLengthOfList(){
//  auto* tmpNode = m_head;
//  Int length;
//  if(tmpNode == nullptr){
//    length = 0;
//    return length;
//  }
//  length = 1;
//  while(tmpNode->m_pNext){
//    length ++;
//    tmpNode = tmpNode->m_pNext;
//  }
//  return length;
//};

const int LinkedList::GetLengthOfListUsingRecursion(Node* node){
  if (!node) {
    return 0;
  }
  return 1 + GetLengthOfListUsingRecursion(node->m_pNext);
}

void LinkedList::AddNodeToTail(Node* node){
  if (m_head == nullptr){
    m_head = node;
  } else {
    Node *pNode = m_head;
    while(pNode->m_pNext)
    {
      pNode = pNode->m_pNext;
    }
    pNode->m_pNext = node;
  }
}

void LinkedList::AddNodeToHead(Node *node) {
  if(!m_head){
    m_head = node;
  } else {
    node->m_pNext = m_head;
    m_head = node;
  }
}

/**
 * Add node to a specified position X,
 * which should be within
 * the range of [1, GetLengthOfList()+1],
 * (Denote the m_head postion as `1`)
 *
 * Out of range exception handling.
 *
 * \param iPosition, e.g., we have a linked list of
 *      1, 2, 3, 4; And you want to insert a node to the
 *      third position, i.e., iPosition == 3. After the
 *      insertion, the new list will be: 1, 2, NEW_NODE, 3, 4;
 * \param node, the new node to insert to the linked list.
 */
void LinkedList::AddNodeToPositionX(Int iPosition, Node *node) {
  Int iLengthOfList = GetLengthOfList();
  if (iPosition < 1 || iPosition > iLengthOfList + 1){
    throw OutOfRange(iPosition, iLengthOfList);
  }
  if (iPosition == 1) {
    AddNodeToHead(node);
  } else if (iPosition == iLengthOfList + 1){
    AddNodeToTail(node);
  } else {
    auto * previousNode = m_head;
    auto * currentNode = m_head;
    for (Int i = 1; i< iPosition; i ++){
      previousNode = currentNode;
      currentNode = currentNode->m_pNext;
    }
    previousNode->m_pNext = node;
    node->m_pNext = currentNode;
  }
}

void LinkedList::Display() {
  Node* pNode = m_head;
  while(pNode)
  {
    std::cout << pNode->m_iValue << '\t';
    pNode = pNode->m_pNext;
  }
//  std::cout << "\nEnd of Display.\n";
}

void LinkedList::ReverseDisplayUsingStack() {
  std::stack<Node*> nodes;
  Node* pNode = GetHeadNode();
  while(pNode){
    nodes.push(pNode);
    pNode = pNode->m_pNext;
  }
  while(!nodes.empty()){
    pNode = nodes.top();
    std::cout << pNode->m_iValue << '\t';
    nodes.pop();
  }
}

void LinkedList::ReverseDisplayUsingRecursion(Node* node) {
//  Node* pNode = GetHeadNode();
  if (node) {
    if (node->m_pNext){
      ReverseDisplayUsingRecursion(node->m_pNext);
    }
    std::cout << node->m_iValue << '\t';
  }
}
