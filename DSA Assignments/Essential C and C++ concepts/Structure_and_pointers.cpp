#include <iostream>
#include<string>
using namespace std;
int main() {
string s;
cin >> s;
int x[10]={0,0,0,0,0,0,0,0,0,0};
for(int i=1;i<11;i++)
{
    for (int j = 0; j <s.length(); j++)
    {
        if(s[j]=='i')
        {
            x[i-1]++;
        }
    }
}
for(int i=1;i<11;i++)
cout << i << " " << x[i-1] << endl;
return 0;
}