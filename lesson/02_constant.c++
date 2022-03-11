#include <iostream>

using namespace std;

bool test(){
    char procced;
    cout << "Do you want to go more deep ? (y/n) " << endl;
    cin >> procced;

    if(procced == 'y'){
        return true;
    }
    return false;
}

bool female_or_not(){
    char ch;
    int treis = 4;
    while(treis > 0){
        cout << "You are a female or not ? (y/n) : ";
        cin >> ch;
        switch (ch)
        {
        case 'y':
            return true;
            break;
        case 'n':
            return false;
            break;
        default:
            cout << "Sorry I don't understand your query !!" << endl;
            treis--;
            break;
        }
    }
    return false;
}

int main(){
    // bool wanna_go_next = test();
    // if(wanna_go_next){
    //     cout << "Welcome to hacker.net" << endl;
    // }else{
    //     cout << "See you next time !!" << endl;
    // }
    bool isFemale = female_or_not();
    if(isFemale){
        cout << "Thanks for joining to amazing world" << endl;
    }else{
        cout << "Bye see you later !!";
    }
    return 0;
}