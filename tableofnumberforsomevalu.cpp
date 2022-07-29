#include <bits/stdc++.h>
using namespace std;



     int main(){
    int table;
    int noOfTimes;
    
    cout<<"Enter the table of: ";
    cin>>table;
    cout<<"Enter No of times : ";
    cin>>noOfTimes;

    for(int i=1;i<=10;i++){
        if(i < noOfTimes){
            cout<<"hello";
            break;
        }
        else{
        int p=table*i;
        cout<<p<<" ";
        }
    }


     return 0;
     }