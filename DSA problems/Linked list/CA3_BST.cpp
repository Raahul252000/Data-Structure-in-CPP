
#include<iostream>
using namespace std;

// Binary Search Tree Node
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// Function to create a new Binary Search Tree node
struct node* newNode(int data)
{
    struct node* temp = new struct node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

// Quick Sort Algorithm
int partition(int arr[], int first, int last)
{
    int pivot = arr[last];
    int i = (first - 1);

    for (int j = first; j <= last - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[last]);
    return (i + 1);
}

void quickSort(int arr[], int first, int last)
{
    if (first < last)
    {
        int pi = partition(arr, first, last);
        quickSort(arr, first, pi - 1);
        quickSort(arr, pi + 1, last);
    }
}

// Function to insert sorted elements in Binary Search Tree
struct node* sortedArrayToBST(int arr[], int start, int end)
{
    if (start > end)
        return NULL;

    int mid = (start + end) / 2;
    struct node* root = newNode(arr[mid]);

    root->left = sortedArrayToBST(arr, start, mid - 1);
    root->right = sortedArrayToBST(arr, mid + 1, end);

    return root;
}

// Function to traverse Binary Search Tree using Inorder Traversal.
void inorderTraversal(struct node* root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

// Main Function
int main()
{
    int n, i;
    cout << "How many elements do you want to store: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    // Sort the elements using Quick Sort Algorithm
    quickSort(arr, 0, n - 1);

    // Insert sorted elements in Binary Search Tree
    struct node* root = sortedArrayToBST(arr, 0, n - 1);

    // Traverse the Binary Search Tree using In-order Traversal
    cout << "In-order Traversal of Binary Search Tree: ";
    inorderTraversal(root);

    return 0;
}
