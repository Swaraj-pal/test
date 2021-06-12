#include <iostream>
using namespace std;
int main() {
string base[10]={"one","two","three","four","five","six","seven","eight","nine"};
string ten[10]={"ten","twenty","thirty","forty","five","sixty","seventy","eighty","ninety","hundred"};
int num;
cout << "Enter the number" <<endl;
cin >> num;
if(num/1000)
{
 cout << base[(num%1000)-1] << " thousand";
 num=num%10;   
}
if(num/100)
{
  cout << base[(num%100)-1] << " hundred";
  num=num%10;   
}
if(num/10)
{
cout << ten[(num%10)-1] << " ";
  num=num%10;   
}
cout << base[(num%10)-1] << " ";
// for(int i=3;i>0;i--)
// while(num>0)
// {

// }


return 0;
}