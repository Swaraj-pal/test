#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    fstream file;
    file.open("Sample2.txt", ios::out);
    if(!file)
    {
        cout << "Error!" << endl;
        return 0;
    }
    cout << "File created" << endl;
    file.close();
return 0;
}