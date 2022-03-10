#include <iostream>

using namespace std;

int main(){
    try
    {
        int age;
        cout << "Enter your age : ";
        cin >> age;
        if(age >= 18){
            cout << "You are wolcome !!";
        }else{
            throw 505;
        }
    }
    catch(int myNum)
    {
        cout << "You are not allowed because you are 18" << myNum << endl;
        cout << "Error code is " << myNum << endl;
    }
    
    return 0;
}