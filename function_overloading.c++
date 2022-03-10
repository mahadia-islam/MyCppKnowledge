#include <iostream>

using namespace std;

void add(int a,int b){
    cout << "Sum of two number is : " << a + b << endl;
}

void add(int a,int b,int c){
    cout << "Sum of three number is : " << a + b + c << endl;
}

void add(int a,int b,int c,int d){
    cout << "Sum of four number is : " << a + b + c + d << endl;
}

int main(){
    add(1,2);
    add(1,2,3);
    add(1,2,3,4);
}