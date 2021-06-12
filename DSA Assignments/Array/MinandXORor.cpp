#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int size;
        cin >> size;
        long long a[size], minimum = INT_MAX;
        for (int j = 0; j < size; j++)
        {
            cin >> a[j];
        }
        sort(a, a + size);
        for (int j = 0; j < size - 1; j++)
        {
            minimum = min(minimum, (a[j] ^ a[j + 1]));
        }
        cout << minimum << endl;
    }

    return 0;
}