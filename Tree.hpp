#include <iostream>
using namespace std;
namespace ariel{ 
    class TreeNode{
    public:
        TreeNode(int value);       
        ~TreeNode(); 
        int value;






    private:
        
        TreeNode* _left;
        TreeNode* _right;
        
        
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
        TreeNode* root;   
        };


}