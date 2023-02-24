/*
Stack is a linear data structure that follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out). LIFO implies that the element that is inserted last, comes out first and FILO implies that the element that is inserted first, comes out last.
*/
#include<iostream>
#include<climits>
using namespace std;

class StackUsingArray
{
private:
    int* Stack;
    int top;        // this top will store the index of the top element of the stack.
    int capacity;    // this variable will store the capacity of the stack.

public:
    StackUsingArray(int siz)
    {
        Stack = new int[siz];    // Created Stack in dynamic memory.
        top = 0;
        capacity = siz;
        cout << "Stack is created." << endl;
    }

    int size()
    {
        cout << "size is: " << top << endl;
        return top;
    }

    bool isEmpty()
    {
        return top == 0;
    }

    //Inserting element
    void push(int data)
    {
        // checking if the stack is full or not.
        if(top == capacity)
        {
            cout << "Can't insert, Stack is full. "<< endl;
            return;
        }
        else
        {
            Stack[top] = data;
            top++;
            cout <<data<< " is pushed successfully." << endl;
        }
    }

    //delete element
    int pop()
    {
        //checking if stack is empty or not.
        if(isEmpty())
        {
            cout << "Stack is Empty." << endl;
            return INT_MIN;
        }
        else
        {
            top--;
            cout << Stack[top] << " is popped successfully." << endl;
            return Stack[top];
        }
    }

    // checking top element of stack
    int show_top()
    {
        if(isEmpty())
        {
            cout << "Stack is empty." << endl;
            return INT_MIN;
        }
        else
        {
            cout<< "Top element: " << Stack[top-1] << endl;
            return Stack[top-1];
        }
    }
};

int main()
{
    StackUsingArray stack1(5);
    stack1.push(30);
    stack1.pop();
    stack1.show_top();

    return 0;
}
