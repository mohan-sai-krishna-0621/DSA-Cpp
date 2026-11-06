#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};

    // Insert 30 at end
    Node* newNode = new Node{30, nullptr};

    Node* temp = head;

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;

    temp = head;

    cout << "Linked List: ";

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
