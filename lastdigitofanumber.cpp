#include <bits/stdc++.h>
using namespace std;

            int lastDigitOfnumber(int n){
                n=n%10;
                return n;
            }

     int main(){
        int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<lastDigitOfnumber(n);


     return 0;
     }