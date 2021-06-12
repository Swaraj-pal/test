#include <iostream>
using namespace std;
int main() 
{
string text,guess;
getline(cin, text);
getline(cin, guess);
int letters=0,actual=0;
for (int i = 0; i < text.length(); i++)
{
    if(text[i]>='a'&&text[i]<='z')
    actual++;
}
for (int i = 0; i < text.length(); i++)
{
    for (int j = 0; j < guess.length(); j++)
    {
        if(text[i]==guess[j]&&text[i]>='a'&&text[i]<='z')
        letters++;
    }
}
if(letters=actual)
cout << "YES";
else 
cout << "NO";

return 0;
}