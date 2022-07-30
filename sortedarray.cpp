#include <bits/stdc++.h>
using namespace std;




              int sorted0rnot(int arr[],int n){

                    for(int i=1;i<n;i++){

                        if(arr[i]<arr[i-1]){
                            return false;
                        }
                    }
                        return true;


              }


     int main(){
    int arr[]={2,9,9,45,73};
            

           int n=sizeof(arr)/sizeof(arr[0]);



            cout<<sorted0rnot(arr, n);

            return 0;
        }
        
        
    