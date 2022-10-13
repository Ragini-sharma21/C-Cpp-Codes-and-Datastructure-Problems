#include <iostream>

using namespace std;

class Student{
public:
    int id;
    string name;

    void putdetails(int s_id , string s_name){
    id=s_id;
    name=s_name;
    }

    void getdetails(){
    cout<<"id is "<<id<<endl;
    cout<<"name is "<<name<<endl;
    }
};

int main()
{
    Student S1;
    int s_id;
    string s_name;

    cin>>s_id;
    cin>>s_name;
    S1.putdetails(s_id,s_name);
    S1.getdetails();
    return 0;
}
