#include <iostream>
#include <queue>
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
 node*root;
    root=0;
    root=create();
    levelordertraversal(root);

}
