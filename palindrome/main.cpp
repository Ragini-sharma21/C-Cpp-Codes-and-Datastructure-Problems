class Solution {
public:

    bool checkdelete(string s, int l,int h){
        while(l<h){
            if(s[l]==s[h]){
                l++;
                h--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int low=0;
        int high=s.length()-1;
    while(low<high){
        if(s[low]==s[high]){
            low++;
            high--;
        }
        else{
            return checkdelete(s,low+1,high)||checkdelete(s,low,high-1);
        }
    }
        return true;

    }
};
