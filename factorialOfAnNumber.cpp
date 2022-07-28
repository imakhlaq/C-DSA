#include <bits/stdc++.h>
using namespace std;



     int main(){
    int n;
    int fac=1;
    
    cout<<"enter the number: ";
      cin>>n;

      for(int i=1;i<=n;i++){
        
        fac=fac*i;
      }
            cout<<fac;

     return 0;
     }