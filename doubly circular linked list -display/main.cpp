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
   } };

    void creation(node* &head,int val){
        node* tail=head;
        int choice;

            node* newnode=new node(val);
            //cout<<"enter node value"<<endl;
            //cin>>newnode->data;
            newnode->next=NULL;
            newnode->prev=NULL;

            if(head==NULL){
                head=tail=newnode;
                head->next=head;
                head->prev=head;
            }
            else{
                tail->next=newnode;
                newnode->prev=tail;
                newnode->next=head;
                head->prev=newnode;
                tail=newnode;
            }}


    void display(node* &head){

        node* temp=head->next;
        if(head==NULL){
            cout<<"list is empty"<<endl;
        }
        else{
                cout<<head->data;
        while(temp!=head){
            cout<<temp->data;
            temp=temp->next;

        }


    }}

int main()
{
    node*head=NULL;
    creation(head,2);
     creation(head,4);
      creation(head,6);
       creation(head,7);
    display(head);
    return 0;
}
