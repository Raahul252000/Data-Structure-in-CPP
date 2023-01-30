
#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,1,3,6,7,8};
    int size = 10;

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

    return 0;
}
