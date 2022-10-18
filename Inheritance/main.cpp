#include <iostream>

using namespace std;
class Grandparent{
public:
    string name;

    void get_name(string s){
    name=s;
    }

    void print_name(){
    cout<<"name of student is "<<name<<endl;
    }
};

class Parent : public Grandparent{
public:
    int age;

    void get_age(int a){
    age=a;
    }
    void print_age(){
    cout<<"Age of student is"<<age<<endl;
    }
                 };

class child : public Parent{
public:
    string gender;

    void get_gender(string g){
    gender=g;
    }

    void print_gender(){
    cout<<"the gender is "<<gender<<endl;
    }
};

int main()
{
    child c;
    c.get_name("ragini");
    c.print_name();
    c.get_age(10);
    c.print_age();

    return 0;
}
