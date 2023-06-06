#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

// Stack class
class Stack{

// private
node* head;
int siz;  // number of the element present in the stack

public:
    Stack()
    {
        head = NULL;
        int siz = 0;
        cout << "Stack is Created successfully." << endl;
    }

    // Push function
    void push(int data) // add the nodes in the beginning.
    {
        if(head == NULL)
        {
            node* new_node = new node(data);
            head = new_node;
            siz += 1;
            cout << data << " is pushed successfully." << endl;
            return;
        }
        else
        {
            node* new_node = new node(data);
            new_node -> next = head;
            head = new_node;
            siz += 1;
            cout << data << " is pushed successfully." << endl;

        }
    }

    // pop function
    int pop()
    {
        if(head == NULL)
        {
            cout << "Stack is Empty " << endl;
        }
        else
        {
            node* temp = head;
            head = temp -> next;
            int value = temp -> data;
            delete temp;
            cout << value << " is popped" << endl;
            siz--;
            return value;
        }
    }

    // This function will return the size of stack.
    int getsize()
    {
        return siz;
    }

    bool isEmpty()
    {
        if(head == NULL)
            return true;
        else
            return false;
    }

    int top()
    {
        return head -> data;
    }

};

int main()
{
    Stack stack1;
    stack1.push(10);
    stack1.push(20);
    stack1.push(70);
    //cout << "size: "<<stack1.getsize() << endl;
    stack1.pop();
    cout << "Top: "<<stack1.top() << endl;
    cout << stack1.isEmpty() << endl;


    return 0;
}
