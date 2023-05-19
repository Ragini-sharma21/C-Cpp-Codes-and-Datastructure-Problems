#include <iostream>

using namespace std;

void f(int i,int n){
if(n<i){
    return;

}
cout<<n<<endl;
f(i,n-1);
}

int main()
{
    int n;
    cin>>n;
    f(1,n);
}
