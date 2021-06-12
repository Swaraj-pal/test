#include <iostream>
using namespace std;
int steps = 0;
int oddcheck(int arr[], int x)
{
    int zeroes = 0, t = 0;
    for (int i = 0; i < x; i++)
    {
        if (arr[i] % 2 != 0)
        {
            t++; //odd elements are there
        }
        if (arr[i] == 0)
        {
            zeroes++;
        }
    }
    if (t && zeroes != x)
        return 1; //odd elements are present and all aren't zeroes
    else if (t == 0 && zeroes != x)
        return 0; // all even and contains some non zero elements
    else if (t == 0 && zeroes == x)
        return 2; //all zeroes
}
void decrement(int arr[], int x)
{
    for (int j = 0; j < x; j++)
    {
        if (arr[j] % 2 != 0)
        {
            arr[j]--;
            steps++;
        }
    }
}
void halfthevalue(int arr[], int n)
{
    for (int j = 0; j < n; j++)
    {
        arr[j] = arr[j] / 2;
    }
    steps++;
}
int main()
{
    int size;
    cin >> size;
    int a[size];
    while (oddcheck(&a[0], size) != 2)
    {
        if (oddcheck(&a[0], size) == 1)
            decrement(&a[0], size);
        else if ((oddcheck(&a[0], size)) == 0)
            halfthevalue(&a[0], size);
    }
    cout << steps;

    return 0;
}