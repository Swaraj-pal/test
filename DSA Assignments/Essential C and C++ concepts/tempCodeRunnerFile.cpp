#include <iostream>
using namespace std;
int main() {
int size;
cin >> size;
int numbers[size],result=0;
for(int i=0;i<size;i++)
cin >> numbers[i];
for(int i=0;i<size;i++)
{
    if(numbers[i]>=10000)
    {
        result=result*10+(numbers[i]%10000);
        break;
    }
    else if(numbers[i]>=1000)
    {
        result=result*10+(numbers[i]%1000);
    break;
    }
    else if(numbers[i]>=100)
    {
        result=result*10+(numbers[i]%100);
    break;
    }
    else if(numbers[i]>=10)
    {
        result=result*10+(numbers[i]%10);
    break;
    }
    else if(numbers[i]>=1)
    {
        result=result*10+(numbers[i]%1);
    break;
    }
}
if(result%10==0)
cout << "Yes";
else 
cout << "No";
return 0;
}