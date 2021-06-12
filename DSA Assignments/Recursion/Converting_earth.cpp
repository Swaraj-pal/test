#include <iostream>
using namespace std;
void converting(int x, int y, int z, int *d)
{
    while(x>y)
    {
        x=x*z;
        d++;
    }
    while((x-y)%2==0&&x==y)
    {
      x=x-2;
      d++;
    }
    do
    {
      x=x-2;
      d++;
    }
    while((x-y)%2==1&&x-y==1);     
}
void converting1(int x, int y, int *d)
{
    while((x-y)%2==0&&x==y)
    {
      x=x-2;
      d++;
    }
    do
    {
      x=x-2;
      d++;
    }
    while((x-y)%2==1&&x-y==1);     
}
int main() 
{
int t;
int a,b,c;
int steps;
cin >> t;
for (int i = 0; i < t; i++)
{
    cin >> a >> b >> c;
    if(a<b)
    {
        converting(a,b,c,&steps);
        cout << steps << endl;
    }
    else
    {
     converting1(a,b,&steps);
        cout << steps << endl;  
    }
}

return 0;
}