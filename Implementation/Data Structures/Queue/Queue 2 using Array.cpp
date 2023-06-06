/*
so we will create Queue using class, so that our our Queue would be safe.
Our class would contain four data members and some function that will help us to
maintain and store the elements.

Four data members:
1) data(int): this is 'int' because our Queue will contain only 'int' type of data as of now.
2) nextIndex(int): it will keep the track of position where the next element will be stored. so initially the value will be Zero (0).
3) frontIndex(int): it will store index of the front element of the Queue. Initially there is not front element so the value will be -1.
4) size(int): when we will Enqueue and Dequeue it will keep the track of how many elements are present currently in our Queue.
5) capacity(int): this will hold the size given by user.


*/
#include<iostream>
using namespace std;

class QueueUsingArray
{

private:
    int* aray;
    int nextIndex;
    int frontIndex;
    int sizee;
    int capacity;

public:
//constructor
    QueueUsingArray(int siz)
    {
        aray = new int[siz];
        nextIndex = 0;
        frontIndex = -1;
        sizee = 0;
        capacity = siz;
        cout << "Queue of size " << capacity << " is created." << endl;
    }

// size funtion
    int getSize()
    {
        return sizee;
    }

// check if the Queue is empty.
    bool isEmpty()
    {
        return sizee == 0;  // if the size will 0 then it will return 'true' and when not zero it will return 'false'
    }

    void enqueue(int x)
    {
        if(sizee == capacity)
        {
            cout << "Queue is Full" << endl;
            return;
        }

        aray[nextIndex] = x;
        nextIndex = (nextIndex + 1) %   capacity;  // this expression will calculate the nextIndex value.

        // this if block will work only if the Queue is created and first time element is inserted .
        if(frontIndex == -1)
        {
            frontIndex = 0;
        }

        sizee++;
    }

 // this will return the front element of the queue.
    int front()
    {
        if(isEmpty())
        {
            cout << "Queue is empty. " << endl;
            return 0;
        }
        else
        {
            return aray[frontIndex];
        }
    }

// dequeue
    int dequeue()
    {
        if(isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return 0;
        }

        else
        {
            int x = aray[frontIndex];
            frontIndex = (frontIndex + 1) % capacity;
            sizee--;

        }

    }

};

int main()
{
    QueueUsingArray queue1(5);

    queue1.enqueue(34);
    queue1.enqueue(44);
    queue1.enqueue(12);

    cout << queue1.front();
    cout << queue1.getSize() << endl;
    return 0;
}
