/*
In this Question we are supposed to created doubly linked list in which we have to insert element unique element only, if user will give any value which is already there
in linked list, then program should not accept the duplicate value, and apart from this, we need to print the linked list in reverse order.
*/

#include<iostream>
#include<limits.h>
using namespace std;

class node
{
public:
    node* prev;
    int data;
    node* next;

    node(int data)
    {
        this -> prev = NULL;
        this -> data = data;
        this -> next = NULL;
    }

};

void insert_end(node* &head, node* &tail, int &siz, int data)
{
    node* temp = head;

    while(temp != NULL)
    {
        if(temp -> data == data)
        {
            cout << "data already present in LL" << endl;
            return;
        }
        temp = temp -> next;
    }

    if(tail == NULL)
    {
        node* new_node = new node(data);
        head = new_node;
        tail = new_node;
        siz++;
    }
    else
    {
        node* new_node = new node(data);
        tail -> next = new_node;
        new_node -> prev = tail;
        tail = new_node;
        siz++;
    }
}

// Printing in Forward order.
void print_DLL(node* &head)
{
    if(head == NULL)
    {
        cout << "Linked list is empty" << endl;
        return;
    }
    else
    {

    }
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
}

// Printing in Reverse order.
void print_DLL_Reverse(node* &tail)
{
    if(tail == NULL)
    {
        cout << "Linked list is empty" << endl;
        return;
    }

    node* temp = tail;
    while(temp != NULL)
    {
        cout << temp -> data <<" ";
        temp = temp -> prev;
    }
    cout << endl;
}


int main()
{
    node* head = NULL;
    node* tail = NULL;
    int index=0;
    int flag = 1;
    int siz=0;
    int arry[20] = {INT_MIN};
;    while(flag == 1)
    {
        int choice;
        int data;
        cout << "Press 1: To insert node: " << endl;
        cout << "Press 2: To print Doubly linked list: " << endl;
        cout << "Press 3: To print Doubly in Reverse order: " << endl;
        cout << "Press 4: To to get the size of Linked list: " << endl;
        cout << "Press 5: To Print the array: " << endl;
        cout << "Press 6: To Exit the program: " << endl;
        cin >> choice;

        switch(choice)
        {
        case 1:
            cout << "Enter the element: " << endl;
            cin >> data;

            insert_end(head,tail,siz,data);
            break;

        case 2:
            print_DLL(head);
            break;
        case 3:
            print_DLL_Reverse(tail);
            break;
        case 4:
            cout << "Size of DLL is: " << siz << endl;
            break;
        case 6:
            flag++;
        }
    }
}

