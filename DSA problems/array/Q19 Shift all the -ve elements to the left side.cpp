
/*
In this question we are shifting all the negative elements to the left and all the right elements to the right.
*/
#include<iostream>
using namespace std;

void shift_negative(int arr[],int size)
{
    int p=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i] < 0)
        {
            int temp = arr[p];
            arr[p]=arr[i];
            arr[i] = temp;
            p++;
        }
    }

    for(int i=0; i< size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[10] = {2,1,-5,6,3,-8,-9,10,-1,8};

    int arr2[10] = {-2,1,2,-2,3,4,5,-6,6,-9};
    shift_negative(arr1,10);
    shift_negative(arr2,10);
    return 0;
}

