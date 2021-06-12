#include <iostream>
using namespace std;
int main() {
int n,space,k=0;
cout << "Enter the number of lines" <<endl;
cin >> n;
for(int i=1;i<=n;i++)
 {
     for(space=0;space<n-i;space++)
     {
         cout << " ";
     }
     while(k!=(2*i)-1)
     {
         cout << "^";
         k++;
     }
     k=0;
     cout<<"\n";
 }
return 0;
}