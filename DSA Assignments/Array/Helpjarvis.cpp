#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int x;
    for (int i = 0; i < size; i++)
    {
        cin >> x;
        vector<int> y;
        int l;
        for (l = 0; x != 0; l++)
        {
            y.push_back(x % 10);
            x = x / 10;
        }
        sort(y.begin(), y.end());
        for (int j = 0; j < l; j++)
        {
          cout << y[i];
        }
        cout << endl;
        int t = 0;
        for (int j = 0; j < l - 1; j++)
        {
            if (y[j + 1] - y[j] == 1)
                t++;
        }
        if (t == y[l - 1] - y[0] + 1)
            cout << "YES" << endl;
        else 
        cout << "NO" << endl;
    }
    return 0;
}