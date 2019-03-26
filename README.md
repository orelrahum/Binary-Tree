# Binary-Tree
An implementation of the binary search tree in C++.

**Purpose:** In this repository we create a class named *Tree* that represents a binary search tree where numbers are added to the tree in ascending order. 

**Other files:**   
1. *TreeDemo*: Demo program for the exercise on binary trees  
2. *TreeTest*: Examples of automatic tests program for the exercise on binary trees   
3. *Makefile*: Bash script to execute the program with all of its classes

**Links:**

* [Binary Search Tree](https://www.geeksforgeeks.org/binary-search-tree-data-structure/)
* [Cplusplus-BST](http://www.cplusplus.com/forum/beginner/1276/)

**Methods:**

* The `parent()` method gets a value (i) and returns the value that "sits" before this value in the tree; it's parent.

* The `left()` and `right()` methods get a value i and return the value at their left/right in the tree, respectively.  

* The `insert()` method gets a value i and inserts a new node that holds the value in the tree, according to the order.

* The `contains()` method is a boolean method that gets a value i and returns true if the value is somewhere in the tree and false if it's not in it.

* The `remove()` method gets a value i and removes the node that contains the value passed as argument from its tree;

* The `root()` method returns the value that holds the first node in tree; the root of the tee.

* The `size()` method returns the quantity of nodes in the tree.

* The `print()` method prints the entire tree.

