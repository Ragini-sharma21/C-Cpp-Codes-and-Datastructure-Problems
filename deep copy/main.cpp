#include <iostream>

using namespace std;
class Student{
private:
    int a,b;
    int *p;

public:

    Student(){
    }

    void set_data(int x,int y,int z){
    a=x;
    b=y;
    p=new int;

    *p=z;}

    void get_data(){
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<*p<<endl;
    }

    Student(Student &t){
        a=t.a;
        b=t.b;
        p=new int;
        *p=*(t.p);
            }
    };

int main()
{
    Student s1;
    s1.set_data(2,3,7);
    Student s2(s1);
    s2.get_data();


    return 0;
}
