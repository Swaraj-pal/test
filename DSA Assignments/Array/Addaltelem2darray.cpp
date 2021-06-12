#include <iostream>
using namespace std;
int main()
{
    int cases;
    for (int k = 0; k < cases; k++)
    {
        int size;
        cin >> size;
        string a[size];
        for (int i = 0; i < size; i++)
        {
                cin >> a[i];
        }
        int t=0;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if ((a[i][j] == a[size - 1 - i][j]) && (a[i][j] == a[i][size - 1 - j]))
                {
                    t++;
                }
            }
        }
        cout << t << endl;
    }
    return 0;
}