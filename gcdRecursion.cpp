//wap to find gcd of two numbers using recursion
//Here is a C++ program that finds the GCD (Greatest Common Divisor) of two numbers using recursion:

#include <iostream>
using namespace std;
// Function to find GCD using recursion
int gcd(int a, int b) {
    // Base case: if b is 0, return a
    if (b == 0) {
        return a;
    }
    // Recursive case: call gcd with b and the remainder of a divided by b
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    return 0;
}