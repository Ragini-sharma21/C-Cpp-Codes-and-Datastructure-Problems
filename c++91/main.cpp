<<<<<<< HEAD
#include <iostream> //flatten binary tree into linked list
=======
#include <iostream> //flatten a binary tree to linked list
>>>>>>> 201e51a6e1d3270204fae0b112f3fb6923b06a30

using namespace std;
struct Node{
int data;
 Node*left;
 Node*right;
Node (int val){
data=val;
left=NULL;
right=NULL;
}
};
void flatten(Node*root){
if(root==NULL ||(root->left==NULL && root->right==NULL)){
    return;
}
if(root->left!=NULL){


flatten(root->left);
Node* temp=root->right;
root->right=root->left;
root->left=NULL;
Node*t=root->right;
while(t->right!=NULL){
        t=t->right;
    }
t->right=temp;}
flatten(root->left);
}
void inorderprint(Node*root){
if(root==NULL){
    return;}
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}
int main()
{
    Node*root=new Node(4);
    root->left=new Node(9);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);
    flatten(root);
    inorderprint(root);
    cout<<" ";
    return 0;
}
