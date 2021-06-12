#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int psum = 500000500000;
    int count;
    cin >> count;
    int l[count],r[count];
    for (int i = 0; i < count; i++)
    {
        cin >> l[i] >> r[i];
    }
    sort(l,l+count);
    sort(r,r+count);

    cout << psum;

    return 0;
}