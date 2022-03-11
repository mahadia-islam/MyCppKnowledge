#include <iostream>

using namespace std;

void add(){
    float a, b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "Addition of two number is " << a + b << endl;
}

void substract(){
    float a, b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "Substraction of two number is " << a - b << endl;
}

void divide(){
    float a, b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "Divide of two number is " << a / b << endl;
}

void multiply(){
    float a, b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "Multiply of two number is " << a * b << endl;
}


void calculator(){
    int selected_operation;
    cout << "Select a operation by following number : " << endl;
    cout << "1. + " << endl;
    cout << "2. - " << endl;
    cout << "3. / " << endl;
    cout << "4. x " << endl;
    cin >> selected_operation;
    switch (selected_operation)
    {
    case 1:
        add();
        break;
    case 2:
        substract();
        break;
    case 3:
        divide();
        break;
    case 4:
        multiply();
        break;
    default:
        break;
    }
}

int main(){
    calculator();
    return 0;
}