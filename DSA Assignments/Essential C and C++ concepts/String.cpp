#include <iostream>
using namespace std;
int prime(int &x)
{
    int count=0;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        count++;
    }
    if(count==0)
    return 1;
    else 
    return 0;
}
int nearprime(int &x)
{
    int y,min;
    y=x;
    

}
int main() 
{

return 0;
}