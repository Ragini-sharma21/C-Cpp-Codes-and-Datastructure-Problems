#include <iostream>
#include <queue>

using namespace std;

class node{
public:
    int data;
    node*left;
    node*right;

    node(int val){
    this->data=val;
    this->left=NULL;
    this->right=NULL;
    }};
node*createtree(){
    cout<<"enter value of the root node"<<endl;
queue<node*>q;
int val;
cin>>val;
node*newnode=new node(val);
newnode->data=val;
q.push(newnode);

while(!q.empty()){
node*temp=q.front();
q.pop();

cout<<"enter the left child of "<<temp->data;
int leftdata;
cin>>leftdata;
if(leftdata!=-1){
    temp->left=new node(leftdata);
    q.push(temp->left);
}


    cout<<"enter the right child of "<<temp->data;
int rightdata;
cin>>rightdata;
if(rightdata!=-1){
    temp->right=new node(rightdata);
    q.push(temp->right);
}


}
return newnode;
}


void levelordertraversal(node* root){
    queue<node*>q;
    q.push(root);

    while(!q.empty()){
    node* temp =q.front();
    cout<<temp->data;
    q.pop();

    if(temp->left){
        q.push(temp->left);
    }

    if(temp->right){
        q.push(temp->right);
    }
    }}

int main()
{
    node*root=0;
    root=createtree();
    levelordertraversal(root);
}
