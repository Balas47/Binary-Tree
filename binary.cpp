#include "binary.h"

// Constructor and Destructor
BST::BST(){
  root = NULL;
}

BST::~BST(){
  clearNodes(root);
}

// Overloaded output
std::ostream& operator<<(std::ostream& out, const BST &tree);

// Actual displaying
std::ostream& display(std::ostream& out, const Node* node){
  return out;
}

// Functions for all functionality

void BST::insert(int value){

  // Insert at the root if empty
  if(!root){
    root = new Node;
    root->data = value;
  }

}

bool BST::remove(int value){
  return false;
}

int BST::search(int value){
  return 0;
}

// Actual searching
Node* BST::nodeSearch(int value, Node *node){
  return NULL;
}

void BST::clear(){}

// Actual clearing
void BST::clearNodes(Node *node){

  // If there is a node, clear the appropriate subtrees
  if(node){
    clearNodes(node->left);
    clearNodes(node->right);
    delete node;
  }
}
