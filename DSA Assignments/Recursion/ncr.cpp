#include <iostream>
#include <string>
using namespace std;
static int steps=0;
void Hanoi(int x, int a, int b, int c)
{
  if(x>0)
  {
    Hanoi(x-1, a, c, b);
    cout << a << " to " << c << endl; 
    Hanoi(x-1, b, a, c);
  }
}
int main()
{
  long int x;
  cin >> x;
  for (int i = 0; i < x; i++)
  {
    long long int y;
    cin >> y;
    Hanoi(y,1,2,3);
    cout << steps << endl;
    steps=0;
  }  
  return 0;
}