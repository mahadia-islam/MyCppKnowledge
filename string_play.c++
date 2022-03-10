#include <iostream>

using namespace std;

class StringPlayer{
    private:
        string the_binary;

    public:
        void set_the_binary(string binary){
            the_binary = binary;
        }
        void check_binary(){
            for (int i = 0; i < the_binary.length(); i++)
            {
                if(the_binary.at(i) != '0' && the_binary.at(i) != '1'){
                    cout << "Incorrect Binary Format" << endl;
                    break;
                }
            }
            
        }
        void replace_binary(){
            check_binary();
            for (int i = 0; i < the_binary.length(); i++)
            {
                if(the_binary.at(i) == '0'){
                    the_binary.at(i) = '1';
                }else if(the_binary.at(i) == '1'){
                    the_binary.at(i) = '0';
                }
            }
            display_binary();
            
        }

        void display_binary(){
            cout << "the binary is " << the_binary << endl;
        }
};

int main(){
    StringPlayer s1;
    s1.set_the_binary("012011");
    s1.replace_binary();
    return 0;
}