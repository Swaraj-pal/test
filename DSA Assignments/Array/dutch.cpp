// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
    int sum0=0,sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        sum0++;
        else if(a[i]==1)
        sum1++;
        else if(a[i]==2)
        sum2++;
    }
    for(int i=0;i<sum0;i++)
    {
        a[i]=0;
    }
    for(int i=sum0;i<sum1;i++)
    {
        a[i]=1;
    }
    for(int i=sum1;i<sum2;i++)
    {
        a[i]=2;
    }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends