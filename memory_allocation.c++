#include <iostream>

using namespace std;

class Shop{
    private:
        string name;
        string products[500];

    public:
        Shop(string n){
            name = n;
        }
        void show_name(){
            cout << "the shop name is " << name << endl;
        }
        void set_product(string product,int id){
            products[id] = product;
        }
        void show_product(int id){
            cout << products[id] << endl;
        }
};

int main(){
    string my_products[] = {"camera", "laptop", "hair dryer", "web camera", "leather jacket", "deo", "mac laptop","electric guitar","iphone","adaptar"};
    Shop s1("proshop");
    int array_size = sizeof(my_products) / 24;
    for (int i = 0; i < array_size; i++)
    {
        s1.set_product(my_products[i], i);
    }
    for (int i = 0; i < array_size; i++)
    {
        s1.show_product(i);
    }

    return 0;
}