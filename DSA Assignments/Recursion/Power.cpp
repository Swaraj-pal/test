#include <iostream>
using namespace std;
int power(int number, int pow)
{
    if(pow==0)
    return 1;
    else 
    return number * power(number,pow-1);
}
int main() 
{
int num;
int powe;
cin >> num >> powe;
int result=power(num,powe);
cout << result; 
return 0;
}