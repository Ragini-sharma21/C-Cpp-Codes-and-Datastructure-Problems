#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string name="ragini";
    stack<char>s;
    for(int i=0;i<name.size();i++){
            char ch=name[i];
        s.push(ch);

    }
    string name2="";

    while(!s.empty()){

        char ch=s.top();
        name2.push_back(ch);
        s.pop();

    }
    cout<<"reversed string   " <<name2<<endl;
    return 0;
}
