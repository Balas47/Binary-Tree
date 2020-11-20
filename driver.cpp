#include <iostream>
#include <cstdlib>
#include <ctime>
#include "binary.h"

int main(){

  std::srand(std::time(nullptr));

  std::cout << "#####################" << std::endl;
  std::cout << "Basic Insertion Tests" << std::endl;

  BST theTree;
  theTree.insert(1);
  theTree.insert(2);
  theTree.insert(77);
  theTree.insert(15);
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

  return 1;
}
