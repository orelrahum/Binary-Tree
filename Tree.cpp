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
bool ariel::Tree::contains(int i){
    if(Tree::TreeRoot == NULL) { 
        return false;}
    Tree::TreeRoot->_left->contains(i) && Tree::TreeRoot->_right->contains(i);
    return true;
}
int Tree::root(){
    if (Tree::TreeRoot==NULL){
        throw std::exception();
    }
    return Tree::TreeRoot->value;
}
int ariel::Tree::left(int i){
    if (!Tree::contains(i)){
           throw std::exception();
    }
    if (i==Tree::TreeRoot->value) return Tree::TreeRoot->_left->TreeRoot->value;
    else if (i<Tree::TreeRoot->value) return Tree::TreeRoot->_left->left(i);
    else return Tree::TreeRoot->_right->left(i);
}
int ariel::Tree::right(int i){
    if (!Tree::contains(i)){
           throw std::exception();
    }
    if (i==Tree::TreeRoot->value) return Tree::TreeRoot->_right->TreeRoot->value;
    else if (i<Tree::TreeRoot->value) return Tree::TreeRoot->_left->left(i);
    else return Tree::TreeRoot->_right->right(i);
}
int Tree::parent (int i){
    if (!Tree::contains(i)){
           throw std::exception();
    }
    if (Tree::TreeRoot->value<i){
        if (Tree::TreeRoot->value==i) return Tree::TreeRoot->value;
        else return Tree::TreeRoot->_right->parent(i);
    }
    else {
        if (Tree::TreeRoot->value==i) return Tree::TreeRoot->value;
        else return Tree::TreeRoot->_left->parent(i);
    }
}
int Tree::size (){
    static int count=0;
    if (TreeRoot!=NULL){
    return count;}
    count ++;
    return Tree::TreeRoot->_left && TreeRoot->_right;
}
int Tree::print(){
  return 1;  
}
int Tree::insert (int i){
    return 1;
}
int Tree::remove (int i){
    return 1;
}
ariel::TreeNode::TreeNode(int i){
    TreeNode::value=i;
}
TreeNode::~TreeNode(){
    TreeNode::_left->~Tree();
    TreeNode::_right->~Tree();
}