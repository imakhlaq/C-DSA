#include<bits/stdc++.h>
using namespace std;

int main(){
 
 int num;

cout<<"enter a number: ";
cin>>num;

for(int i=1; i<=num; i++){

    while(num%i==0){
     cout <<i<<" ";
     break;
    }
}



}