/*
Day 06 - if else in c++
Topic - checking number whether it is even or odd
Author - Uma
Date - 21-11-2026
*/

#include <iostream>
using namespace std;

int main(){
    
    int num;

    //ask user for a number
    cout<<"enter a number : "<<endl;
    cin>>num;

    //if remainder is 0 when divided by 2, it is even
    // % gives remainder
    if(num%2 == 0){
        cout<<num<<" is even "<<endl;

    }
    
    //otherwise it is odd
    else{
        cout<<num<<" is odd "<<endl;
    }

    return 0;

}