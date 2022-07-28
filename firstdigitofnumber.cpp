#include <bits/stdc++.h>
using namespace std;

        int firstDigitOfnumber(int n){


                while(n>10){
                    n=n/10;
                }

                return n;



        }

     int main(){
        int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<firstDigitOfnumber(n);



     return 0;
     }