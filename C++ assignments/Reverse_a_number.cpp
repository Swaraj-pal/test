#include <iostream>
using namespace std;
int main() {
int a,i=0,sum=0,b;  
cout << "Enter the number" << endl;
cin >> a;
while(a>0)
{
    sum=sum*10+(a%10);
    a=a/10;
    i++;
}
cout << sum << endl;
return 0;
}