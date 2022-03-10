#include <iostream>

using namespace std;

class Complex
{
    
    int a, b;

    public:
        friend class Calculator;
        void set_number(int n1, int n2)
        {
            a = n1;
            b = n2;
        }
        void show_number()
        {
            cout << "the number is " << a << " + " << b << "i" << endl;
        }
};

class Calculator
{
public:
    int add(int n1, int n2)
    {
        return n1 + n2;
    }
    Complex sumComplex(Complex, Complex);
};

Complex Calculator::sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.set_number((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    Calculator cal1;
    c1.set_number(1, 2);
    c2.set_number(2, 3);
    sum = cal1.sumComplex(c1, c2);
    sum.show_number();
}