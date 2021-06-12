#include <iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main() 
{
int size,lastdup,steps=0,counter=0;
cin >> size;
int a[size];
for (int i = 0; i < size; i++)
{
  cin >> a[i];
}
for (int i = 0; i < size-1; i++)
{
   if(a[i]==a[i+1])
   counter++;
}


return 0;
}