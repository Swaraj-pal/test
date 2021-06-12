#include <iostream>
using namespace std;
int main() {
int n;
long result=1; 
cout << "Enter the number" <<endl;
cin >> n;
while(n>0)
{
 result=result*n;
 n--;
}
cout << result;
return 0;
}