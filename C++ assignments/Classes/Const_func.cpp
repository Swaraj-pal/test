#include <iostream>
using namespace std;
class HKP
{
  int x;
  public:
  void setvalue(int m)
  {
      x=m;
  }
  int getvalue() const
  {
      return x;
  }
};
int main() {
HKP Sarmistha;
int y;
cout << "Enter Sarmistha Jhalli level " << endl;
cin >> y;
Sarmistha.setvalue(y);
cout << "Skore: " << Sarmistha.getvalue() << endl;
return 0;
}