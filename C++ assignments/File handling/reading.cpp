#include <iostream>
#include <fstream>
using namespace std;
int main() {
  string s;
ifstream swaraj;
swaraj.open("open1.txt",ios::in);
if(!swaraj)
{
  cout << "Error" << endl;
  return 0;
}
while(swaraj.eof()==0)
{
  getline(swaraj,s);
  cout << s<< endl;
}
return 0;
}