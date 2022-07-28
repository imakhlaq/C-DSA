#include <bits/stdc++.h>
using namespace std;




        void isPrime(int n){
            
            
            for(int i=2;i<=n;i++){
                while(n%i==0){
                    cout<<i<<" ";
                    n=n/i;
                    

                }
            }
        }
     int main(){

    int n; 
    cout<<"enter a number bigger tan 1 : ";
    cin>>n;
    isPrime(n);


     return 0;
     }