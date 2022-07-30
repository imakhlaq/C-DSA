#include <bits/stdc++.h>
using namespace std;




       int BinaryToDecimal(int n){
        int ans=0;
        int i=0;
        while (n!=0)
        {
            int digit=n%10;
             if(digit==1){
                ans=ans+powf(2,i);
             }

            n=n/10;

             i++;


        }
        
             cout<<ans;

       }


     int main(){
                int n;
            cout<<"Enter the value of n: ";
                cin>>n;
                BinaryToDecimal(n);



     return 0;
     }