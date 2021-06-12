#include <iostream>
#include <string>
int primecheck(int x)
{
    for (int i = 2; i < x; i++)
    {
      if((i%x)==0)
      return 0;
      break;
    }
    return 1;
}
using namespace std;
int main() 
{
int count;
cin >> count;
string s;
for (int i = 0; i < count; i++)
{
 int hash[26]={0};
 getline(cin, s);
 int sum1=0,sum2=0;
 for (int j = 0; j < s.length(); j++)
 {
    hash[s[j]-97]++;
 }
 for (int j = 0; j < s.length(); j++)
 {
    if(hash[j]&&primecheck(hash[j]))
    sum1++;
    else if(hash[j])
    sum2++;
 }
 if(sum1==sum2)
 cout << "YES" << endl;
 else cout << "NO" << endl;
}

return 0;
}