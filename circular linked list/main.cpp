#include <iostream>

using namespace std;

class node{
public:
    int data;
    node* next;


    node(int val){
    data=val;
    next=NULL;

   } };
     node *tail;
    void creation(node*& head,int val){
                //int choice=1
        //while(choice)
            node *newnode = new node(val);
   if(head==NULL){
    head=tail=newnode;
    head->next=head;

   }
else{
    tail->next=newnode;
    newnode->next=head;
    tail=newnode;
}


            }


    void display(node*& head){

        node* temp=head;
        if(head==NULL){
            cout<<"list is empty"<<endl;
        }
        else{

                while(temp!=tail){
                    cout<<temp->data;
                    temp=temp->next;

        }
        cout<<temp->data;


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
