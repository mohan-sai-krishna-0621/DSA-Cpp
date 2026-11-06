#include <iostream>
#include <queue>
using namespace std;

// Problem 1: Queue using Array
void arrayQueue() {
    int arr[5];
    int front = 0, rear = -1;

    arr[++rear] = 10;
    arr[++rear] = 20;
    arr[++rear] = 30;

    cout << "Queue using Array: ";

    while (front <= rear) {
        cout << arr[front++] << " ";
    }

    cout << endl;
}

// Problem 2: Queue using STL
void stlQueue() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Queue using STL: ";

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}

int main() {
    arrayQueue();
    stlQueue();

    return 0;
}
