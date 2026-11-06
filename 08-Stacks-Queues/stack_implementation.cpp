#include <iostream>
#include <stack>
using namespace std;

// Problem 1: Stack using Array
void arrayStack() {
    int arr[5];
    int top = -1;

    arr[++top] = 10;
    arr[++top] = 20;
    arr[++top] = 30;

    cout << "Stack using Array: ";

    while (top != -1) {
        cout << arr[top--] << " ";
    }

    cout << endl;
}

// Problem 2: Stack using STL
void stlStack() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack using STL: ";

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}

int main() {
    arrayStack();
    stlStack();

    return 0;
}
