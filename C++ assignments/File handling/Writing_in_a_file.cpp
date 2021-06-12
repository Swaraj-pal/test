#include <iostream>
#include <fstream>
using namespace std;
int main() {
string s;
fstream swaraj1;
swaraj1.open("open1.txt",ios::out);
swaraj1<<"This is me!\n";
// swaraj1>>s;
ifstream swaraj2;
swaraj2.open("open1.txt");
while(swaraj2.eof()==0)
{getline(swaraj2,s);
cout << s<<endl;}
return 0;
}