#include <bits/stdc++.h>
using namespace std;



     int main(){
        int n;
        int count=1;
    cout<<"enter the number: ";
      cin>>n;
      while(n>10){
     n=n/10;
     count++;
     
      }
      cout<<count;
     return 0;
     }