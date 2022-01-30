#include <iostream>

using namespace std;

class node{
public:
int data;
node* next;
node* prev;

node(int val){
data=val;
next=NULL;
prev=NULL;
}};
void Createnode(node*& head,int val){
node* newnode=new node(val);
//newnode->next=NULL;
node* temp=head;
if(head==NULL){
    head=temp=newnode;
}

else{
    while(temp->next != NULL){
        temp = temp->next;}
    temp->next=newnode;
    newnode->prev=temp;


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
