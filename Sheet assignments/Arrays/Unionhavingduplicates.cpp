// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

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
        int mid = (high+low)/2;
 
        // Sort sub-lists
        RecursiveMergeSort(arr, low, mid);
        RecursiveMergeSort(arr, mid+1, high);
 
        // Merge sorted sub-lists
        merge(arr, low, mid, high);
    }
    }
class Solution
{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  
    {
        RecursiveMergeSort(a,0,n-1);
        RecursiveMergeSort(b,0,m-1);
        int count=0;
        int i=0,j=0,k=0;
        int res[n+m];
        while(i<n && j<m)
        {
            if(a[i]<b[j])
            {
                res[k++]=a[i++];
            }
            else if(a[i]>b[j])
            {
                res[k++]=b[j++];
            }
            else 
            {
                res[k++]=b[j++];
                i++;
            }
        }
        
        for(;i<n;i++)res[k++]=a[i];
        for(;j<m;j++)res[k++]=b[j];
        
        for(int i=1;i<=k;i++)
        {
            if(res[i]!=res[i-1])
            count++;
        }
        return count;
    }

};
       
// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends