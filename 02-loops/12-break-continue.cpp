/*
day 12 - break and continue in c++
author - Uma
Date - 28-11-2026
*/

#include <iostream>
using namespace std;

int main(){

    for(int i=0; i<= 10; i++){
        if(i==5){
            break;
        }

        cout<<i<<endl;
    }
    

     cout<<"---------------------------"<<endl;

    for(int i=0 ; i<=10 ; i++){
        if(i==5){
            continue;
        }

        cout<<i<<" ";
    }

    return 0;

}