#include <bits/stdc++.h>
using namespace std;

    int biggestDevisorOfAnumber(int n){
        
        for(int i=n-1 ; i<n; i--){
            


            if(n%i==0){
                                        // for smallest devisor
                cout<<i<<" ";
                break;
            }
        
               
        }


    }


    int smallestDevisorOfAnumber(int n){
        
        for(int i=2 ; i<=n; i++){
            if(n%i==0){
                                        // for smallest devisor
                cout<<i<<" ";
                break; //remove this for all devisor
            }
        
               
        }


    }

     int main(){
        int n;
        cout<<"enter a number: ";
        cin>>n;

          smallestDevisorOfAnumber(n);
            biggestDevisorOfAnumber(n);

            return 0;
     }