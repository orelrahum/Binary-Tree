#include <iostream>
#include "Tree.hpp"
using namespace ariel;

Tree::Tree(){
    _root=NULL;
    return;
}
Tree::~Tree(){
    delete _root;
}
TreeNode::TreeNode(int i){
    value=i;
}
TreeNode::~TreeNode(){
delete _right;
delete _left;
}
int TreeNode::getValue(){
    return value;
}
void TreeNode::setValue(int i){
    value=i;
}
void Tree::insert(int i) {
    return;
}
// TreeNode* TreeNode::insert (int i){ 
//     if(i<getValue()){
//         if(_left== NULL) _left->_root = new TreeNode(i);
//         else _left->_root =_left->_root->insert(i);
//         }
//     else{
//             if(_right == NULL) _right->_root = new TreeNode(i);
//             else _right->_root= _right->_root->insert(i);
//         }
//     return this;
//     }
void Tree::remove(int i){
}


int Tree::size(){
    static int count=0;
    if (_root==NULL){
        return count;
    }
    count++;
    return _root->_left->size() && _root->_right->size();
}

bool Tree::contains(int i){
    if (_root==NULL){return false;}
    if (_root->getValue()==i){return true;}
    else if (i<_root->getValue()){
        if (_root->_left==NULL){return false;}
        else return _root->_left->contains(i);
    }
    else{
        if (_root->_right==NULL){return false;}
        else return _root->_right->contains(i);
    }
    return false;
}

int Tree::root(){
    if(_root == NULL) {throw std::exception();}
    return _root->getValue();
}

int Tree::parent(int i){
    return 1;
}
int Tree::left(int i){
    if(!Tree::contains(i)) {return -1;}
    if(_root->getValue()==i){
        if (_root->_left->_root==NULL){return -1;}
        return _root->_left->_root->getValue();
    }
    else if(_root->getValue() < i) {return _root->_right->left(i);}
    else return _root->_left->left(i);
}

int Tree::right(int i){
    if(!Tree::contains(i)) {return -1;}
    if(_root->getValue()==i){
        if (_root->_right->_root==NULL){return -1;}
        return _root->_right->_root->getValue();
    }
    else if(_root->getValue() < i) {return _root->_right->right(i);}
    else return _root->_left->right(i);
}

void Tree::print(){

}