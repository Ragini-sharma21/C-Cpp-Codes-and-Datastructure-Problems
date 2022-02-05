#include <iostream>

using namespace std;

class node{
public:
int data;
node* next;

node(int val){
data=val;
next=NULL;
}};

void Createnode(node*& head,int val){
node* newnode=new node(val);
newnode->next=NULL;
node* temp=head;
if(head==NULL){
    head=temp=newnode;
}

else{
    temp->next=newnode;
    temp=newnode;

}}

void display(node*& head){
    node* temp=head;
    if(head==NULL){
        cout<<"list is empty";
    }
    else{
while(temp!=NULL){
    cout<<temp->data<<endl;
    temp=temp->next;
}

}}

int main(){

node* head=NULL;
Createnode(head,3);
Createnode(head,6);
Createnode(head,2);
Createnode(head,7);
display(head);

}
