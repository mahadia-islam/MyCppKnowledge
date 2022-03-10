#include <iostream>
#include <chrono>

using namespace std;

int factorial(int n){
    if(n <= 1){
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonacci(int n){
    if(n <= 1){
        return 1;
    }
    return n + fibonacci(n - 1);
}

int main(){
    auto start = std::chrono::system_clock::now();
    // cout << fibonacci(1000) << endl;
    int result = 0;
    int j = 3;
    for (size_t i = 0; i <= j; i++)
    {
        result += i;
    }
    cout << result << endl;
    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end - start;

    cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
    return 0;
}