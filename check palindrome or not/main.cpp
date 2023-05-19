#include <iostream>

using namespace std;

bool f(int i,char arr[],int n){
if(i>=n/2){
    return true ;
}
if(arr[i]!=arr[n-i-1]){
    return false;
}
 f(i+1,arr,n);

}

int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    char arr[n];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   if( f(0,arr,n)){      //cout<<f();
    cout<<"yes";
   }
   else{
    cout<<"no";
   }


    return 0;
}
