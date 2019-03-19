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
    return (Tree::left->contains(i) && Tree::right->contains(i))
    return true;
}
int Tree::root(){
    if (root==NULL){
        printf("no");
    }
    return TreeRoot->getValue();
}
int ariel::Tree::left(int i)
{
    if (Tree::contains(i)){
           throw std::exception();
    }
    return ariel::Tree::left(i);
}
int ariel::Tree::right(int i)
{
    if (Tree::contains(i)){
           throw std::exception();
    }
    return ariel::Tree::right(i);
}