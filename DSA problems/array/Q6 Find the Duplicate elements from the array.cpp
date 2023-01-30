/*
This is one solution for finding the duplicate in the array but its not the optimized solution for it.
find some other solution for this question.
*/
#include<iostream>
using namespace std;

int find_duplicate(int arr[], int size)
{

    for(int i=0; i<size; i++)
    {
        int count = 0;
        int temp = arr[i];
        for(int j=0; j<size; j++)
        {
            if(temp == arr[j])
            {
                count++;
            }
        }
        if(count > 1)
        {
            return temp;
        }
    }
}

int main()
{
    int arry1[] = {2,1,4,5,6,7,9,8,9};
    int result = find_duplicate(arry1,sizeof(arry1)/sizeof(int));
    cout << "duplicate: " << result;

    return 0;
}
