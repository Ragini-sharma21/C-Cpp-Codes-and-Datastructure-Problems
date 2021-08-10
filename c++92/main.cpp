#include <iostream>  //all nodes at distance k
// output not correct

using namespace std;
struct Node{
int data;
Node*left;
Node*right;
Node(int val){
data=val;
left=NULL;
right=NULL;
}};
void printsubtreenodes(Node*root,int k){
if(root==NULL || k<0){
        return ;}

        if(k==0){
            cout<<root->data<<" ";
            return;
        }
        printsubtreenodes(root->left,k-1);
        printsubtreenodes(root->right,k-1);


}
int printnodeatk(Node*root,Node*target,int k){
if(root==NULL){
    return -1;   //  d=-1 target node donot exist

}
if(root==target){
    printsubtreenodes(root,k);
    return 0;  //becoz d=0 becoz root and target at position


}
int dl=printnodeatk(root->left,target,k);  //search target in leftsubtree of root
if(dl!=-1){
    if(dl+1==k){
        cout<<root->data<<" ";

    }
    else{
        printsubtreenodes(root->right,  k-dl-2); // print in right subtree
    }
return 1+dl;}

int dr=printnodeatk(root->right,target,k);  //search target in rightsubtree of root
if(dr!=-1){
    if(dr+1==k){
        cout<<root->data<<" ";

    }
    else{
        printsubtreenodes(root->left,dl-k-2); //and print in left subtree
    }
return 1+dr;}
return -1;}

int main(){

    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    printnodeatk(root,root->left,1);


    return 0;
}
