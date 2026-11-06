#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    int target = 20;
    int position = 1;
    bool found = false;

    Node* temp = head;

    while (temp != nullptr) {
        if (temp->data == target) {
            cout << "Element found at position: " << position;
            found = true;
            break;
        }

        temp = temp->next;
        position++;
    }

    if (!found) {
        cout << "Element not found";
    }

    while (head != nullptr) {
        Node* current = head;
        head = head->next;
        delete current;
    }

    return 0;
}
