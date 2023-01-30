/*
Merging two array with single loop while loop.
*/

#include<iostream>
using namespace std;

int main()
{
    int size1 = 5, size2 = 5, size3=size1+size2;
    int arr1[size1] = {2,3,4,5,6};
    int arr2[size2] = {10,11,12,13,14};
    int arr3[size3]={0};
    int i=0;
    int j=0;
    while(i<size3)
    {
        if(i<size1)
        {
            arr3[i] = arr1[i];
            i++;
        }
        else
        {
            arr3[i] = arr2[j];
            i++;
            j++;
        }
    }
    for(int i=0; i<size3; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}

