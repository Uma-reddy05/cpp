/*
Day 05 - operators in c++
topic - arithmetic, assignmet comparision and logical operators
Author - Uma
Date - 20-11-2026
*/

#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int b = 3;

    //arithmetic operators
    cout<<" a + b = "<<a+b<<endl; // 13 : addition
    cout<<" a - b = "<<a-b<<endl; // 7 : subtracction
    cout<<" a * b = "<<a*b<<endl; // 30 : multiplication
    cout<<" a / b = "<<a/b<<endl; // 3 : division
    cout<<" a % b = "<<a%b<<endl; // 1 : remainder

    cout<<"-----------------------"<<endl;

    //assignment operators
    int x = 5;
    x += 2;//x = x+2 -> 7
    cout<< "x += 2 : "<<x<<endl;
    x -= 2;//x = x-2 -> 5
    cout<< "x -= 2 : "<<x<<endl;
    x *= 2;//x = x*2 -> 10
    cout<< "x *= 2 : "<<x<<endl;
    cout<<"-----------------------------"<<endl;

    //comparision operators - gives 1 for true and 0 for false
    cout<<"a==b : "<<(a==b)<<endl;
    cout<<"a!=b : "<<(a!=b)<<endl;
    cout<<"a>b : "<<(a>b)<<endl;
    cout<<"a<b : "<<(a<b)<<endl;
    cout<<"---------------------------"<<endl;

    //logical operators
    bool isStudent = true;
    bool isPassed = true;
    cout<<"AND(&&) : "<<(isStudent && isPassed)<<endl;
    cout<<"OR(||)) : "<<(isStudent || false)<<endl;
    cout<<"NOT(!)) : "<<(!isStudent )<<endl;
    cout<<"----------------------------"<<endl;

    // increment/decrement
    int num = 5;
    num++;
    cout<<"num++ = "<<num<<endl;
    num--;
    cout<<"num-- = "<<num<<endl;

    return 0;

}