#include <iostream>

using namespace std;

class node{
public:
int data;
node*next;

node(int val){
data=val;
next=NULL;
}};
node*front,*rear=0;

void enqueue(int val){
node*newnode =new node(val);
newnode->next=NULL;

if(front==0 && rear==0){
    front =rear=newnode;
}
else{
    rear->next=newnode;
    rear=newnode;
}
}

void dequeue(){
node* temp=front;
if(front==0;rear==0){
    cout<<"queue is empty";

}
else{
    front=front->next;  // front=temp->next;
    free(temp);
}
}

void display(){
    node*temp=front;

if(front==0 && rear==0){
    cout<<"list is empty";

}
else{
        while(temp!=NULL){
            cout<<temp->data;
            temp=temp->next;
        }

}}
int main(){

enqueue(2);
enqueue(4);
enqueue(8);
display();
dequeue();
display();
return 0;
}

