#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
int size;
cout << "Enter size and elements" << endl;
cin >> size;
int arr[size];
for (int i = 0; i < size; i++)
{
    cin >> arr[i];
}
sort(arr,arr+size);
int hash[arr[size-1]+1]={0};
for (int i = 0; i < size; i++)
{
    hash[arr[i]]++;
}
for (int i = 0; i < arr[size-1]+1; i++)
{
    if(hash[i]!=0)
    cout << i << " was repeated " << hash[i] << " times" << endl; 
}
return 0;
}

