#include <iostream>

using namespace std;

class node {
public:
int data;
node* next;

node(int val){
data=val;
next=NULL;
}};
node* top=NULL;


void push(int val){
node* newnode=new node(val);
newnode->next=top;
top=newnode;
}

void display(){
    node* temp=top;

if(top==0){
    cout<<"stack is empty";
}
    else{
        while(temp!=NULL){
            cout<<temp->data;
            temp=temp->next;
        }
    }
}

void pop(){
    node* temp=top;
if(top==0){
    cout<<"no element to pop";

}
else{
        top=top->next;


free(temp);}}


void peek(){

if(top==0){
cout<<"no element found";
}
else{
    cout<<top->data;
}}

int main(){

push(5);
push(2);
push(9);
display();
pop();
display();
peek();}
