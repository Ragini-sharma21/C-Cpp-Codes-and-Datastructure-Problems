#include <iostream>

using namespace std;

int dequeue[5];
int front=-1;
int rear=-1;

void  enqueuefront(int x){
    if((front==0 & rear==4)||(front==rear+1)){
        cout<<"stack is full";
    }
    else if(front==-1 & rear==-1){
        front=rear=0;
        dequeue[front]=x;
    }
    else if(front==0){
        front=4; //N-1
        dequeue[front]=x;
    }
    else{
        front--;
        dequeue[front]=x;
    }
}

void enqueuerear(int x){
    if((front ==0 & rear==4)||(front=rear+1)){
        cout<<"stack is full";
    }
    else if(front==-1 & rear==-1){
        front=rear=0;
        dequeue[rear]=x;
    }
    else if(rear==4){
        rear=0;
        dequeue[rear]=x;
    }
    else{
        rear++;
        dequeue[rear]=x;
    }
}

void dequeuefront(){
if(front==-1 & rear==-1){
    cout<<"nothing in the list";

}
else if (front ==rear){
    front =rear=-1;
}
else if(front==4){
    front=0;
}
else{
    front++;
}}

void dequeuerear(){
if(front==-1 & rear==-1){
    cout<<"nothing in the list";

}
else if (front ==rear){
    front =rear=-1;
}
else if(rear==0){
    rear=4;
}
else{
    rear--;
}
}
void display(){
int i=front;
while(i!=rear){
    cout<<dequeue[i];
    i=(i+1)%5;
}
cout<<dequeue[i];
}

int main(){
enqueuefront(2);
enqueuefront(5);
enqueuerear(-1);
enqueuerear(0);
enqueuefront(7);
display();
dequeuefront();
dequeuerear();
display();
}
