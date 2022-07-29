#include <bits/stdc++.h>
using namespace std;

int max(int num1, int num2){
    if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }
}

     int main(){

        int num1=0;
        int num2=0;
        cout<<"enter two number : ";
        cin>>num1>>num2;
        int end=num1*num2;
        

    int start= max(num1,num2);
     
    int ans=start;


        for(int i = start; i <= end ;  i++){
            
            if(i%num2==0 && i%num2==0){
               ans=i;
               cout<<ans;
               break; 
        }
        }
        
                
     return 0;
     }