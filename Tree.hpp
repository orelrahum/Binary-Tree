#include <iostream>
using namespace std;
namespace ariel
{
class TreeNode;
class Tree;

class Tree{
public:
    Tree(); 
    ~Tree(); 
    Tree& insert(int i);
    Tree& remove(int i);
    int size();
    bool contains(int i);
    int root();
    int parent(int i);
    int left(int i);
    int right(int i);
    void print();
    TreeNode* _root;
private:


};

class TreeNode{
public:
    int i;
    TreeNode(int value);
    ~TreeNode();
    int getValue();
    void setValue(int i);
    TreeNode* getByValue(int i);
    Tree* _left;
    Tree* _right;
private:
    int value;
};
};