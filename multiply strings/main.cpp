   //fuction
   class Solution {
public:
    string multiply(string num1, string num2) {

        if(num1=="0"||num2=="0"){
            return "0";
        }
        int l1=num1.size();
        int l2=num2.size();
        vector result(l1+l2,0);
        int pf=0;  //powerfactor



        for(int i=l2-1;i>=0;i--){
             int carry=0;

             int k=result.size()-1-pf;
            for(int j=l1-1;j>=0;j--){

                int product=(num2[i]-'0')*(num1[j]-'0')+carry+result[k];
                result[k]=product%10;  //remainder
                carry=product/10;   //quotient
                k--;
            }
            pf++;

            if(carry!=0){

                 result[k]=carry;
            }


        }
        //management of leading zero using general method
        string str;
        bool flag=false;
        for(int i=0;i<result.size();i++){
            if(result[i]==0 && flag==false){
                continue;
            }
               else{
                   flag=true;
               str+=(result[i]+'0');

               }
               }
        return str;

    }
};
