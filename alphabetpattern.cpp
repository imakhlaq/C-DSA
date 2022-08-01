#include <bits/stdc++.h>
using namespace std;



     int main(){

  
        int n=6;


//  A B C D E F
//  A B C D E
//  A B C D
//  A B C
//  A B
//  A
//  A
//  A B
//  A B C
//  A B C D
//  A B C D E
//  A B C D E F

    // for(int row=1;row<=n;row++){
    //     char a='A';
    //     for(int i=0;i<=n-row;i++){
    //         cout<<" "<<a++;

    //     }
    //     cout<<endl;
    // }
    //  for(int row=1;row<=n;row++){
    //     char a='A';
    //     for(int i=1;i<=row;i++){
    //         cout<<" "<<a++;

    //     }
    //     cout<<endl;
    // }




 char a='A';

        for(int row=1;row<=n;row++, ++a){
           
            
            for(int i=0;i<=n-row;i++ ){
             
                cout<<" ";
            }
            for(int i=1;i<=row;i++){
                
                if(i==1 or i==row ){
                        cout<<" "<<a;
                }
                else{
                    cout<<"  ";
                }
                
            }




            cout<<endl;
        }

char b='E';

        for(int row=1;row<n;row++, b--){
            for(int i=0;i<=row;i++){
                cout<<" ";
            }
              

              for(int j=0;j<n-row;j++){
                if( j==0 or j==n-row-1){
                    cout<<" "<<b;

                }
                else{
                    cout<<"  ";
                }
                
              }



            cout<<endl;

        }

     return 0;
     }