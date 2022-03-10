#include <iostream>

using namespace std;

int fibonacci(int n){
    if(n <= 1){
        return 1;
    }
    return n + fibonacci(n - 1);
}

int factorial(int n){
    if(n <= 1){
        return 1;
    }
    return n * factorial(n - 1);
}

struct student{
    string name;
    int age;
    int roll;
};

int main(){
    // int marks[] = {11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    // for (int i = 0; i < sizeof(marks) / 4; i++)
    // {
    //     *(marks + i) = i + 1;
    // }

    // cout << marks[0] << endl;
    struct student s1;
    s1.name = "mahadia";
    string name = "mahadia";
    string name2 = "mahadia";
    cout << (name == name2) << endl;

    return 0;
}