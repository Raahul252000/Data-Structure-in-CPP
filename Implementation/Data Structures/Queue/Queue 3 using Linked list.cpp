#include<iostream>
using namespace std;

class node
{
public:
    node* next;
    int data;
    node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

class QueueUsingLL
{
private:
    node* head;
    node* tail;
    int sizee;

public:

    QueueUsingLL()
    {
        head = NULL;
        tail = NULL;
        sizee = 0;
        cout << "Queue is created! "<< endl;
    }

    // size of Queue
    int getsize()
    {
        return sizee;
    }

    void enqueue(int data)
    {
        if(head == NULL)
        {
            node* new_node = new node(data);
            head = new_node;
            tail = new_node;
            sizee++;
            cout << data << " is enqueued !!" << endl;
        }
        else
        {
            node* new_node = new node(data);
            tail -> next = new_node;
            tail = new_node;
            sizee++;
            cout << data << " is enqueued !!" << endl;

        }
    }

    void dequeue()
    {
        if(head == NULL)
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        else
        {
            node* temp = head;
            head = temp -> next;
            int value = temp -> data;
            delete temp;
            sizee--;
            cout << value << " is dequeued !!" << endl;
        }
    }

    int getFront()
    {
        return head -> data;
    }

    int isEmpty()
    {
        return head == NULL;
    }
};

int main()
{
    QueueUsingLL q1;

    q1.enqueue(12);
    q1.enqueue(10);
    q1.enqueue(18);
    q1.enqueue(29);

    q1.dequeue();
    q1.dequeue();
    cout << "front: " << q1.getFront() << endl;
    cout << "size: " << q1.getsize() << endl;


    return 0;
}
