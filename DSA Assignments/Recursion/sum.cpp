 #include <iostream>
 using namespace std;
 int sum(int x)
 {
     if(x==0)
     return 0;
     else 
     return sum(x-1)+x;
 }
 int main() 
 {
 int n;
 cin >> n;
 int sum1=sum(n);
 cout << sum1;
 return 0;
 }