#include<bits/stdc++.h>
using namespace std;
 void printDetail(int id, string name="NA" , string address="NA"){
    cout<<id<<"    ";
    cout<<name<<"   ";
    cout<<address<<"   ";
 }



int main(){

    printDetail(101, "Sandeep" ,"Allahabad");

    cout<<"\n";
    printDetail(102, "kartik" );

    cout<<"\n";
    printDetail(103 , "NA" ,"Allahabad");

    cout<<"\n";


    return 0;
}