#include <iostream>// calculate n raise to power p using recursion

using namespace std;
int power(int n,int p){
    if(p==0){    //base condition
        return 1;
    }
int previouspower=power(n,p-1);
return n*previouspower;}

int main()
{
    int n,p;
    cin>>n>>p;
    cout<<power(n,p);

    return 0;
}
