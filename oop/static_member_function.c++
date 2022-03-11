#include <iostream>

using namespace std;

class Box{
    private:
        double length;
        double breadth;
        double height;

    public:
        static int objectCount;

        // constructor defination

        Box(double l = 2.0,double b = 2.0,double h = 2.0){
            length = l;
            breadth = b;
            height = h;
            objectCount++;
        }
        double value(){
            return length * breadth * height;
        }
};

// now intialize static member obejectCount of Box

int Box::objectCount = 0;

int main(){
    Box bx1;
    Box bx2;
    Box bx3;
    Box bx4;
    cout << "Total box count is " << Box::objectCount;
    return 0;
}