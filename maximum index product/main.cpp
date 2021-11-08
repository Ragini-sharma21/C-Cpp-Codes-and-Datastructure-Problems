// C++ program to find max LR product
#include <bits/stdc++.h>
using namespace std;

stack<int> mystack;

// To find greater element to left
void nextGreaterToLeft(int arr[], int res[], int N) {
    mystack.push(0);
    res[0] = 0;

    // iterate through the array
    for(int i = 1; i < N; i++) {
        while(mystack.size() > 0  &&  arr[mystack.top()] <= arr[i])
            mystack.pop();

        // place the index to the left in the resultant array
        res[i] = (mystack.size() == 0) ? 0 : mystack.top()+1;
        mystack.push(i);
    }
}

//// To find greater element to right
void nextGreaterToRight(int arr[], int res[], int N) {
    mystack = stack<int>();

    int n = N;
    mystack.push(n-1);
    res[n-1] *= 0;

    // iterate through the array in the reverse order
    for(int i=n - 2 ; i >= 0; i--) {
        while(mystack.size() > 0  &&  arr[mystack.top()] <= arr[i])
            mystack.pop();

        //multiply the index to the right with the index to the left
        //in the resultant array
        res[i] = (mystack.size() == 0) ? res[i]*0 : res[i]*(mystack.top()+1);
        mystack.push(i);
    }
}

//function to return the max value in the resultant array
int maxProduct(int arr[], int res[], int N) {
    nextGreaterToLeft(arr,res, N);        //to find left max
    nextGreaterToRight(arr,res, N);    //to find right max

    int Max = res[0];
    for(int i = 1; i < N; i++){
        Max = max(Max, res[i]);
    }
    return Max;
}

int main()
{
    int arr[] = {5, 4, 3, 4, 5};
    int N = sizeof(arr) / sizeof(arr[0]);
    int res[N];

    int maxprod = maxProduct(arr, res, N);
    cout << maxprod << endl;

    return 0;
}
