#include <iostream>

using namespace std;

int main(){
    int marks[] = {80, 75, 85, 90, 82};
    for (int i = 0; i < sizeof(marks) / 4;i++){
        cout << *(marks + i) << endl;
    }
    return 0;
}