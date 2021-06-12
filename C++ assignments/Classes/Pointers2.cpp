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
int x,y,size=2;
complex *c1;
c1 = new complex[size];
complex *c1temp=c1;
for ( int i = 0; i < size; i++)
{
   cout << "Enter real and imaginary part" << endl;
   cin >> x >> y;
   (*c1).setvalue(x,y);
   c1++;
}
for ( int i = 0; i < size; i++)
{
   c1temp->getvalue();
   c1temp++;
}
return 0;
}