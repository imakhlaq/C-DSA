#include <bits/stdc++.h>
using namespace std;



     int main(){
    int arr[]={12,31,4,6};
    int sum=0;
    double avg=0;
    // int sum=arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);
    //     for(int i=1;i<n; i++){
    //         sum=sum+arr[i];
            

    //     }
    //AVERGE 
    // for(int x: arr){
    //     sum+=x;
    //     avg=static_cast<double>(sum)/n;
        
    // }
    //     cout<<sum<<endl;
    //     cout<<avg;


    //maximun element in an array

    int max=arr[0];
    for(int i=1;i<n;i++){


        if(arr[i]>max){
            max=arr[i];

            

        }
        
    }
        cout<<max;


     return 0;
     }