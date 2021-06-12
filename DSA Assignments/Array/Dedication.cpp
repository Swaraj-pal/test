#include <iostream>
#include<algorithm>
using namespace std;
int main() 
{
int size;
cin >> size;
string a[size];
int b[size];
int c[size];
for (int i = 0; i < size; i++)
{
 getline(cin, a[i]);
 cin >> b[i];
 c[i]=b[i];
}
sort(c,c+size);
for (int i = 0; i < size; i++)
{
if(c[size-1]==b[i])
cout << a[i] << endl;
}
for (int i = 0; i < size; i++)
{
if(c[size-2]==b[i])
cout << a[i] << endl;
}
for (int i = 0; i < size; i++)
{
if(c[size-3]==b[i])
cout << a[i] << endl;
}


return 0;
}