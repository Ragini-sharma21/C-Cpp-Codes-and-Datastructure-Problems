#include <iostream>

using namespace std;
class A{
int a;
int b;
public:
    A(){
        a=0;
        b=0;
        }
        A(int x,int y){
        a=x;
        b=y;
        }
        void display(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        }
};
class B:public A{
int c;
public:
    B(int x ,int y,int z):A(x,y){
        c=z;
    }

    void show(){
    display();
    cout<<"the value of c is"<<c<<endl;
    }};
int main()
{
    B obj(2,4,8);
    obj.show();
    A obj1;
    obj1=obj; //object slicing
    obj1.display(); //it will display only a and b value because class A can accept only two arguments

    return 0;
}
