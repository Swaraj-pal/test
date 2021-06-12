#include <iostream>
using namespace std;
int main()
{
 int n;
 cout << "Enter the year";
 cin >> n;
 if(n%100==0&&n%400==0)
 cout << "Leap year";
else if(n%4==0)
cout << "Leap year";
else 
cout << "Bhakk";
return 0;
}