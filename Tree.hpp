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
            Tree& insertTree (Tree* addTree);
            Tree& remove(int i);
            int size();
            int sizehelp();
            int right(int i);
            int left(int i);
            int parent(int i);
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