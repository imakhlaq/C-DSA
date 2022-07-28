#include<bits/stdc++.h>
using namespace std;
    




    int maxOf(int a , int b){
        if(a>b){
            return a;
        }
        else {
            return b;
        }
    }


    int maxOf (int a , int b, int c){

        if(a>b && a>c){

             return a;
        }


        else if(b>a && b>c){
            return b;
        }
        else{
            return c;
        }

    }


    int main(){
        int a =10, b=20 , c=30;
        cout<<maxOf(a ,b);
           cout<<"\n";
           cout<<maxOf(a ,b, c); 



        return 0;
    }