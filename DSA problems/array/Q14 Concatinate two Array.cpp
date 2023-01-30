/*
Concatinate two array.
*/
#include<iostream>
using namespace std;

int main()
{
    int size1,size2;
    cout << "Enter the size of array 1 and array 2: " << endl;
    cin >> size1;
    cin >> size2;
    int arr1[size1] = {1,2,4,5,6};
    int arr2[size2] = {10,11,13,14,15};

    for(int i=0; i<size2; i++)
    {
        size1 = size1+i;
        arr1[size1] = arr2[i];
    }

    for(int i=0; i<size1; i++)
    {
        cout << arr1[i] << " ";
    }
    return 0;
}
