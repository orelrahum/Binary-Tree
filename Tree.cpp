#include <iostream>
#include "Tree.hpp"
static int count=0;
using namespace std;
using namespace ariel;
//counstractor and destructor for Tree
ariel::Tree::Tree():_root(NULL) {}
ariel::Tree::~Tree(){
  delete _root;
}
//counstractor and destructor for TreeNode
ariel::TreeNode::TreeNode(int i):value(i),_right(NULL),_left(NULL) {}
ariel::TreeNode::~TreeNode(){
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
    return *this;
    }
    else if(i<_root->getValue()){
        if(_root->_left==NULL) {
            _root->_left=new Tree();
            _root->_left->_root=new TreeNode(i);
            return *this;
            }
        else return _root->_left->insert(i);
        }
    else{
            if(_root->_right == NULL) {
                _root->_right=new Tree();
                _root->_right->_root=new TreeNode(i);
                return *this;}
            else return  _root->_right->insert(i);
            
    }
    return *this;
}

Tree& Tree::insertTree(Tree* addTree) {
    // if(contains(addTree->_root->getValue())) {throw std::exception();}
    if (_root==NULL){
    _root=addTree->_root;
    return *this;
    }
    else if(addTree->_root->getValue()<_root->getValue()){
        if(_root->_left==NULL) {
            _root->_left=addTree;
            return *this;
            }
        else return _root->_left->insertTree(addTree);
        }
    else{
            if(_root->_right == NULL) {
                _root->_right=addTree;
                return *this;}
            else return  _root->_right->insertTree(addTree); 
    }
    return *this;
}


Tree& Tree::remove(int i){
    if(!contains(i)) {throw std::exception();}
    if (_root->getValue()==i){
        if (_root->_left==NULL && _root->_right==NULL){
            _root=NULL; 
            return *this;
            }
        else if (_root->_left==NULL){
            _root=_root->_right->_root;
            return *this;}
        else if (_root->_right==NULL){
            _root=_root->_left->_root;
            return *this;
            }
        else if (_root->_left!=NULL && _root->_right!=NULL){
            Tree* tempLeft= _root->_left;
            _root=_root->_right->_root;
            insertTree(tempLeft);
            return *this;}
    }
    if (_root->getValue()<i){
        if (_root->_right->_root!=NULL){return _root->_right->remove(i);}}
    else if (_root->getValue()>i){
        if (_root->_left->_root!=NULL){return _root->_left->remove(i);}}

    return *this;
}

int Tree::size(){
    if (_root==NULL){return 0;}
    count++;
    if (_root->_left!=NULL){int left=_root->_left->sizehelp() ;}
    if (_root->_right!=NULL){int right=_root->_right->sizehelp();}
    int temp=count;
    count=0;
    return temp;
}

int Tree::sizehelp(){
    if (_root==NULL){return count;}
    count++;
    if (_root->_left!=NULL){_root->_left->sizehelp() ;}
    if (_root->_right!=NULL){_root->_right->sizehelp();}
    return count;
}
int Tree::right(int i){
    if(_root->getValue()==i){
        if (_root->_right->_root==NULL){throw std::exception();}
        else return _root->_right->_root->getValue();
    }
    if(!contains(i)) {throw std::exception();}
    else if(_root->getValue() < i) {
        if (_root->_right->_root==NULL) {throw std::exception();}
        else {return _root->_right->right(i);}
    }
    else if (i<_root->getValue())  {
            if (_root->_left->_root!=NULL){throw std::exception();}
            return _root->_left->right(i);
        }
return -1;
}
 int Tree::left(int i){
    if(_root->getValue()==i){
        if (_root->_left->_root==NULL){throw std::exception();}
        else return _root->_left->_root->getValue();
    }
    if(!Tree::contains(i)) {throw std::exception();}
    else if(_root->getValue() < i) {
        if (_root->_right->_root!=NULL) {throw std::exception();}
        else {return _root->_right->left(i);}
    }
    else {
        if (_root->_left->_root!=NULL){throw std::exception();}
        else {return _root->_left->left(i);}
        }
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
this->printHelp();
cout<<""<<endl;
}

void Tree::printHelp(){
    if (_root!=NULL){
        if (_root->_left!=NULL){_root->_left->printHelp() ;}
        cout<<_root->getValue()<<",";
        if (_root->_right!=NULL){_root->_right->printHelp();}
    }
}


