#ifndef BINARY_H
#define BINARY_H

#include <iostream>

struct Node{
  int data;
  Node *left = NULL;
  Node *right = NULL;
};

class BST{
private:
  Node *root;
  Node* nodeSearch(int value, Node *node);  // Actual searching
  void clearNodes(Node *node);  // Actual clearing
  std::ostream& display(std::ostream& out, const Node* node) const;  // Actual displaying

public:

  // Constructor and Destructor
  BST();
  ~BST();

  // Overloaded output
  friend std::ostream& operator<<(std::ostream& out, const BST &tree);

  // Functions for basic functionality
  void insert(int value);
  bool remove(int value);
  bool search(int value);
  void clear();
  int max();
  int min();

};

#endif
