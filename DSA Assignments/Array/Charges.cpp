#include <iostream>
#include<string>
using namespace std;
int check(string s)
{
    int t=0;
    for (int i = 0; i < s.length()-1; i++)
    {
        if(s[i]=s[i+1])
        {
            t++;
        }
    }
    if(t!=0)
    return 1;  // Yet to neutralize
    else return 0; // Neutralized
}
void neutral(string *s)
{
   int i=0;
   while(i<s->length())
   {
     if(s[i]==s[i+1])
     {
         s[i]=s[i+2];
         i=i+2;
     }
   }   
}
int main() {
string s;
int size;
cin >> size;
getline(cin, s);
while(check(s)==1)
{
    neutral(&s);
}
cout << s;
return 0;
}