#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {

    // STACK
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack:\n";
    cout << "Top element: " << s.top() << endl;

    s.pop();

    cout << "After pop: " << s.top() << endl;
    cout << "Stack size: " << s.size() << endl;

    // QUEUE
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "\nQueue:\n";
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    q.pop();

    cout << "After pop: " << q.front() << endl;
    cout << "Queue size: " << q.size() << endl;

    return 0;
}
