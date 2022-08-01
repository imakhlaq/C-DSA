#include <bits/stdc++.h>
using namespace std;



     int main(){
    int n=9;


    // for(int row=1;row<=n;row++){
    //     int num=1;
        
        
    //     for(int j=2;j<=row;j++){
    //          cout<<" ";
    //     }
        
    //     for(int i=0,num=1;i<=n-row;i++,++num){
    //         num=num-i;
    //         cout<<" "<<num++ ;

    //     }
    //     cout<<endl;
    // }


    // for(int row=2;row<=n;row++){

    //     int num=5;
    //     for(int i=1;i<=n-row;i++){
    //         cout<<" ";
    //     }
    //          for(int j=1;j<=row;j++){
                
    //             cout<<" "<<num--;
    //          }

    //      cout<<endl;
    // }




    // for(int row=1;row<=n;row++){

    //     for(int i=1;i<=n-row;i++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<2*row;j++){
    //       if(row==1 or row==n-row){
    //         cout<<" *";
    //       }
    //       else{
    //             cout<<"  ";

    //       }

             
    //     }

    //     cout<<endl;


    // }




//  *                 *
//  *                 *
//  *                 *
//  *                 *
//  *                 *
//  *                 *
//  *                 *
//  *                 *
//  *                 *
//  *                 *  
//     for(int row=1;row<=n;row++){
//         for(int i=1;i<=n;i++){
//             if(i==1 || i==n){            
                
//                  cout<<" *"; 
//         }
//         else{
//              cout<<"  ";
//         }
         
//     }
//     cout<<endl;

//     }


//          *
//          *
//          *
//          *
//          *
//  * * * * * * * * * *
//          *
//          *
//          *
//          *

//   for(int row=1;row<=n;row++){
//         for(int i=1;i<=n;i++){
//           if(i==n/2 or row==n/2+1){            
                
//                  cout<<" *"; 
//         }
//         else{
//              cout<<"  ";
//         }
         
//     }
//     cout<<endl;

//     }




//  *                 *
//    *             *
//      *         *
//        *     *
//          * *        
//          * *
//        *     *
//      *         *
//    *             *
//  *                 *

//   for(int row=1;row<=n;row++){
//         for(int i=1;i<=n;i++){

          
//           if(i+row==n+1 or row==i){            
                
//                  cout<<" *"; 
//         }
//         else{
//              cout<<"  ";
//         }
         
//     }
//     cout<<endl;

//     }

//  * * * * * * * * * *
//  *                 *
//  *                 *
//  *                 *
//  *                 *
//  *                 *
//  *                 *
//  *                 *
//  *                 *
//  * * * * * * * * * *

//   for(int row=1;row<=n;row++){
//         for(int i=1;i<=n;i++){

          
//           if(i==1 or row==1 or i==n or row==n ){            
                
//                  cout<<" *"; 
//         }
//         else{
//              cout<<"  ";
//         }
         
//     }
//     cout<<endl;

//     }



//  *
//  * *
//  *   *
//  *     *
//  *       *
//  * * * * * *

// n=6;

//                for(int row=1;row<=n;row++){
//                     for(int i=1;i<=row;i++){


//                          if(row==n or i==1 or i==row){
//                                    cout<<" *";
//                          }
                        
//                          else{
//                               cout<<"  ";
//                          }
                         
//                     }


//                     cout<<endl;
//                }

//  * * * * * *
//  *       *
//  *     *
//  *   *
//  * *
//  * 

     //   for(int i=1;i<=n;i++){
     //      for(int j=0;j<=n-i;j++){



     //           if(j==0 or i==1 or j==n-i){
     //                     cout<<" *";
     //           }
     //           else{
     //                cout<<"  ";
     //           }
               
     //      }
     //      cout<<endl;
     //   }
     
//              *
//            *   *
//          *       *
//        *           *
//      *               *
//    * * * * * * * * * * *

     // for(int row=1;row<=n;row++){
     //      for( int i=0;i<=n-row;i++){
     //           cout<<"  ";
     //      }
     //      for(int j=1;j<2*row;j++){

     //           if( j==2*row-1 or row==n or j==1){
     //                     cout<<" *";
     //           }

     //           else{
     //                cout<<"  ";
     //           }
               
     //      }


     //      cout<<endl;
     // }
       

//                    *
//                  *   *
//                *       *
//              *           *
//            *               *
//          *                   *
//        *                       *
//    * * * * * * * * * * * * * * * * *

     //   for(int row=1;row<=n;row++){
     //      for(int i=0;i<=n-row;i++){
     //           cout<<"  ";
             
     //      }
     //      for(int j=1;j<2*row;j++){

     //           if( j==2*row-2 or row==n or j==2){
     //                     cout<<" *";
     //           }
     //               else{
     //                cout<<"  ";
     //           }
                    
     //      }
                 

           


     //       cout<<endl;
     //   }

     return 0;
     }