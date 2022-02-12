#include <iostream>  //reverse ll

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
    while(temp->next != NULL) temp = temp->next;
    temp->next=newnode;

}}



void reversenode(node* &head){
node* prevptr,*currptr,*nextptr;
prevptr=NULL;
nextptr=currptr=head;
while(nextptr!=NULL){
    nextptr=nextptr->next;
    currptr->next=prevptr;
    prevptr=currptr;
    currptr=nextptr;
}
head=prevptr;

}

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
cout<<endl;
}}

int main(){


node* head=NULL;
Createnode(head,3);
Createnode(head,6);
Createnode(head,2);
Createnode(head,7);
display(head);
reversenode(head);
display(head);

}
