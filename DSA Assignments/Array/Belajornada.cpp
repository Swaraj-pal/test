#include <iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main() 
{
int size;
cin >> size;
int a[size];
long long int totalsum=0, sum1=0, maxproduct=1;
for (int i = 0; i < size; i++)
{
   cin >> a[i];
   totalsum=totalsum+a[i];   
}
for (int i = 0; i < size; i++)
{
   cin >> a[i];
   sum1=sum1+a[i];
   maxproduct=max(maxproduct,sum1*(totalsum-sum1));   
}
cout << maxproduct;
return 0;
}