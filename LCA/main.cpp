#include <iostream>
#include <vector>
using namespace std;
struct Node {
int data;
Node*left;
Node*right;
Node(int val){
data=val;
left=NULL;
right=NULL;
}};
bool findpath(Node*root,int key,vector<int> &path){  //TO find is there any path exist between root and node
if(root==NULL){
    return false;
}
    path.push_back(root->data);
    if(root->data==key){
        return true;
    }

    if (findpath(root->right,key,path) ||findpath(root->left,key,path)){
        return true;
    }
   path.pop_back();
   return false;

}
int lca(Node*root,int n1,int n2){
vector<int> path1,path2;
if(!findpath(root,n1,path1) || !findpath(root,n2,path2)){
   return -1;}
   int pc;  // pc means pathchange
   for(pc=0;pc<path1.size()&&pc<path2.size();pc++){
    if(path1[pc]!=path2[pc]){
        break;

    }
   }
    return path1[pc-1];
   }


int main()
{
  Node*root=new Node(1);
  root->left=new Node(2);
  root->right=new Node(3);
  root->left->left=new Node(4);
  root->right->left=new Node(5);
  root->right->right=new Node(6);
  root->right->left->left=new Node(7);
  int n1=7;
  int n2=6;
  int LCA=lca(root,7,6);
  if(LCA==-1){
    cout<<"lca not valid"<<endl;
  }
  else{
        cout<<LCA<<endl;
  }

    return 0;
}
