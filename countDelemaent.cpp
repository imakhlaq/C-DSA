#include <bits/stdc++.h>
using namespace std;



     int main(){
    
    int arr[]={2,4,5,2,5,6};


         int n=sizeof(arr)/sizeof(arr[0]);
         int count=0;
         bool distint=true;


         for(int i=0;i<n;i++){
                for(int j=i-1;j>=0;j--){
                    if(arr[i]==arr[j]){
                        distint=false;
                        break;  
                        
                    }
                    
                   
                   
                }
                if(distint==true){
                    count++;
                }
                
            }

                cout<<count;

     return 0;
     }