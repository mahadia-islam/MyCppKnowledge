#include <iostream>

using namespace std;

int main(){
    string gender;
    cout << "Enter your gender : ";
    cin >> gender;
    auto isFemale = gender != "male";
    if(isFemale){
        cout << "Welcome to club party mam";
    }else{
        cout << "This is a female bar and you are not allowed there" << endl;
    }
}