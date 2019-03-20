#include <iostream>
#include "Tree.hpp"
using namespace ariel;

Tree::Tree(){
    TreeRoot=NULL;
    return;
}
Tree::~Tree(){
    delete TreeRoot;
}
int TreeNode::getValue(){
    return value};

bool Ariel::Tree::contains(int i){
    if(_root == NULL) { 
        return false;}
    return (Tree::TreeRoot->_left->contains(i) && Tree::TreeRoot->_right->contains(i)
    return true;
}
int Tree::root(){
    if (root==NULL){
        throw std::exception();
    }
    return Tree::TreeRoot->getValue();
}
int ariel::Tree::left(int i)
{
    if (!Tree::contains(i)){
           throw std::exception();
    }
    if (i==Tree::TreeRoot->getValue) return Tree::TreeRoot->_left->TreeRoot->getValue;
    else if (i<Tree::TreeRoot->getValue) return Tree::TreeRoot->_left->left(i);
    else return Tree::TreeRoot->_right->left(i);
}
int ariel::Tree::right(int i)
{
    if (Tree::contains(i)){
           throw std::exception();
    }
    if (i==Tree::TreeRoot->getValue) return Tree::TreeRoot->_right->TreeRoot->getValue;
    else if (i<Tree::TreeRoot->getValue) return Tree::TreeRoot->_left->left(i);
    else return Tree::TreeRoot->_right->right(i);
}