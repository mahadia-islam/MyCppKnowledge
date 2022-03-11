#include <iostream>

using namespace std;

class Student{
    protected:
        string name = "unkwon";
        int roll;

    public:
        void set_name(string);
        void set_roll(int);
};

void Student::set_name(string n){
    name = n;
}

void Student::set_roll(int r){
    roll = r;
}

class Exam:public Student{
    protected:
        float math;
        float physics;
    public:
        void set_math(float);
        void set_physics(float);
};

void Exam::set_math(float m){
    math = m;
}

void Exam::set_physics(float p){
    physics = p;
}

class Marks:public Exam{
    public:
        void print_math_mark(){
            cout << "hey !! " << name << " your math mark is " << math << endl;
        }
        void print_physics_mark(){
            cout << "hey !! " << name << " your physics marks is " << physics << endl;
        }
        void print_marks_percentage(){
            cout << "your marks percentage is " << ((math + physics) / 2) << endl;
        }
};

int main(){
    Marks mahadia;
    mahadia.set_name("mahadia");
    mahadia.set_roll(1);
    mahadia.set_math(81);
    mahadia.set_physics(75);
    mahadia.print_math_mark();
    mahadia.print_physics_mark();
    mahadia.print_marks_percentage();
    return 0;
}