#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() 
{
int count;
cin >> count;
for (int i = 0; i < count; i++)
{
    int x;
    float y;
    cin >> y >> x;
    cout<< fixed << setprecision(x) << sqrt(y) <<endl;
}
return 0;
}
