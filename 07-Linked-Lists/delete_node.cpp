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

    Node* temp = head;
    Node* previous = nullptr;

    while (temp != nullptr && temp->data != target) {
        previous = temp;
        temp = temp->next;
    }

    if (temp != nullptr) {
        if (previous == nullptr) {
            head = temp->next;
        } else {
            previous->next = temp->next;
        }

        delete temp;
    }

    cout << "Linked List: ";

    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    while (head != nullptr) {
        Node* current = head;
        head = head->next;
        delete current;
    }

    return 0;
}
