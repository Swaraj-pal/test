#include <iostream>
using namespace std;
int main() 
{
int size;
cin >> size;
int arr[size];
int sum1=0,sum2=0;
for (int i = 0; i < size; i++)
{
   cin >> arr[i];
   if(arr[i])
   sum1++;
   else 
   sum2++;
}
cout << sum1-sum2;
return 0;
}