/*
we will pick each element from array and compare it with other elements, if the particular element will repeat more than one
time then we will shift the elements to left side and decrease the size by one.
*/
#include<iostream>
using namespace std;

void remove_elements(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        int cnt = 0;
        for(int j=0; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                cnt += 1;
                if(cnt >= 2)
                {
                    int k = j;
                    while(k<size)
                    {
                        arr[k] = arr[k+1];
                        k+=1;
                    }
                    size -=1;
                }
            }
        }
    }

    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }

}

int main()
{
    int arr1[10] = {1,2,3,4,5,1,3,6,7,8};
    int size1 = 10;

    int arr2[] = {4,5,6,1,7,2,1,6,8,4};
    int size2 = sizeof(arr2)/sizeof(int);
    //remove_elements(arr1,size1);
    remove_elements(arr2,sizeof(arr2)/sizeof(int));

    return 0;
}
