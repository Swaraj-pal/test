// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class solution
{
public:
    void mergeSortedArrays(int *arr1, int n1, int *arr2, int n2, int *result)
    {
        int i, j, k;
        i = 0;
        j = 0;
        k = 0;
        while (i < n1 && j < n2)
        {
            if (arr1[i] < arr2[j])
            {
                result[k] = arr1[i];
                ++k;
                ++i;
            }
            else
            {
                result[k] = arr2[j];
                ++k;
                ++j;
            }
        }
        while (i < n1)
        {
            result[k] = arr1[i];
            ++k;
            ++i;
        }
        while (j < n2)
        {
            result[k] = arr2[j];
            ++k;
            ++j;
        }
    }
    void dispalyArray(int *arr, int n)
    {
        for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    };
}
// { Driver Code Starts.

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        long long arr1[n], arr2[m];

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);

        for (int i = 0; i < n; i++)
            cout << arr1[i] << " ";

        for (int i = 0; i < m; i++)
            cout << arr2[i] << " ";

        cout << endl;
    }

    return 0;
}
// } Driver Code Ends