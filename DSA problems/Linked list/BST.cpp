#include <iostream>

using namespace std;

// Define the structure of a node in the binary search tree
struct Node {
    int data;
    Node *left;
    Node *right;
};

// Function to create a new node in the binary search tree
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Function to insert a new node in the binary search tree
Node* insertNode(Node* root, int data) {
    if (root == nullptr) {
        root = createNode(data);
        return root;
    }
    else if (data <= root->data) {
        root->left = insertNode(root->left, data);
    }
    else {
        root->right = insertNode(root->right, data);
    }
    return root;
}

// Function to print the binary search tree in-order
void printInOrder(Node* root) {
    if (root == nullptr) {
        return;
    }
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

// Main function to create and print a binary search tree
int main() {
    Node* root = nullptr;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);
    insertNode(root, 55);
    insertNode(root, 65);
    insertNode(root, 45);
    cout << "In-order traversal of the binary search tree: ";
    printInOrder(root);
    cout << endl;
    return 0;
}

