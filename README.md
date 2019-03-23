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

* `p`, `left` and `right` are the parent node and left and right children, respectively. `key` is the information that node holds;

* The `find()` method searches for the node that contains the int passed as argument. If found, returns it. If not, returns the node that would be its parent if the searched item existed at that moment;

* The `add()` method uses `find()` to get to the place where the new node should be added. If a node already has the int passed as argument, it ignores it and doesn't add a thing (*so there are no duplicates*). If the new node is smaller than the current being looked at, it goes to the left; if it's greater, it goes to the right;

* The `remove()` method uses `transplant()` (that performs a swap between nodes) to remove the node that contains the int passed as argument from its tree;

* The `min()` and `max()` methods return the node that holds the minimum and maximum values of the tree rooted at the object calling it;

* The `predecessor()` and `successor()` methods return the predecessor (`max()` of its left child) and successor (`min()` of the right child) of the object calling it. If the respective child doesn't exist, returns itself;

* The `size()` method returns the quantity of nodes in the (sub-)tree rooted at the object calling it;

* The `depth()` returns the length of the path from the object calling it to the root of the tree. If called from a Tree object, will return the height of the tree, as it doesn't make sense to calculate the depth of the root and the total depth of the tree is equal to its height;

* And the `height()` returns the length of the path from the object calling it to the farthest descendant/leaf;

* Finally, the `inorderWalk()` method prints all the nodes in ascending order. Now that print() is gone (its existence was kinda redundant), I made it a little more verbose;
