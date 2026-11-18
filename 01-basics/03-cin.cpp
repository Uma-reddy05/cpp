/*
Day 03 - cin in c++
Author - Uma
Date - 18-11-2026
*/

#include <iostream> // this library is for input(cin) and output(cout) 
using namespace std; // so we don't need to write std:: everytime 

int main(){ // program starts here

    //declaring variables
    string name; //to store users name
    int age; //to store users age

    // asking user for input
    cout<<"enter your name : "<<endl;
    cin>>name; //takes name from user and stores in 'name'

    cout<<"enter your age : "<<endl;
    cin>>age; //takes age from user and stores in 'age'

    //showing output
    cout<<" hello "<< name <<" you are "<< age <<" years old "<<endl;

    return 0; // program ends successfully
}