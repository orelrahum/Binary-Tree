#include <iostream>
using namespace std;
namespace ariel{ 
    class TreeNode{
    public:
        TreeNode(int val);       
        ~TreeNode();
        TreeNode getLeft();
        TreeNode getRight();
        int getValue();
    private:
        TreeNode* _left=nullptr;
        TreeNode* _right=nullptr;
        int value;
    }   
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
        TreeNode* TreeRoot;   
        };
}