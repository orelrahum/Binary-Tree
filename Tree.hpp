#include <iostream>
using namespace std;
namespace ariel{
     class Tree;
    class TreeNode{
    public:
        TreeNode(int i);       
        ~TreeNode();
        int value;
        Tree* _left;
        Tree* _right;
    };  
    class Tree{
    public:
        Tree();
        ~Tree();
        int size();
        bool contains(int i);
        int root();
        int parent(int i);
        int left(int i);
        int right(int i);
        int print();
        int insert(int i);
        int remove(int i);

    private: 
        TreeNode* TreeRoot;   
        };
}