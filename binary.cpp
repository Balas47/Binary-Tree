#include "binary.h"

// Constructor and Destructor
BST::BST(){
  root = NULL;
}

BST::~BST(){
  clearNodes(root);
}

// Overloaded output
std::ostream& operator<<(std::ostream& out, const BST &tree){
  tree.display(out, tree.root);
  out << std::endl;
  return out;
}

// Actual displaying
std::ostream& BST::display(std::ostream& out, const Node* node) const{

  // Preorder traversal
  if(node){
    display(out, node->left);
    out << node->data;
    out << ", ";
    display(out, node->right);
  }

  return out;
}

// Functions for all functionality

void BST::insert(int value){

  // Insert at the root if empty
  if(!root){
    root = new Node;
    root->data = value;
  }else{

    Node *prev = NULL;
    Node *check = root;

    // Find the appropriate location for the item
    while(check){
      prev = check;
      if(check->data > value) check = check->left;
      else check = check->right;
    }

    // Make the node and put it in
    Node *latest = new Node;
    latest->data = value;

    if(prev->data > value) prev->left = latest;
    else prev->right = latest;
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
