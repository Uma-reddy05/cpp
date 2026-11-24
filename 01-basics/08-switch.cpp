/*
Day 9 - switch in c++
Author - Uma
Date - 24-11-2026
*/

#include <iostream>
using namespace std;

int main(){
    int day;

    cout<<"enter day number(1-7) : ";
    cin>>day;

    //switch checks value of 'day' and jumps to matching case
    switch(day){
        case 1:
            cout<<"monday"<<endl;
            break;

        case 2:
            cout<<"tuesday"<<endl;
            break;

        case 3:
            cout<<"wednesday"<<endl;
            break;

        case 4:
            cout<<"thursady"<<endl;
            break;

        case 5:
            cout<<"friday"<<endl;
            break;

        case 6:
            cout<<"saturday"<<endl;
            break;

        case 7:
            cout<<"sunday"<<endl;
            break;
    }
    
    return 0;

}