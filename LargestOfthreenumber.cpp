#include <iostream>
using namespace std;


int main(){
    int num1;
    int num2;
    int num3;
      cout<<"Enter three number :";
    cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3){
       cout<< num1 <<" is bigger number"; 
    }


    else if(num2>num1 && num2>num3){
       cout<< num2 <<" is bigger number"; 
    }
    else{
        cout<< num3 <<" is bigger number"; 
    }
      return 0;
 


}