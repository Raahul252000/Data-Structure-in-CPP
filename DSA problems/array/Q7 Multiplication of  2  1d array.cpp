#include<iostream>
using namespace std;

int* Multiply_array(int arr1[],int arr2[],int arr3[],int size)
{
    for(int i=0; i<size; i++)
    {
        arr3[i] = arr1[i] * arr2[i];
    }
    return arr3;
}
int main()
{
    int arry1[] = {4,7,8,9,1,6};
    int arry2[] = {10,20,30,40,50,60};
    int array3[] = {0};

    int* result = Multiply_array(arry1,arry2,array3,sizeof(arry1)/sizeof(int));
    for(int i=0; i < 6; i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}
