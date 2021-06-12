#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size], b[size], sum1 = 0, sum2 = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < size; i++)
    {
        cin >> b[i];
    }
    int minus = 0;
    for (int i = 0; i < size; i++)
    {
        if (b[i] == -1)
        {
            minus++;
        }
    }
    if (minus)
    {
        cout << "INFINITE" << endl;
    }
    else if (minus = 0)
        cout << "1";
    else if (sum2 < sum1 + 1)
        cout << "0";

    return 0;
}