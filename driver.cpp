#include <iostream>
#include <cstdlib>
#include <ctime>
#include "binary.h"

int main(){

  std::srand(std::time(nullptr));

  std::cout << "#####################" << std::endl;
  std::cout << "Basic Insertion Tests" << std::endl;

  BST theTree;
  theTree.insert(50);
  theTree.insert(1);
  theTree.insert(2);
  theTree.insert(77);
  theTree.insert(15);
  theTree.insert(3);
  theTree.insert(3);
  std::cout << theTree;
  std::cout << "#####################\n" << std::endl;

  std::cout << "##########################" << std::endl;
  std::cout << "More Robust Insertion Test" << std::endl;

  for(int i=0;i<50;i++){
    int random = std::rand() % 1000;
    theTree.insert(random);
  }
  std::cout << theTree;
  std::cout << "##########################\n" << std::endl;

  std::cout << "##############" << std::endl;
  std::cout << "Removal Tests" << std::endl;

  BST orig;
  orig.insert(5);
  orig.insert(2);
  orig.insert(7);
  orig.insert(3);
  std::cout << "Original: " << orig;
  orig.remove(7);
  std::cout << "After Removing 7: " << orig;
  orig.remove(2);
  std::cout << "After Removing 2: " << orig;
  std::cout << "After Adding 7 and Removing 5: ";
  orig.insert(7);
  orig.remove(5);
  std::cout << orig;
  std::cout << "After Removing Everything: ";
  orig.remove(3);
  orig.remove(7);
  std::cout << orig;
  std::cout << "After Removing Root of First Tree: ";
  theTree.remove(50);
  std::cout << theTree;
  std::cout << "After Removing Non-existent Item: ";
  theTree.remove(0);
  std::cout << theTree;
  std::cout << "##############\n" << std::endl;

  std::cout << "############" << std::endl;
  std::cout << "Search Tests" << std::endl;

  for(int i=0;i<20;i++){
    int look = std::rand() % 100;
    std::cout << "Looking for " << look << ": " << theTree.search(look) << std::endl;
  }
  std::cout << "############\n" << std::endl;

  std::cout << "###################" << std::endl;
  std::cout << "Finding Max and Min" << std::endl;
  std::cout << "Max: " << theTree.max() << std::endl;
  std::cout << "Min: " << theTree.min() << std::endl;
  std::cout << "###################\n" << std::endl;

  std::cout << "#############################" << std::endl;
  std::cout << "Testing clear() Functionality" << std::endl;

  theTree.clear();
  std::cout << "Clearing First Tree: " << theTree;
  std::cout << "#############################\n" << std::endl;

  return 1;
}
