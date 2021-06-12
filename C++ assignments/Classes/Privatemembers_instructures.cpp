#include <iostream>
using namespace std;
struct test
{
  private:
  int num;
  public:
  void setvalue()
  {
      cout << "Enter the number: " << endl;
      cin >> num;
  }
  void getvalue()
  {
      cout << num << endl;
  }
};
int main() {
test t;
t.setvalue();
t.getvalue();
return 0;
}