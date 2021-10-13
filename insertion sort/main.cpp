            INSERTION SORT :Insertion sort is a sorting algorithm in which the elements are transferred one at a time to the right position.
             In other words, an insertion sort helps in building the final sorted list, one item at a time, with the movement of higher-ranked elements.

             How does it work?
            Assume first element be sorted and rest all be unsorted ,then pick 1 element from unsorted list and place it in  right position in sorted list.
            repeat for all unsorted elements.


#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;           // taking size of array as input from user
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];             // taking array as input from user
    }

    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
    }
    arr[j+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
