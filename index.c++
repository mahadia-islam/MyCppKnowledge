#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int selected;
    cout << "SELECT ONE LANGUAGE YOU LOVE : " << endl;
    cout << "1. C" << endl;
    cout << "2. C++" << endl;
    cout << "3. C#" << endl;
    cout << "4. JAVA" << endl;
    cout << "5. PYTHON" << endl;
    cout << "6. PHP" << endl;
    cout << "7. JAVASCRIPT" << endl;
    cin >> selected;
    if((selected == 1 || selected == 2 || selected == 3 || selected == 4 || selected == 5)&& (selected != 6 && selected != 7)){
        cout << "Welcome to our team for problem solving" << endl;
    }else{
        cout << "You are not allowed to our team sorry" << endl;
    }
}