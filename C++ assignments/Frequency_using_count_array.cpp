#include<iostream>
#include<cstring>
using namespace std;
int main() {
string s;
int i=0;
char k;
cout << "Enter the string" << endl;
cin >> s;
cout << "Enter the character" << endl;
cin >> k;
for(int c=0;c<s.size();c++)
{
    if(s[c]==k)
    {
        i++;
    }
}
cout << i << " times" << endl;
return 0;
}