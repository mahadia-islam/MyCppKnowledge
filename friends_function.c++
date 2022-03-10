#include <iostream>

using namespace std;

class Complex{
    private:
        int a;
        int b;

    public:
        void set_number(int n1, int n2)
        {
            a = n1;
            b = n2;
        }
        void show_number(){
            cout << "the number is " << a << " + " << b << "i" << endl;
        }
        friend Complex sum_complex(Complex n1,Complex n2);
};

Complex sum_complex(Complex n1,Complex n2){
    Complex n3;
    n3.set_number((n1.a + n2.a),(n1.b+n2.b));
    return n3;
}

int main(){
    Complex c1,c2,sum;
    c1.set_number(1, 5);
    c2.set_number(1,6);
    sum = sum_complex(c1, c2);
    sum.show_number();
    return 0;
}