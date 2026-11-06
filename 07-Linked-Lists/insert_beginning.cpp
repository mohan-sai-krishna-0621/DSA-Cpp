#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{20, nullptr};
    head->next = new Node{30, nullptr};

    // Insert 10 at beginning
    Node* newNode = new Node{10, head};
    head = newNode;

    Node* temp = head;

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
