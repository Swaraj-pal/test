#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of lines!" << endl;
    cin >> n;
    int a[n][n];
    int k, l, last_col, last_row;
    k = l = 0;
    last_col = last_row = (n - 1);
    int i, j;
    i = 0;
    j = 1;
    while (k <= last_row && k <= last_col)
    {
        for (i = l; i < last_col; i++)
        {
            a[k][i] = j++;
        }
        k++;

        for (i = k; i < last_row; i++)
        {
            a[i][last_col] = j++;
        }    
        last_col--;

        if (k <= last_row)
        {
            for (int i = last_col; i >= l; i--)
            {
                a[last_row][i] = j++;
            }
            last_row--;
        }
        if (l <= last_col)
        {
            for (i = last_row; i <= k; i++)
            {
                a[i][l] = j++;
            }
            l--;
        }
        for (int m = 0; m < n; m++)
        {
            for (int p = 0; p < n; p++)
            {
                cout << a[m][n] << " ";
            }
            cout << "\n";
        }
        return 0;
    }
}