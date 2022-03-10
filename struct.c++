#include <iostream>

using namespace std;

struct employee{
    int salary;
    float tax;
};

int main(){
    struct employee e1;
    e1.salary = 10000;
    e1.tax = 3.1424;
    cout << e1.salary << endl;
    cout << "rest price is " << (e1.salary - ((e1.salary / 100)*e1.tax))  << endl;
    return 0;
}