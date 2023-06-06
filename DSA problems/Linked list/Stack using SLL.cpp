/*
 In this code, we have implemented the stack using singly Linked list.
 It consist of push(), pop(), top() methods.
*/
#include<iostream>
using namespace std;

class stack
{
public:

    int data;
    stack* next;

    stack(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void push(stack* &head, int data)
{
    if(head == NULL)
    {
        stack* new_node = new stack(data);
        head = new_node;
        cout << "Stack successfully created with " << data << endl;
    }
    else
    {
        stack* new_node = new stack(data);
        new_node -> next = head;
        head = new_node;
        cout << data << " added successfully." << endl;
    }
}

void print_stack(stack* &head)
{
    if(head == NULL)
    {
        cout << "stack is empty" << endl;
        return;
    }
    else
    {
        stack* temp = head;
        while(temp != NULL)
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }
}

void top(stack* &head)
{
    cout << "Top: " << head ->data << endl;
}

int pop(stack* &head)
{
    if(head == NULL)
    {
        cout << "Stack is already empty." << endl;
        return 0;
    }
    else
    {
        stack* temp = head;
        head = temp -> next;
        int n = temp -> data;
        delete temp;
        cout << n << " popped successfully." << endl;
        return n;
    }
}

int main()
{
    stack* head = NULL;
    push(head,20);
    push(head,25);
    push(head,35);
    push(head,45);

    print_stack(head);
    top(head);
    pop(head);
    pop(head);

    print_stack(head);
    return 0;
}
