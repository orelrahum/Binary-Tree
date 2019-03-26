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
    void insert(int i);
    void remove(int i);
    int size();
    bool contains(int i);
    int root();
    int parent(int i);
    int left(int i);
    int right(int i);
    void print();
private:
TreeNode* _root;

};

class TreeNode{
public:
    TreeNode(int value);
    ~TreeNode();
    int getValue();
    void setValue(int i);
    Tree* _left;
    Tree* _right;
private:
    int value;
};
};