#include <iostream>
using namespace std;
class A
{
 private:
 int a;
 int b;
 public:
 A(int x, int y): a(x), b(y)
 {
     cout << "Value of a is: " << a << endl;
     cout << "Value of b is: " << b << endl;
cout << "Constructor bulaliya! " << endl;
  }
};
int main() {
A a(1,2);
return 0;
}