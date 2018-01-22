//
// Created by Pharrell_WANG on 22/1/2018.
//

#ifndef CODINGX_SINGLYLINKEDLIST_H
#define CODINGX_SINGLYLINKEDLIST_H

#include "../TLibUtils/TypeDef.h"

struct Node {
  Int   m_iValue;
  Node *m_pNext;
};

class LinkedList {
 private:
  Node *m_head;
 public:
  //Constructor
  LinkedList();//<--- This constructor takes no arguments.It assigns nullptr to both m_head and m_tail
  //create a node the only information needed is the m_iValue
  Node* CreateNode(Int value);
  Node* GetHeadNode();
  Node* GetTailNode();
  const int GetLengthOfList();
  const int GetLengthOfListUsingRecursion(Node* node);
  // rename to `insert` might be better
  void AddNodeToTail(Node* node);
  void AddNodeToHead(Node* node);
  void AddNodeToPositionX(Int position, Node* node);
  // 1, 2, *, 3, 4, 5 //<--- this means insert to 3rd position
  void Display();

//  todo: implement below functions
//  void DeleteFirst();
//  void DeleteLast();

//  void DeleteNodeAtPositionX(Int iPos);
//  void DeleteAllNodesWithValue(Int iValueOfNode);

//  void DestroyList();

};


#endif //CODINGX_SINGLYLINKEDLIST_H
