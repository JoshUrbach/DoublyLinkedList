#include <iostream>
#include <cstdlib>

#include "doubly_linked_list.h"

using namespace std;

void printForward(Node* head){
  Node* traverser = head;
  while(traverser != nullptr){
    cout << traverser->value << endl; 
    traverser = traverser->next;
  }
}

void printBackward(Node* tail){
  Node* traverser = tail;
  while(traverser != nullptr){
    cout << traverser->value << endl; 
    traverser = traverser->previous;
  }
}