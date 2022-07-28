// Greatest common divisor



// #include <bits/stdc++.h>
// using namespace std;

//         int minof(int num1,int num2){
//                 if(num1<num2){
//                     return num1;
//                 }
//                 else{
//                     return num2;
//                 }


//         }

//      int main(){

//         int num1;
//         int num2;
//         int gcd=1;
//     cout<<"enter two number: ";
//       cin>>num1>>num2;
//       int min= minof(num1,num2);
//       for(int i=min;i<=min;i--){

//              if(num1%i==0 && num2%i==0){
//                 gcd=i;
//                 break;
//             }
                   
//       }
//                  cout<<gcd;

//      return 0;
//      }




// smallest common divisor


#include <bits/stdc++.h>
using namespace std;

        int minof(int num1,int num2){
                if(num1<num2){
                    return num1;
                }
                else{
                    return num2;
                }


        }

     int main(){
    
        int num1;
        int num2;
        int gcd=1;
    cout<<"enter two number: ";
      cin>>num1>>num2;
      int min= minof(num1,num2);
      for(int i=2;i<=min;i++){

            if(num1%i==0 && num2%i==0){
                gcd=i;
                break;
            }
                    
      }
                cout<<gcd;

     return 0;
     }