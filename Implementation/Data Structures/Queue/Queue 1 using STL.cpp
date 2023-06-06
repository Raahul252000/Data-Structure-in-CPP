/*
In C++, the STL queue provides the functionality of a queue data structure.

The queue data structure follows the FIFO (First In First Out) principle where elements that are added first will be removed first.

# Create C++ STL Queue:
In order to create a queue in C++, we first need to include the queue header file.
   ex: #include <queue>

# Once we import this file, we can create a queue using the following syntax:
   syntax: queue<type> q;
Here, 'type' indicates the data type we want to store in the queue. For example,

    // create a queue of integer data type
    queue<int> integer_queue;

    // create a queue of string data type
    queue<string> string_queue;

# C++ Queue Methods
In C++, the queue class provides various methods to perform different operations on a queue.

Methods	Description
push()	inserts an element at the back of the queue
pop()	removes an element from the front of the queue
front()	returns the first element of the queue
back()	returns the last element of the queue
size()	returns the number of elements in the queue
empty()	returns true if the queue is empty
*/

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue <int> Queue1;

    //pushing element in queue
    Queue1.push(12);
    Queue1.push(42);
    Queue1.push(17);
    Queue1.push(57);

    // popped the first element
    Queue1.pop();

    cout << "Front: "<<Queue1.front() << endl;
    cout << "Back: "<<Queue1.back() << endl;
    cout << "Size: " << Queue1.size() << endl;
    cout << "is stack empty: " << Queue1.empty() << endl;


    return 0;
}
