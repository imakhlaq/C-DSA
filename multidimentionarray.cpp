#include <bits/stdc++.h>
using namespace std;



     int main(){
    int m,n;

    cout<<"enter size of 2D array: ";
    cin>>m>>n;
    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"enter elements of 2D array: ";
           cin>>arr[i][j];
        }
    }






    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    



     return 0;
     }