//wap to rverse the given number using recursion
//Here is a C++ program that reverses a given number using recursion:

#include <iostream>
using namespace std;
// Function to reverse a number using recursion
int reverseNumber(int num, int rev = 0) {
    // Base case: if num is 0, return the reversed number
    if (num == 0) {
        return rev;
    }
    // Recursive case: extract the last digit and add it to rev
    rev = rev * 10 + num % 10;
    return reverseNumber(num / 10, rev);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reversed number is: " << reverseNumber(num) << endl;
    return 0;
}