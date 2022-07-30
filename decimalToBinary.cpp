#include<bits/stdc++.h>
using namespace std;



void decimalToBinary(int n){
   
   int ans=0;
   int i=0;
        while(n != 0){
     //takeout one bit
     int bit=n & 1;

     ans=(bit * powf(10,i))+ans;

      n=n>>1;
      i++;
    }
    cout<<"Answer :"<<ans;
}



int main(){


int n;
cout<<"Enter the value of n: ";
cin>>n;


   decimalToBinary(n);

    return 0;
}