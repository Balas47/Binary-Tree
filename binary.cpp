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

  Node *prev = NULL;
  Node *item = root;

  while(item && (item->data > value || item->data < value)){
    prev = item;
    if(item->data > value) item = item->left;
    else if (item->data < value) item = item->right;
    else break;
  }

  // If the item was found, remove it
  if(item){



    // The node had no children
    if(!item->left && !item->right){
      if(prev->data < item->data) prev->right = NULL;
      else prev->left = NULL;
      delete item;
      item = NULL;

    // The node has one child
    }else if(!item->left && item->right){

      if(prev->data < item->data) prev->right = item->right;
      else prev->left = item->right;
      delete item;
      item = NULL;

    }else if(!item->right && item->left){

      if(prev->data < item->data) prev->right = item->left;
      else prev->left = item->left;
      delete item;
      item = NULL;

    }else{
      // Minimum of the right subtree
      Node *minimum = item->right;
      Node *before = item;

      while(minimum->left){
        if(before == item) before = item->right;
        else before = before->left;
        minimum = minimum->left;
      }

      // Set the node to be the smallest in the subtree
      item->data = minimum->data;
      if(before != item) before->left = NULL;
      else before->right = NULL;
      delete minimum;
    }

    return true;
  }

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
