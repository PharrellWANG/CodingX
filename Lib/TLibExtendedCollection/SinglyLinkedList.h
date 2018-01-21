//
// Created by Pharrell_WANG on 22/1/2018.
//

#ifndef CODINGX_SINGLYLINKEDLIST_H
#define CODINGX_SINGLYLINKEDLIST_H

struct Node{
  int   m_nValue;
  Node *m_pNext;
};

class SinglyLinkedList {
private:
  Node *head, *tail;
public:
  SinglyLinkedList();
  void CreateNodeAndLinkItAtTail(const int& value);
//  todo: Finish comprehensive guide to singly linked list; display, insert, delete, count list node numbers using recursion.
};


#endif //CODINGX_SINGLYLINKEDLIST_H
