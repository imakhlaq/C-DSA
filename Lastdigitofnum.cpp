#include <iostream>
using namespace std;

int main(){

    int a;
    cout<<"enter a number: "<<endl;
    cin>>a;
    a= static_cast<unsigned int> (a)%10;
    cout<<a;
    return 0;

}