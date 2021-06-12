#include <iostream>
#include<stack>
#include<vector>
#include<deque>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main() 
{
 int count;
 stack<int> res;
 cin >> count;
 int arr[count];
 for (int i = 0; i < count; i++)
 {
   cin >> arr[i];
 }
 for (int i = 0; i < count; i++)
 {
     int temp=arr[i];
    for (int j = i+1; j < count; j++)
    {
       if(arr[j-1]<arr[j])
       {
           temp=temp^arr[j];
       }
       else
       {
        if(temp!=arr[i])
        res.push(temp);
        break; 
       }
    }
 }
 int maximum=INT32_MIN;
 while(!res.empty())
 {
   maximum=max(res.top(),maximum);
   res.pop();
 }
cout << maximum;
return 0;
}