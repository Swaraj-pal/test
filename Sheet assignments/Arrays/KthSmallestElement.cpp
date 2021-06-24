// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
void RecursiveMergeSort(int a[], int low, int high);
    
    void merge(int arr[], int low, int mid, int high)
    {
        int i,j,k;
        int p[high+1];
        i=low;
        k=low;
        j=mid+1;
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
        for(;i<=mid;i++)p[k++]=arr[i];
        for(;j<=high;j++)p[k++]=arr[j];
        
        for(i=low;i<=high;i++)
        arr[i]=p[i];
        
        
    }
    void RecursiveMergeSort(int arr[], int low, int high)
    {
         if (low < high)
    {
        // Calculate mid point
        int mid = low + (high-low)/2;
 
        // Sort sub-lists
        RecursiveMergeSort(arr, low, mid);
        RecursiveMergeSort(arr, mid+1, high);
 
        // Merge sorted sub-lists
        merge(arr, low, mid, high);
    }
    }

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        RecursiveMergeSort(arr,l,r);

        return arr[k-1];
        
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends