#include <iostream>

using namespace std;

class Human{
    private:
        string name;
        int age;
        int salary;
        float tax = 3.2;
    public:
        Human(string n,int a,int s){
            name = n;
            age = a;
            salary = s;
        }
        int getAge(){
            return age;
        }
        float rest_salary(){
            return salary - ((salary / 100) * tax);
        }
        string get_name(){
            return name;
        }
        int total_salary(){
            return salary;
        }
};

class Employee{
    public:
        string birth_of_date;
        void set_birth_of_date(){
            cout << "Enter your birth of date like this (12-08-2022) : ";
            cin >> birth_of_date;
        }
};

int main(){
    Employee e1;
    e1.set_birth_of_date();
    cout << e1.birth_of_date;
    return 0;
}