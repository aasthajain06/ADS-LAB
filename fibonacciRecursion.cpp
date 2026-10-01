//wap to find nth fibonacci number using recursion in C++. and improving its runtime to save stack space.
//Here is a simple C++ program that calculates the nth Fibonacci number using recursion:

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the position of Fibonacci number: ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}