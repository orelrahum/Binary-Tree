#include <iostream>
#include "Tree.hpp"
using namespace ariel;
static int count=0;
Tree::Tree(){
    _root=nullptr;
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
Tree& Tree::insert(int i) {
    if(contains(i)) {throw std::exception();}
    if (_root==NULL){
    _root=new TreeNode(i);
    return *this;
    }
    if(i<_root->getValue()){
        if(_root->_left==NULL) {
            _root->_left=new Tree();
            _root->_left->_root=new TreeNode(i);
            return *this;
            }
        else _root->_left->insert(i);
        }
    else{
            if(_root->_right == NULL) {
                _root->_right=new Tree();
                _root->_right->_root=new TreeNode(i);
                return *this;}
            else _root->_right->insert(i);
            
    }
    return *this;
}

Tree& Tree::remove(int i){
    if(!contains(i)) {throw std::exception();
    }
    delete _root;
    delete _root->_left;
    delete _root->_right;
    // TreeNode* runner=_root->getByValue(i);
    // delete runner->_left;
    // delete runner->_right;
    // delete runner;
    return *this;
}
TreeNode* TreeNode::getByValue(int i){
    if (i==getValue()){return this;}
    else if (i<getValue()) { return _left->_root->getByValue(i);}
    else return _right->_root->getByValue(i);
    }


int Tree::size(){
    
    if (_root==NULL){
        return count;
    }
    count++;
    if (_root->_left!=NULL){_root->_left->size() ;}
    if (_root->_right!=NULL){_root->_right->size();}
    return count;
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
    if(!Tree::contains(i)) {throw std::exception();}
    if(_root->getValue()==i){
        if (_root->_left->_root==nullptr){throw std::exception();}
        return _root->_left->_root->getValue();
    }
    else if(_root->getValue() < i) {return _root->_right->left(i);}
    else return _root->_left->left(i);
}

int Tree::right(int i){
    if(!Tree::contains(i)) {throw std::exception();}
    if(_root->getValue()==i){
        if (_root->_right->_root==nullptr){throw std::exception();}
        return _root->_right->_root->getValue();
    }
    else if(_root->getValue() < i) {return _root->_right->right(i);}
    else return _root->_left->right(i);
}

void Tree::print(){

}