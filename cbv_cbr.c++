#include <iostream>

using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 10;
    int b = 20;
    swap(&a, &b);
    cout << "Now the valuue of a is " << a << endl;
    cout << "Now the value of b is " << b << endl;
    return 0;
}