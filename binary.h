#ifndef BINARY_H
#define BINARY_H

#include <iostream>

struct Node{
  int data;
  Node *left;
  Node *right;
};

class BST{

 private:
  Node *root;

 public:
  BST();
  ~BST();
  
};

#endif
