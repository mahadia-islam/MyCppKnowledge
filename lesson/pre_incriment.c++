#include <iostream>

using namespace std;

/*
1. (++) is incriment operator 
2.there is two type of incriment
   - pre incriment
   - incriment
3. pre incriment is incriment integer or float before printing or doing something
4. incriment can happen anytime after or before printing or doing something
*/

int main(){
    int i = 10;
    int j = 10;
    cout << i++ << endl; // there it will be same at time of printing because it is normal incrimention and it will perform after printing
    cout << ++j << endl; // previosly it was ten but at the time of printing it will 11 because we keep the incriment operator before and that's why it will incriment frist then it will be printend on screen
    return 0;
}