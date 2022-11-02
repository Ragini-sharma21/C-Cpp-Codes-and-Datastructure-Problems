#include <iostream>

using namespace std;

class Default{
 private:
     int a;
     int b;
     int *p;

 public:
    Default(){
    p=new int;
    };

    void setvalue(int x,int y,int z){
    a=x;
    b=y;
    *p=z;
    }

    void getvalue(){
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;
    cout<<"value of p is "<<*p<<endl;
    }

    Default(Default &d){
    a=d.a;
    b=d.b;
    p=new int;
    *p=*(d.p);
    }
};

int main()
{
    Default d1;
    d1.setvalue(2,4,7);
    Default d2=d1;
    d2.getvalue();

    return 0;
}
