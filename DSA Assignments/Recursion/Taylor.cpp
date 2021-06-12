#include <iostream>
using namespace std;
float power(float number, int pow)
{
    if(pow==0)
    return 1;
    else 
    return number * power(number,pow-1);
}
int factorial(int x)
{
    if(x==1)
    return 1;
    else return factorial(x-1)*x;
}
float taylor_series(float a, int b)
{
    if(b==0)
    return 1;
    else 
    return taylor_series(a, b-1)+ power(a,b)/factorial(b);
}
int main() 
{
static float result=0;
int n;
float x;
cin >> x >> n;
result=taylor_series(x,n);
cout << result;
return 0;
}
