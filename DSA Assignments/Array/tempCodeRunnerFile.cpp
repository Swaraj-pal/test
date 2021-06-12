#include <iostream>
#include<algorithm>
using namespace std;
int main() 
{
int size, k, pairs=0;
cin >> size >> k;
int a[size];
for(int i=0;i<size;i++)
cin >> a[i];
sort(a,a+size);
int j=0,t=size-1;
while(j<t)
{
   if(a[j]+a[t]==k&&a[j]!=a[j+1]&&a[t]!=a[t+1])
   {
    pairs++;
    j++;
    t--;
   }
   else if((a[j]+a[t]==k&&a[j]==a[j+1]&&a[t]!=a[t+1]))
   {
       pairs++;
       j++;
   }
   else if((a[j]+a[t]==k&&a[j]!=a[j+1]&&a[t]==a[t+1]))
   {
       pairs++;
       t--;
   }
   else if((a[j]+a[t]==k&&a[j]==a[j+1]&&a[t]==a[t+1]))
   {
       pairs=pairs+2;
       t--;
   }
   else if(a[j]+a[t]<k)
   {
       j++;
   }
   else if(a[j]+a[t]>k)
   t--;

   
}
cout << pairs;
return 0;
}