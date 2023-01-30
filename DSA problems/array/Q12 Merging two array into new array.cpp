/* Merging two array*/

#include<iostream>
using namespace std;

int main()
{
    int size1 = 5, size2 = 5;
    int arr1[size1] = {4,5,6,7,9};
    int arr2[size2] = {10,12,13,14,15};
    int size3 = size1 + size2;
    int arr3[size3] = {0};

    for(int i=0; i<size1; i++)
    {
        arr3[i] = arr1[i];
    }
    int j = 0;
    for(int i = size1; i<size3; i++)
    {

        arr3[i] = arr2[j];
        j++;
    }

    for(int i = 0; i< size3; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}
