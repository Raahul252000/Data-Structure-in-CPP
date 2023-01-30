/*
finding the missing number from the given array.
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int);
    int i;
    for( i = 0; i<size; i++)
    {
        if(arr[i] != i+1)
        {
            break;
        }

    }
    cout << "missing element is: " << i+1;

    return 0;
}

