//
// Created by Pharrell_WANG on 22/1/2018.
//

#include <iostream>
#include "../../../Lib/TLibExtendedCollection/SinglyLinkedList.h"
#include "../../../Lib/TLibExceptions/OutOfRange.h"
using namespace std;

int main()
{
  LinkedList obj;
  Node* node1 = obj.CreateNode(25);
  Node* node2 = obj.CreateNode(35);
//  Node* node3 = obj.CreateNode(45);
//  Node* node4 = obj.CreateNode(55);
  obj.AddNodeToTail(node1);
//  obj.AddNodeToTail(node2);
//  obj.AddNodeToTail(node3);
//  obj.AddNodeToTail(node4);
//  cout<<"\n--------------------------------------------------\n";
  cout<<"---------------Displaying All nodes---------------";
  cout<<"\n--------------------------------------------------\n";
  obj.Display();
//  cout<<"\n--------------------------------------------------\n";
//  cout<<"-----------------Inserting At End-----------------";
//  cout<<"\n--------------------------------------------------\n";
//  Node* node5 = obj.CreateNode(655);
//  obj.AddNodeToTail(node5);
//  obj.Display();
//  cout<<"\n--------------------------------------------------\n";
//  cout<<"-----------------Inserting At Start---------------";
//  cout<<"\n--------------------------------------------------\n";
//  Node* node6 = obj.CreateNode(1);
//  obj.AddNodeToHead(node6);
//  obj.Display();
//
  cout<<"\n--------------------------------------------------\n";
  cout<<"-----------------Get length of list by counting---";
  cout<<"\n--------------------------------------------------\n";
  int length = obj.GetLengthOfList();
  cout << length << '\n';

  cout<<"\n--------------------------------------------------\n";
  cout<<"-----------------Get length of list by recursion--";
  cout<<"\n--------------------------------------------------\n";
  auto* tmpNode = obj.GetHeadNode();
  int lengthOfList = obj.GetLengthOfListUsingRecursion(tmpNode);
  cout << lengthOfList << '\n';

  cout<<"\n--------------------------------------------------\n";
  cout<<"-----------------Add to position x-----------------";
  cout<<"\n--------------------------------------------------\n";
  try{
    obj.AddNodeToPositionX(2, node2);
  }catch (OutOfRange & e){
    e.Msg();
  }

//  cout<<"\n--------------------------------------------------\n";
  cout<<"---------------Displaying All nodes---------------";
  cout<<"\n--------------------------------------------------\n";
  obj.Display();

  return 0;
}