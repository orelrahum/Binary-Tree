#include <iostream>
using namespace std;
namespace ariel{ 
    class TreeNode{
    public:
        TreeNode(int val);       
        ~TreeNode();
        int getValue();
        int Parent();
        void print();
        TreeNode* _left;
        TreeNode* _right;
    private:
        int value;
    };  
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