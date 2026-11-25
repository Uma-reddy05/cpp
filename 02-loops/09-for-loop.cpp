/*
Day 09 - for loop in c++
Topics - printing numbers from 1 to 100, and printing name 10 times
Author - Uma
Date - 25-11-2026
*/

#include <iostream>
using namespace std;

int main(){

    // print 1 to 100
    cout<<"numbers 1 to 100"<<endl;

    //for(start, condition, update)
    // i=1 -> start, i<=100 -> run till 100, i++ -> increase by 1 each time
    for(int i=1; i <= 100; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"--------------------------"<<endl;

    //print your name 10 times
    cout<<"my name 10 times"<<endl;

    for(int i=1; i<= 10 ; i++){
        cout<<i<<". Uma"<<endl;
    }

    return 0;

}