#include <iostream>

using namespace std;

int main(){
    int i = 10;
    int j = 0;
    do{
        j++;
        cout << i << " x " << j << " = " << (i * j) << endl;
    } while (j < 10);
    return 0;
}