#include <bits/stdc++.h>
using namespace std;



     int main(){
    int arr[]={10,12,34,45,76};
//     cout<<sizeof(arr)/sizeof(arr[0]);



          for(int &x : arr){
               x=x+2;
          }
          for(int x:arr){
               cout<<x<<" ";
          }



     return 0;
     }