#include <iostream>
using namespace std;
int main() 
{
int count, k;
cin >> count >> k;
int a[count];
for (int i = 0; i < count; i++)
{
cin >> a[i];
}

int j=0;
int skip=0,n=0;
while(j<count)
{
skip=0,n=0;
while(skip<2)
{
   if(a[j]<k)
   {
       n++;
   }
   else skip++;
   j++;
}
}
cout << n << endl;
return 0;
}