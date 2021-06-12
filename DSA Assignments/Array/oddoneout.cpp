#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + (n - 1));
    for (int i = 0; i < n; i++)
    {
       if ((2 * i + 1) != arr[i])
        {
            cout << 2 * i + 1;
            break;
        }
    }
   return 0;
}