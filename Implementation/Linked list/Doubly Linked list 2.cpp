/*
In this code of DDL, we will learn how to add the functionality of deleting node.
There are 3 conditions for deleting a node from given DLL.
1. deleting the node from beginning.
2. deleting the node from last.
3. deleting the node form middle.
*/

#include<iostream>
using namespace std;

class node
{
public:
    node* previous;
    int data;
    node* next;

    node(int data)
    {
        this -> previous = NULL;
        this -> data = data;
        this -> next = NULL;
    }
};

void insert_begin(node* &head, node* &tail, int data)
{
    if(head == NULL)
    {
        node* new_node = new node(data);
        head = new_node;
        tail = new_node;
    }
    else
    {
        node* new_node = new node(data);
        new_node -> next = head;
        head -> previous = new_node;
        head = new_node;
    }
}

void insert_end(node* &head, node* &tail, int data)
{
    if(tail == NULL)
    {
        node* new_node = new node(data);
        head = new_node;
        tail = new_node;

    }
    else
    {
        node* new_node = new node(data);
        tail -> next = new_node;
        new_node -> previous = tail;
        tail = new_node;
    }
}

void insert_at_anypoint(node* &head, node* &tail, int position, int data)
{
    if(position == 1)
    {
        insert_begin(head,tail,data);
        return;
    }

    int count =1;
    node* temp = head;
    while(count < position-1)
    {
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL)
    {
        insert_end(head,tail,data);
        return;
    }

    node* new_node = new node(data);
    new_node -> next = temp -> next;
    temp -> next -> previous = new_node;
    temp -> next = new_node;
    new_node -> previous = temp;

}

void delete_begin(node* &head)
{
    node* temp = head;
    temp -> next -> previous = NULL;  // here we are storing NULL in the previous of 2nd node to break the bond.
    head = temp -> next;        // here we are storing the address of the 2nd node in the head.
    temp -> next = NULL;        // storing null in the next of 1st node.
    delete temp;
}

void delete_end(node* &tail)
{
    node* temp = tail;
    temp -> previous -> next = NULL;  // here we are  breaking the bond by storing NULL in the last second node.
    tail = temp -> previous;    // here in tail we are storing the address of last 2nd node.
    temp -> previous = NULL;    //  here we are breaking the bond by strong NULL into the previous of last node.
    delete temp;    // deleting last node.
}

void delete_any_node(node* &head, node* &tail, int position)
{
    if(position == 1)    // if the user will give 1 as a position to delete the node then it will remove the 1st node.
    {
        delete_begin(head);
        return;
    }

    int count = 1;
    node* temp = head;

    while(count < position)    // if the user will give position apart from 1, then with the loop we will traverse till that element.
    {
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL)   // after traversing if we reach the last node than then we will delete the last node.
    {
        delete_end(tail);
        return;
    }

    temp -> previous -> next = temp -> next;    // here we are storing the address of (n+1)th node into the 'next' of (n-1)th node.
    temp -> next -> previous = temp -> previous; // here we are storing the address of (n-1)th node into the 'previous' of (n+1)th node.
    temp -> previous = NULL;   // we need to remove the nth node, therefore we are storing null into the 'next' and the 'previous' of temp.
    temp -> next = NULL;
    delete temp;     // at the end we are deleting the nth node.
}

void print_DLL(node* &head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main()
{
    node* head = NULL;
    node* tail = NULL;

    insert_at_anypoint(head,tail,1,5);
    insert_at_anypoint(head,tail,2,10);
    insert_begin(head,tail,15);
    insert_end(head,tail,20);
    insert_at_anypoint(head,tail,5,25);
    insert_end(head, tail, 30);
    insert_begin(head, tail, 50);

    delete_begin(head);
    delete_end(tail);
    delete_any_node(head,tail,2);
    delete_any_node(head,tail,4);
    delete_any_node(head,tail,3);
    cout << "tail: " << tail -> data << endl;

    print_DLL(head);

    return 0;
}
