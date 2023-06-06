#include<vector>
#include<iostream>

using namespace std;

int main()
{
    vector<int> nums = {12,-10,5,-6,11,18,19,-7};
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i] < 0)   // if the element is smaller than zero then remove the element.
        {
            nums.erase(nums.begin()+i);
        }
    }

    for(int el : nums)
    {
        cout << el << endl;
    }
    return 0;
}
