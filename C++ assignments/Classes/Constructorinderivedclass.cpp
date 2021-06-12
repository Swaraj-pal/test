#include <iostream>
using namespace std;
class A
{
    
 int a;
 public:
 A(int x)
 {
     a=x;
           cout << "A Constructor called and the value is: " << a << endl;
 }
};
class B
{
    
 int b;
public:
 B(int y)
 {
     b=y;
          cout << "B Constructor called and the value is: " << b << endl;
 }
};
class C: public A, public B{
    int data;
    public:
    C(int l, int m, int n): A(l), B(m)
    {
      data=n;
      cout << "C Constructor called and the value is: " << data << endl;
    }
    
};
int main() {
C c(1,2,3);
return 0;
}