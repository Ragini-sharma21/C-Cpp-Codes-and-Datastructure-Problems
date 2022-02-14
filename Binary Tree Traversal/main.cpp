#include <iostream>

using namespace std;

class node{
public:
    int data;
    struct node*left;
    struct node*right;

    node(int val){
    data=val;
    left=NULL;
    right=NULL;
    }};

    node*create(){
        int val;
     node*newnode=new node(val);
    cout<<"Enter the data";
    cin>>val;
    if(val==-1){    // when we dont want to add new child node
        return 0;
    }
    newnode->data=val;
    cout<<"enter the left child of"<<val;
    newnode->left=create();
    cout<<"enter the right child of"<<val;
    newnode->right=create();
    return newnode;
    }
 void inorder(node*root){
 if(root==0){
    return ;

 }
 inorder(root->left);
 cout<<root->data;
 inorder(root->right);
 }

 void postorder(node*root){
     if(root==0){
        return;
     }
     postorder(root->left);
     postorder(root->right);
     cout<<root->data;

}

void preorder(node*root){
if(root==0){
    return ;
}
cout<<root->data;
preorder(root->left);
preorder(root->right);
}

int  main()
{
     node*root;
    root=0;
    root=create();
    cout<<endl<<"inorder traversal is "<<endl;
    inorder(root);
    cout<<endl<<"postorder traversal is"<<endl;
    postorder(root);
    cout<<endl<<"preorder traversal is "<<endl;
    preorder(root);
}

