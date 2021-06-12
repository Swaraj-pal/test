#include <iostream>
using namespace std;
int main()
{
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[n];
    }
    int pairs = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (((a[i] + a[j]) % k) == x && ((a[i] * a[j]) % k) == y)
                pairs++;
        }
    }
    cout << pairs;

    return 0;
}