#include <iostream>

using namespace std;
class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {

        int l=-1;
        int n=seats.size();
        int maxdistance=0;

        for(int i=0;i<n;i++){
            if(seats[i]==1){    // first case...seats empty from start
                if(l==-1){
                    maxdistance=i;
                }
                else{      // second case ...between two siiting persons
                    maxdistance=max(maxdistance,(i-l)/2);
                }
                    l=i;

            }
        }
        if(seats[n-1]==0){    // third case ...last digit is 0 ie empty
            maxdistance=max(maxdistance,n-1-l);
        }
            return maxdistance;


    }
};
