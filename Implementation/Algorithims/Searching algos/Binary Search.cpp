/*
Binary Search is defined as a searching algorithm used in a sorted array by repeatedly dividing the search interval in half.
The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(log N).

# Conditions for when to apply Binary Search in a Data Structure:

  1) The data structure must be sorted.
  2) Access to any element of the data structure takes constant time.
*/


#include<iostream>
using namespace std;

// Binary search algorithim
int Binary_search(int arr[],int sizee, int key)
{
    int start = 0;
    int last = sizee - 1;

    int mid = (start + last)/2;

    while(start <= last)
    {
        // if the key is equal to mid value then we will return the mid index.
        if(arr[mid] == key)
        {
            return mid;
        }

        // if the key value is greater than mid value, it means the key value is in the right part of the array.
        if(key > arr[mid])
        {
            start = mid + 1;

        }

        // if the key value is less than mid value, it means the key value is in the left part of the array.
        else
        {
            last = mid - 1;
        }

        // start ya end ki value update hogi iss liye humko mid to bhi humko update krna hoga
        mid = (start + last)/2;

    }
    return -1;
}
int main()
{
    int even[6] = {2,4,6,8,13,26};
    int odd[5] = {3,8,11,14,19};

    cout << "The index of 8 in even array: " << Binary_search(even,6,8) << endl;

    cout << "The index of 19 in odd array is: " << Binary_search(odd,5,19) << endl;


    return 0;
}
