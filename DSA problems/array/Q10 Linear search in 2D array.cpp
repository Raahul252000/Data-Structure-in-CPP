#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout << "enter the number of row and column: " << endl;
    cin >> row >> col;
    int arry[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            int n;
            cout << "Enter the element of array: " << endl;
            cin >> n;
            arry[i][j] = n;
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << arry[i][j] << " ";
        }
        cout << endl;
    }

    int ele;
    cout << "enter the element to search: " << endl;
    cin >> ele;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(ele == arry[i][j])
            {
                cout << ele << " is present in array." << endl;
                return 0;
            }
        }
    }
    cout << ele <<" is not present." << endl;
    return 0;
}
