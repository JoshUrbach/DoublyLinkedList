#include <iostream>
#include <cstdlib>

#include "doubly_linked_list.h"

using namespace std;

int main() {

  Node* head;
  Node* tail;

  //add first node
  Node* node = new Node;
  node->value = 4;
  node->next = nullptr;
  node->previous = nullptr;
  head = node;
  tail = node;

  //add second node
  node = new Node();
  node->value = 5;
  node->next = nullptr;
  node->previous = tail;
  tail->next = node;
  tail = node;

  //add third node
  node = new Node();
  node->value = 6;
  node->next = nullptr;
  node->previous = tail;
  tail->next = node;
  tail = node;

  //add fourth node
  node = new Node();
  node->value = 7;
  node->next = nullptr;
  node->previous = tail;
  tail->next = node;
  tail = node;

  printForward(head);
  printBackward(tail);
  
  cin.get();
}