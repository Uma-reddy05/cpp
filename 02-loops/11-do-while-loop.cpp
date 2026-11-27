/*
Day 11 - do while loop in c++
Author - Uma
Date - 27-11-2026
*/

#include <iostream>
using namespace std;

int main(){

    int num;
    int i = 1;

    cout<<"enter a number : ";
    cin>>num;

    do{
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
        i++;
    }

    while(i <= 10);

    return 0;

}