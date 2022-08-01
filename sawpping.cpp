#include <bits/stdc++.h>
using namespace std;





        void swap(int &x, int &y){
                x=x+y;
                y=x-y;
                x=x-y;
                

        }

     int main(){
    int x; int y;
    cout<<"Enter two number: ";
    cin>>x>>y;
    swap(x,y);
    cout<<"Number 1:"<<x<<endl<<"Number 2: "<<y;



     return 0;
     }