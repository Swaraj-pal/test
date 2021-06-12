#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main() 
{
int size;
cin >> size;
int a[size], lastduplicate=0;
for (int i = 0; i < size; i++)
{
   cin >> a[i];
}
sort(a,a+size);
if(a[0]==a[1])
{
    lastduplicate=a[0];
}
for (int i = 0; i < size; i++)
{
   if(a[i]=a[i+1]&&a[i]!=lastduplicate)
   {
     
   }
}
return 0;
}