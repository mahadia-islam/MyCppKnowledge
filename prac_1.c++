#include <iostream>

using namespace std;

int main(){
    string language;
    cout << "Enter a language you love : ";
    cin >> language;
    if ((language == "java" || language == "c" || language == "c++" || language == "python" || language == "c#") && (language != "php" && language != "javascript")){
        cout << "Welcome to our team !!";
    }else{
        cout << "You are not allowed to our team";
    }
    return 0;
}