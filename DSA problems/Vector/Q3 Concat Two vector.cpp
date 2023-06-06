#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> num1 {23,21,44};
    vector<int> num2 {13,31,64};

    // this is how we can concate two vectors.
    num1.insert(num1.end(),num2.begin(),num2.end());
    for(int i:num1)
    {
        cout<< i << endl;
    }

}
