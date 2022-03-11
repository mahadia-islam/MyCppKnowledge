#include <iostream>

using namespace std;

class BookStore{
    string books[500];
    int price[500];
    static int index;

    public:
    void add_book()
    {
        string n;
        int p;
        cout << "\t\t\t\tAdd new book to the store and write e place of book name to quit : \n";
        while (true)
        {
            cout << "Enter book name : ";
            cin >> n;
            books[index] = n;
            if(n != "e"){
                cout << "Enter book price : ";
                cin >> p;
                price[index] = p;
            }else{
                break;
            }
        }
    }
    void show_first_book_name(){
        cout << books[0] << endl;
    }
};

int BookStore::index = 0;

int main(){
    BookStore store1;
    store1.add_book();
    return 0;
}