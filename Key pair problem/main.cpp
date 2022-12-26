#include <iostream>
#include <unordered_map>

using namespace std;

class Solution{
public:
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[6], int n, int x) {
	  unordered_map<int,int>map;
	  for(int i=0;i<n;i++){
	      map[arr[i]]++;
	  }

	      for(auto it=map.begin();it!=map.end();it++){
	          int key=it->first;
	          int value=it->second;

	          int pair=x-key;
	          if(key==pair){
	              if(value>1)
	                  return true;
	          }
	                  else{
	                      if(map.find(pair)!=map.end()){
	                          return true;
	                      }
	                  }

	          }

	  return false;
	}
};

int main()
{

    hasArrayTwoCandidates({1, 4, 45, 6, 10, 8},  16);



}
