#include <bits/stdc++.h>
using namespace std;



     int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
          for(int i=2;i<=num-1;i++){

        if(num%i==0){
            cout<<"Not Prime Number";
            break;
        }
        else{
            cout<<"Prime Number";
            break;
        }
        
    }
            
        

     return 0;
     }