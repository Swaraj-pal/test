#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main() {
int size;
cin >> size;
int a[size][2];
for (int i = 0; i < size; i++)
{
    cin >> a[i][0] >> a[i][1];
}
int j=0,k=0,l=0;
int b[size], c[size];
while(j<size)
{
    if(a[j][0])
    {
        c[l]=a[j][1];
        l++;
    }
    else
    {
        b[k]=a[j][1];
        k++;
    }
    j++;
}
sort(b, b+k);
sort(c, c+l);
for (int i = k-1; i >= 0; i--)
{
  cout << b[i] << " ";
}
for (int i = l-1; i >= 0; i--)
{
  cout << c[i] << " ";
}
return 0;
}