#include <iostream>
using namespace std;
namespace ariel
{
    class TreeNode;
    class Tree{
        public:
            Tree(); 
            ~Tree(); 
            int root();
            bool contains(int i);
            Tree& insert(int i);
            Tree* getIndex(int i);
            Tree& remove(int i);//need fix when we have 2 child
            int size();// need fix when we have more then 3 index
            int sizehelp();
            int right(int i);
            int left(int i);
            int parent(int i);//need fix
            void print();
        private:
            TreeNode* _root;
    };

    class TreeNode{
        public:
            TreeNode(int value);
            ~TreeNode();
            int getValue();
            
            Tree* _left;
            Tree* _right;
        private:
            int value;
    };
};