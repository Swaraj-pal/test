#include <iostream>
using namespace std;
void merge(int arr[], int low, int mid, int high)
{
    int i,j,k;
    int p[high+1];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high)
    {
        if(arr[i] < arr[j])
        {
            p[k++]=arr[i++];
        }
        else 
        {
            p[k++]=arr[j++];
        }
    }
    while(i<=mid)
    {
        p[k++]=arr[i++];
    }
    while(j<=high)
    {
        p[k++]=arr[j++];
    }
    for(i=low;i<=high;i++)
    {
        arr[i]=p[i];
    }
}

void RecursiveMergeSort(int arr[], int low, int high)
{
    if(low<high)
    {
       int mid=(low+high)/2;
       RecursiveMergeSort(arr, low, mid);
       RecursiveMergeSort(arr, mid+1, high);
       merge(arr, low, mid, high);
    }
}


int main() 
{

int a[]={9,8,7,6,5,4,3,2,1};
RecursiveMergeSort(a,0,8);
for (int i = 0; i < 9; i++)
{
   cout << a[i] << " ";
}
cout << endl;
cout << a[0] << ": Min" << endl;
cout << a[8] << ": Max" << endl;


return 0;
}