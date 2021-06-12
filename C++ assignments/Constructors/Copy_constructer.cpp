#include <iostream>
using namespace std;
class point
{
    int x,y;
    public:
    point(int a, int b)
    {
        x=a;
        y=b;
    }
    point(const point &p)
    {
        x=p.x;
        y=p.y;
    }
    void display()
    {
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }
};
int main() {

point X1(10,15);
X1.display();
point X2 = X1;
X2.display();
return 0;
}