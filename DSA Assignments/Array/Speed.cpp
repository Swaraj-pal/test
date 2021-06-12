#include <iostream>
using namespace std;
int main() 
{
int cases;
int cars;
cin >> cases;
for (int i = 0; i < cases; i++)
{
   cin >> cars;
   int speed[cars];
   int max=1;
   for (int i = 0; i < cars; i++)
   {
       cin >> speed[i];
   }
   for (int i = 1; i < cars; i++)
   {
       if(speed[i-1]>=speed[i])
       max++;
       else 
       speed[i]=speed[i-1];
   }   
   cout << max << endl;
}


return 0;
}