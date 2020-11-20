# Binary Tree

This is an implementation of a Binary Search Tree.
At the moment, this tree only works with integers, though it can be expanded to work with other datatypes, something that I may work on in the future. Should this BST be expanded in the future, it assumes that the data stored has defined the "<", ">", and "<<" operators.

This Binary Search Tree provides the following functionality:
  1.) Insertion - The syntax for this is theTree.insert(value) where theTree is the tree being worked on, and value is the data to be put into the tree. This will insert the value into its proper location in the tree.

  2.) Removal - The syntax for this is theTree.remove(value) where theTree is the tree being worked on, and value is the data to be put into the tree. This will remove the value if it exists in the tree, and return true. If the value is not in the tree, it will return false.

  3.) Search - The syntax for this is theTree.search(value) where theTree is the tree being worked on, and value is the value to be looked for. This function will return true if the value is in the tree, and false if the value is not in the tree.

  4.) Clear - The syntax for this is theTree.clear() where theTree is the tree being worked on. This function will clear the tree, and free all of the memory that it was using.

  5.) Min/Max - The syntax for this is theTree.min() or theTree.max() depending on the desired result, where theTree is the tree being worked on. If the tree is empty, these functions will return 0 by default, otherwise, they will return the min/max value in the tree respectively.
