#include <iostream>
using namespace std;
int main() 
{
int size,Times;
cin >> size >> Times;
int arr[size];
for (int i = 0; i < size; i++)
{
cin >> arr[i];
}
for (int i = 0; i < size-1; i++)
{
  while(arr[i]>0)
  {
      arr[i]--;
      arr[i+1]--;
  }
}
int zero=0;
for (int i = 0; i < size; i++)
{
  if(arr[i]==0)
  {
      zero++;
  }
}
if(zero!=size)
{
    cout << "NO";
}
else 
cout << "YES";

return 0;
}