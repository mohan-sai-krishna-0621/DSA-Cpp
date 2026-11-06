#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int main() {
    // Create a binary tree
    Node* root = new Node{1, nullptr, nullptr};
    root->left = new Node{2, nullptr, nullptr};
    root->right = new Node{3, nullptr, nullptr};
    root->left->left = new Node{4, nullptr, nullptr};
    root->left->right = new Node{5, nullptr, nullptr};

    // Level order traversal using queue
    queue<Node*> q;
    q.push(root);

    cout << "Level Order Traversal: ";

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left != nullptr) {
            q.push(current->left);
        }

        if (current->right != nullptr) {
            q.push(current->right);
        }
    }

    // Free allocated memory
    queue<Node*> cleanup;
    cleanup.push(root);

    while (!cleanup.empty()) {
        Node* current = cleanup.front();
        cleanup.pop();

        if (current->left) cleanup.push(current->left);
        if (current->right) cleanup.push(current->right);

        delete current;
    }

    return 0;
}
