#include <iostream>

using namespace std;

int stack[5];
int top=-1;

void push(int val){

if(top==4){
    cout<<"Stack is full"<<endl;

}
else{
    top++;
    stack[top]=val;
}
}
void pop(){
if(top==-1){
    cout<<"no element to pop"<<endl;
}
else{
    top--;
}
}

void peek(){
if(top==-1){
    cout<<"stack is empty"<<endl;
}
else{
    cout<<stack[top]<<endl;
}
}

void display(){

for(int i=top;i>=0;i--){
    cout<<stack[i]<<endl;
}
}

int main()
{
    push(3);
    push(4);
    push(7);
    display();
    pop();
    display();
    return 0;
}
