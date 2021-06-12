#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int prev = a[size - 1];
    vector<int> ans;
    ans.push_back(prev);
    for (int i = size - 2; i >= 0; i--)
    {
        if (a[i] >= prev)
        {
            ans.push_back(a[i]);
            prev=a[i];
        }
    }
    for (int i = ans.size()-1; i >=0; i--)
    {
       cout << ans[i] << " ";
    }
    

    return 0;
}