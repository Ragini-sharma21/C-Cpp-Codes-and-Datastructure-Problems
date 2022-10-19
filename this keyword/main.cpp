#include <iostream>

using namespace std;

class Student{
    int rollno;
    string name;
    int marks;


    Student(int rollno,string name,int marks){
                  this.rollno=rollno;
                  this.name=name;
                  this.marks=marks;
                  }

                  void getmarks(){
                  cout<<"The roll no is"<<" "<<rollno<<endl;
                  cout<<"the name is "<<" "<<name<<endl;
                  cout<<"the marks is "<<" "<<marks<<endl;
                  }
                  };

int main()
{
    Student obj=new Student(69,yash,100);
    obj.getmarks;



    return 0;
}
