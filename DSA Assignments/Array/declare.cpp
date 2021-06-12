#include <iostream>
using namespace std;
int main() {
int a[2][3];
int *b[3];
int **c;
b[0]= new int[4];
b[1]= new int[4];
c= new int*[2];
c[0]= new int[4];
c[1]= new int[4];
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 4; j++)
    {
     cout << a[i][j] << endl;
    }
}
cout << endl;
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 4; j++)
    {
     cout << b[i][j] << endl;
    }
}
cout << endl;for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 4; j++)
    {
     cout << c[i][j] << endl;
    }
}
cout << endl;
return 0;
}