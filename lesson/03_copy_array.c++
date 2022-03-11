#include <iostream>

using namespace std;

int main(){
    int num_array[] = {2,4,6,8,10,12,14,16,18,20};
    int copy_num_array[(sizeof(num_array) / 4)];
    for (int i = 0; i < sizeof(num_array) / 4; i++)
    {
        copy_num_array[i] = num_array[i];
    }
    for (int i = 0; i < sizeof(copy_num_array) / 4; i++)
    {
        cout << copy_num_array[i] << endl;
    }
    
    return 0;
}