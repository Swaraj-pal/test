#include <iostream>
using namespace std;
int main() {
int n,digit;
cout << "Enter the lines!" <<endl;
cin >> n;
for(int i=0;i<n;i++)
{
    for(int j=0;j<=i;j++)
{
      if(j==0||i==0)
      {
        digit =1;
      }
      else
      digit = digit * (i-j+1)/j;
      cout << digit << " ";
}
cout << "\n";
}

return 0;
}