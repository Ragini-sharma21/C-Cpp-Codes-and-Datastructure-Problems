#include <iostream>

using namespace std;

int queue[5];
int front =-1;
int rear =-1;

void enqueue(int val){
    if(rear==4){
        cout<<"overflow condition";

    }
    else if(front ==-1 && rear==-1){
        front=rear=0;
        queue[rear]=val;
    }
    else{
        rear++;
        queue[rear]=val;
    }
}

void dequeue(){
if(front==-1 && rear==-1){
    cout<<"underflow condition";
}
else if(front==rear){
    front=rear=-1;
}
else{
    front++;
}}

void peek(){
if (front ==-1 && rear==-1){
    cout <<"nothing to display in the list";
}
else {
    cout<<queue[front];
}}

void display (){
if (front ==-1 && rear==-1){
    cout <<"empty queue";}
    else{
        for(int i=front;i<=rear;i++){
            cout<<queue[i];
        }
    }
}

int main()
{
    enqueue(2);
    enqueue(5);
    enqueue(19);
    display();
    dequeue();
    display();
    peek();
    return 0;
}
