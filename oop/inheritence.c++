#include <iostream>

using namespace std;

class Creature{
    protected:
        string name;
        int age;
    public:
        void setName(string n){
            name = n;
        }
        void setAge(int a){
            age = a;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
};

class Animal: public Creature{
    public:
        void getName(){
            cout << "the name of this cat is " << name;
        }
};


int main(){
    Animal cat;
    cat.setName("billi");
    cat.setAge(2);
    cat.getName();
    return 0;
}