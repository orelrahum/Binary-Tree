#include <iostream>
#include "Tree.hpp"
using namespace ariel;
//counstractor and destructor for Tree
Tree::Tree(){
    _root=nullptr;
    treeSize=0;
    return;
}
Tree::~Tree(){
    delete _root;
}
//counstractor and destructor for TreeNode
TreeNode::TreeNode(int i){
    value=i;
}
TreeNode::~TreeNode(){
delete _right;
delete _left;
}
//fuctions in TreeNode
int TreeNode::getValue(){
    return value;
}


//fuctions in Tree
int Tree::root(){
    if(_root == NULL) {throw std::exception();}
    return _root->getValue();
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


Tree& Tree::insert(int i) {
    if(contains(i)) {throw std::exception();}
    if (_root==NULL){
    _root=new TreeNode(i);
    treeSize++;
    return *this;
    }
    else if(i<_root->getValue()){
        if(_root->_left==NULL) {
            _root->_left=new Tree();
            _root->_left->_root=new TreeNode(i);
            treeSize++;
            return *this;
            }
        else return _root->_left->insert(i);
        }
    else{
            if(_root->_right == NULL) {
                _root->_right=new Tree();
                _root->_right->_root=new TreeNode(i);
                treeSize++;
                return *this;}
            else return  _root->_right->insert(i);
            
    }
    return *this;
}
Tree* Tree::getIndex(int i){
    if (i==_root->getValue()){return this;}
    else if (i<_root->getValue()) { return _root->_left->getIndex(i);}
    else return _root->_right->getIndex(i);
    }

Tree& Tree::remove(int i){
    if(!contains(i)) {throw std::exception();}
    if (_root->getValue()==i){
        if (_root->_left==NULL && _root->_right==NULL){
            _root=NULL; 
            treeSize--;
            return *this;
            }
        else if (_root->_left==NULL){
            _root=_root->_right->_root;
            treeSize--;
            return *this;}
        else if (_root->_right==NULL){
            _root=_root->_left->_root;
            treeSize--;
            return *this;
            }
    }
    if (_root->getValue()<i){
        if (_root->_right->_root!=NULL){return _root->_right->remove(i);}}
    else if (_root->getValue()>i){
        if (_root->_left->_root!=NULL){return _root->_left->remove(i);}}

    return *this;
}

int Tree::size(){
    return treeSize;
}
int Tree::right(int i){
    if(!Tree::contains(i)) {throw std::exception();}
    if(_root->getValue()==i){
        if (_root->_right->_root==NULL){throw std::exception();}
        else return _root->_right->_root->getValue();
    }
    else if(_root->getValue() < i) {
        if (_root->_right==NULL) {throw std::exception();}
        else {return _root->_right->right(i);}
    }
    else {
        if (_root->_left!=NULL){throw std::exception();}
        else {return _root->_left->right(i);}
        }
return -1;
}
int Tree::left(int i){
    if(!Tree::contains(i)) {throw std::exception();}
    if(_root->getValue()==i){
        if (_root->_left->_root==NULL){throw std::exception();}
        else return _root->_left->_root->getValue();
    }
    else if(_root->getValue() < i) {
        if (_root->_right!=NULL){return _root->_right->left(i);}}
    else {
        if (_root->_left!=NULL)  {return _root->_left->left(i);}}
        return -1;
}

int Tree::parent(int i){
    if(!Tree::contains(i)) {throw std::exception();}
     if (i==_root->getValue()){throw std::exception();}
    if (i<_root->getValue()){
        if (_root->_left->_root!=NULL){
            if (_root->_left->_root->getValue()==i){return _root->getValue();}
            else {return _root->_left->parent(i);} 
        }
    }
    if (_root->getValue()<i){
        if (_root->_right->_root!=NULL){
            if (_root->_right->_root->getValue()==i){return _root->getValue();}
            else {return _root->_right->parent(i);}
        }
    }
    return -1;
}
void Tree::print(){
    if (_root!=NULL){
        if (_root->_left!=NULL){_root->_left->print() ;}
        cout<<_root->getValue()<<",";
        if (_root->_right!=NULL){_root->_right->print();}
    }
}


