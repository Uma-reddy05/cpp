/*
Day 07 - else if in c++
Author - Uma
Date - 23-11-2026
*/

#include <iostream>
using namespace std;

int main(){

    int marks;

    cout<<"enter your marks out of 100 : "<<endl;
    cin>>marks;

    //grade system using else if ladder
    if(marks >= 90){
        cout<<"grade : A+"<<endl;
    }

    else if(marks >= 80){
        cout<<"grade : A"<<endl;
    }

    else if(marks >= 70){
        cout<<"grade : B"<<endl;
    }

    else if(marks >= 60){
        cout<<"grade : C"<<endl;
    }

    else if(marks >= 40){
        cout<<"grade : D - just passed"<<endl;
    }

    else{
        cout<<"grade F - FAIL"<<endl;
    }

    return 0;
}