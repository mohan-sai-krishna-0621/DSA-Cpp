#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Problem 1: Balanced Parentheses
void balancedParentheses() {
    string expression = "{[()]}";
    stack<char> s;
    bool balanced = true;

    for (char ch : expression) {
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty()) {
                balanced = false;
                break;
            }

            char top = s.top();
            s.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                balanced = false;
                break;
            }
        }
    }

    if (!s.empty()) {
        balanced = false;
    }

    cout << "Balanced Parentheses: "
         << (balanced ? "Yes" : "No") << endl;
}

// Problem 2: Reverse String Using Stack
void reverseString() {
    string str = "HELLO";
    stack<char> s;

    for (char ch : str) {
        s.push(ch);
    }

    cout << "Reversed String: ";

    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
}

int main() {
    balancedParentheses();
    reverseString();

    return 0;
}
