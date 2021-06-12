#include <iostream>
#include<fstream>
using namespace std;
int main() 
{
    string s;
fstream swaraj;
swaraj.open("New.txt",ios::out);
swaraj << "Apun hai idhar!\n";
if(!swaraj)
{
    cout << "Error" << endl;
    return 0;
}
cout << "Created successfully! "<< endl;
swaraj.close();

swaraj.open("New.txt",ios::in);
while(swaraj.eof()==0)
{
    getline(swaraj,s);
    cout<<s<<endl;
}
return 0;
}