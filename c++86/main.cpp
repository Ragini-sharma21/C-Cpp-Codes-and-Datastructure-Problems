#include <iostream> //valid parenthesis
#include <stack>
using namespace std;
bool validstring(string s){
    int n=s.length();
    bool ans=true;
    stack<char>st;
    for(int i=0;i<n;i++){
    if(s[i]=='{'||s[i]=='['||s[i]=='('){
        st.push(s[i]);
        }
    else if(s[i]==')'){
        if(!st.empty()&&st.top()=='('){
            st.pop();}
            else{
                return false;
                break;
            }
           }
    else if(s[i]=='}'){
        if(!st.empty()&&st.top()=='{'){
            st.pop();}
            else{
                return false;
                break;
            }
           }
     else if(s[i]==']'){
        if(!st.empty()&&st.top()=='['){
            st.pop();}
            else{
                return false;
                break;
            }
           }}
           if(!st.empty()){
            return false;
           }
           return ans;}

int main()
{
string s=("({[]})");
if(validstring(s)){
    cout<<"validstring"<<endl;}
    else{
        cout<<"invalid string"<<endl;
    }


}
