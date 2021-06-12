#include <iostream>
using namespace std;
int main() {
char a,b;
cout << "Enter the character"<< endl;
cin >> a;
if(a>='A'&&a<='Z')
b=a+32;
else if(a>='a'&&a<='z')
b=a-32;
cout << b << endl;
return 0;
}