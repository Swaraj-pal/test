#include <iostream>
using namespace std;
class complex
{
  int real;
  int imaginary;
  public:
  complex()
  { 
      real=0;
      imaginary=0;
  }
  complex(int a, int b)
  {
      real =a;
      imaginary=b;
  }
  void setvalue(int m, int n)
  {
   real =m;
      imaginary=n;
     
  }
  void getvalue()
  {
      cout << "Complex number: " << real << " + i" << imaginary << endl; 
  }
};

int main() {
int x,y;
cout << "Enter the real and imaginary part. " << endl;
cin >> x >> y;
complex c1(x,y);
c1.getvalue();
complex *ptr;
ptr = new complex;
ptr->setvalue(x,y);
ptr->getvalue();
return 0;
}