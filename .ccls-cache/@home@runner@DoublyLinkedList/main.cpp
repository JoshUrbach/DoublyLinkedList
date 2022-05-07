#include <iostream>
#include <cstdlib>

using namespace std;

class Node{
public:
  int value;
  Node* next;
  Node* previous;
};

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