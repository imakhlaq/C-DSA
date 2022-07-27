#include <iostream>
using namespace std;


int main(){
    int num1;
    int num2;
    char ch;
    int sum;
    cout<<"Enter the number and operation then number :";
    cin>>num1>>ch>>num2;

    switch(ch){

        case '+' :{
                 sum=num1+num2;
            cout<<num1<<" + "<<num2<<" = "<<sum;
           break;
        }
        case '-' :{
            sum=num1-num2;
            cout<<num1<<" - "<<num2<<" = "<<sum;
            break;
        }
        case '*' :{
            sum=num1*num2;
            cout<<num1<<" * "<<num2<<" = "<<sum;
            break;
        }

        case '/':{
            sum=num1/num2;
            cout<<num1<<" / "<<num2<<" = "<<sum;
            break;
        }
        default :{
            cout<<"Invaild Input";
        }
    } 



}