#include <iostream>
using namespace std;
int main() {
int cases;
cin >> cases;
for(int i=0;i<cases;i++)
{
    int size, k;
    cin >> size >> k;
    int a[size],sum=0;
    for(int j=0;j<size;j++)
    {
        cin >> a[i];
        sum=sum+a[i];
    }
    int t=(sum)/size;
    if(t<=k)
    cout << "0" << endl;
    else cout << (t-(k*size))/(k-1) << endl;
}
return 0;
}