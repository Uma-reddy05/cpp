/*
day 10 - while loop in c++
Author - Uma
Date - 26-11-2026
*/

#include <iostream>
using namespace std;

int main(){

    int num;
    int i = 1;

    cout<<"enter a number : "<<endl;
    cin>>num;

    while(i <= 10){
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
        i++;
    }

    return 0;
    
}