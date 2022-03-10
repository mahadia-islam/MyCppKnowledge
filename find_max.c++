#include <iostream>

using namespace std;

int find_max(int *ptr,int arr_size){
    int max = 0;
    for (int i = 0; i < arr_size; i++)
    {
        if(*(ptr + i) > max){
            max = *(ptr + i);
        }
    }
    return max;
}

int main()
{
    int num_arr[] = {15, 7, 6, 74, 52, 14, 100, 112, 58, 12, 13, 147};
    int max = find_max(num_arr, (sizeof(num_arr) / 4));

    cout << max << endl;

    return 0;
}