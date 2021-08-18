#include <iostream>
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
 int maxPathSumUtil(Node*root, int &ans){
 if(root==NULL){
    return 0;}
    int left = MaxPathSumUtil(root->left,ans);
    int right = MaxPathSumUtil(root->right,ans);
     int nodeMax = max(max(root->data,root->data + left + right),
                    max(root->data + left,root->data + right));
    ans = max(ans,nodeMax);
    int singlepathsum=max(max(left + root->data,right + root->data),root->data);  //path in which ancestors can be included
    return singlepathsum;
 }
int maxPathsum(Node*root){
int ans=INT_MIN;
maxPathSumutil(root,ans);
return ans;
}
int main(){
Node*root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);
root->left->left=new Node(4);
root->right->right=new Node(5);
cout<<maximumpathsum(root);
return 0;
}
