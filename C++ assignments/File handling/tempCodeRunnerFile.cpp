#include <iostream>
#include <fstream>
using namespace std;
int main() {
fstream swaraj;
swaraj.open("open.txt",ios::out);
swaraj.close();
if(!swaraj)
{
  cout << "Error" << endl;
  return 0;
}
cout << "Created" << endl;
return 0;
}