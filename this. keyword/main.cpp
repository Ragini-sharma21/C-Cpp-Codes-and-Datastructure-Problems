#include <iostream>

using namespace std;

class Student{
    public:
int rollno;
string name;
int marks;

 void putdata(int rollno,string name,int marks){
this->rollno=rollno;
this->name=name;
this->marks=marks;
}
void display()
{cout<<"Roll no is"<<" "<<rollno<<endl;
cout<<"Name is "<<" "<<name<<endl;
cout<<"marks is "<<" "<<marks<<endl;
}
};

int main(){
Student s1;
s1.putdata(69,"yash",100);

s1.display();

}
