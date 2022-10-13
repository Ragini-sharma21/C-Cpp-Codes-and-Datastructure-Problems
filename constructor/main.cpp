#include <iostream>

using namespace std;

class Student{

public:
    int id;
    int  name;

    Student(int a,int b){
    id=a;
    name=b;
}

void print(){
cout<<" id is "<<id<<endl;
cout<<"name is "<<name<<endl;
}
    };

int main()
{
    Student S1(4,5);
    S1.print();

    return 0;
}
