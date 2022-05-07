/*
File name: doubly_linked_list.h

*/

#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

class Node{
public:
  int value;
  Node* next;
  Node* previous;
};

void printBackward(Node* tail);
void printForward(Node* head);

#endif /* DOUBLY_LINKED_LIST_H  */