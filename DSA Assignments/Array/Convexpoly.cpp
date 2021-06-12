#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int size;
        cin >> size;
        int a[size], sum = 0;
        for (int j = 0; j < size; j++)
        {
            cin >> a[j];   // scanning elements
            sum = sum + a[j]; // summing up
        }
        int maxx = 0;
        for (int i = 0; i < size; i++)
        {
            maxx = max(a[i], maxx);
        }
        cout << maxx;
        sum = sum - maxx;
        if (maxx > sum)
        {
            cout << "Yes" << endl; // Sum of other sides less than largest side.
        }
        else
            cout << "No" << endl; // Sum of other sides geater than or equal to than largest side.
    }

    return 0;
}