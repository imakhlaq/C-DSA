#include <iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n>0){
        
        if(n%2==0){
            cout<<n<<" number is positive even";
        }
        else{
            cout<<n<<" number is positive odd";
        }

        
    }
    else if(n<0){
          
        
        if(n%2==0){
            cout<<n<<" number is negative even";
        }
        else{
            cout<<n<<" number is negative odd";
        }

    }
    else{

       cout<<" Number is 0"; 
    }
}