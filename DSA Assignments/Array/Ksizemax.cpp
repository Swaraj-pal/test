#include <iostream>
using namespace std;
int maximum(int 
arr[], int index, int k)
{
    int r=0;
    for(int i=index;i<k+index;i++)
    {
        if(r<(arr[i]))
        {
            r=(arr[i]);
        }
    }
    return r;
}
int main() 
{
    int size,sub;
    cin >> size >> sub;
    int a[size];
    for (int i = 0; i < size; i++)
    {
     cin >> a[i];
    }
    for (int i = 0; i < size; i++)
    {
     cout << maximum(&a[0], i, sub) << " ";
    }
    
    
    

return 0;
}