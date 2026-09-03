//wap to check whether the user input is a palindrome or not using stack
//Here is a C++ program that checks whether the user input is a palindrome using a stack:

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    stack<char> s;
    for (char c : str) {
        if (isalnum(c)) {
            s.push(tolower(c));
        }
    }
    for (char c : str) {
        if (isalnum(c)) {
            if (s.top() != tolower(c)) {
                return false;
            }
            s.pop();
        }
    }
    return true;
}