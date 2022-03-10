#include <iostream>

using namespace std;

class Car{
    private:
        string name;
        string model;
        int brandValue;

    public:
        Car(string x,string y,int z)
        {
            name = x;
            model = y;
            brandValue = z;
        }
        string getName(){
            return name;
        }
        string getModel(){
            return model;
        }
        int getBrandValue(){
            return brandValue;
        }
};

int main(){
    Car bmw("bmw","b7",250000);
    cout << "Name of the car is " << bmw.getName() << endl;
    cout << "Model of the car is " << bmw.getModel() << endl;
    cout << "Brand value of this car is " << bmw.getBrandValue() << "$" << endl;
    return 0;
}