#include <iostream>
#include<string>
using namespace std;
int main() 
{
string s="finding";
long int x,h;
x=0;
h=0;
for (int i = 0; i < s.length(); i++)
{
    x=1;
    x=x<<s[i]-97;
    if(x&h>0)
    cout << "Duplicate: " << s[i] << endl;
    else 
    h=x|h;
}

return 0;
}