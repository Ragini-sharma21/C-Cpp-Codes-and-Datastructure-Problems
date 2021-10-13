








#include<bits/stdc++.h>
using namespace std;

int main(){
    long long i;
    cout<<"Enter the number: ";
    cin>>i;

    if(i >= 0){
        long long squareRoot = sqrt(i);

        if(squareRoot * squareRoot == i){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}
