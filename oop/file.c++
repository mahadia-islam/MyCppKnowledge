#include <iostream>
#include <fstream>

using namespace std;

int main(){
    // ofstream MyFile("myfile.txt");
    // MyFile << "File is tricky but it is fun for finding";
    // MyFile.close();
    string myText;
    ifstream MyReadFile("myfile.txt");
    while(getline(MyReadFile,myText)){
        cout << myText;
    }
    MyReadFile.close();
    return 0;
}