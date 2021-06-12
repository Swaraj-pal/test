#include <iostream>
using namespace std;
class B 
{
  public:
  void say()
  {
      cout << "Hello! " << endl;
  }
};
class D: public B
{
    public:
    void say()
    {
        cout << "Hoi! " << endl;
    }
};
int main() {
B b;
b.say();
D d;
d.say();
return 0;
}