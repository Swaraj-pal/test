
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num; // Reading input from STDIN
    int a[num];
    for (int i = 0; i < num; i++)
        cin >> a[i];
    int k;
    cin >> k;
    for (int i = 0; i < num; i++)
    {
        if (k == a[i])
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
