/*
Day 04 - variables in c++
Author - Uma
Date - 19-11-2026
*/

#include <iostream>
using namespace std;

int main(){

    //int - for whole number
    int age = 17;
    int marks = 100;

    //float/double - for decimal numbers
    float price = 99.99;
    double pi = 3.142;

    //char - for single character
    char grade = 'A';

    //string - for words/sentences
    string name = "Uma";

    //bool - for true/false
    bool ispassed = true;

    //const - value cannot be changed later
    const int birthyear = 2009;

    //printing all the values
    cout<<"name : "<<name<<endl;
    cout<<"age : "<<age<<endl;
    cout<<"marks : "<<marks<<endl;
    cout<<"price : "<<price<<endl;
    cout<<"pi : "<<pi<<endl;
    cout<<"grade : "<<grade<<endl;
    cout<<"passed : "<<ispassed<<endl;
    cout<<"birth year : "<<birthyear<<endl;

    return 0;
}