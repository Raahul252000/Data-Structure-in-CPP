#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int occurance = -1;
    int num;
    vector<int> marks{12,3,5,12,3,8,6,6};
    cout << "Enter the element: " << endl;
    cin >> num;

    // To check the last occurance of element we are traveling from 0 index to last index.
/*     for(int i=0; i< marks.size(); i++)
 *     {
 *         if(marks[i] == num)
 *         {
 *             occurance = i;
 *         }
 *     }
 */

    // But we can traverse from last of the vector because then, we need to check only the 1st occurance only.
    for(int i = (marks.size()-1); i>=0; i--)
    {
        if(marks[i] == num)
        {
            occurance = i;
            break;
        }
    }

    if(occurance != -1)
    {
        cout << "The last occurance of " << num << " is: " << occurance << endl;
    }
    else{
        cout << num << " not present" << endl;
    }
    return 0;
}
