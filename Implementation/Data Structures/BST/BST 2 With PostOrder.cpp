// Binary Search Tree
#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* insertIntoBST(node* root, int data)
{

    // if the root node will be empty then this if block will be executed.
    if(root == NULL)
    {
        root = new node(data);
        return root;
    }

    //
    if(data > root -> data)
    {
        root -> right = insertIntoBST(root -> right, data);
    }
    else
    {
        if(data < root -> data)
        {
            root -> left = insertIntoBST(root -> left,data);
        }
    }

}

void insert_value(node* &root)
{
    int data;
    cin >> data;
    while(data != -1)
    {
        root = insertIntoBST(root,data);
        cin >> data;
    }
}

void postOrder_traversal(node* root) {
    if (root == nullptr)
    {
        return;
    }

    postOrder_traversal(root->left);       // Traverse left subtree
    postOrder_traversal(root->right);      // Traverse right subtree

    cout << root->data << " ";             // Visit current node
}
int main()
{
    node* root = NULL;
    cout << "Enter the elements of BST: " << endl;
    insert_value(root);
    postOrder_traversal(root);
    return 0;
}
