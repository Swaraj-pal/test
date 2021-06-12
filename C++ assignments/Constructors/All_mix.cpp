#include <iostream>
using namespace std;
class point
{
    int x,y;
    public:
    point(int a, int b)
    {
        this->x=a;
        this ->y=b;
                cout << "This" << endl;
    }
    point()
    {
        x=10;
        y=15;
        cout << "Normal" << endl;
    }
    point(const point &p)
    {
        x=p.x;
        y=p.y;
                cout << "Copy" << endl;
    }
    void display()
    {
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }
};
int main() {

point X1(1,2);
X1.display();
point X2;
X2.display();
point X3(X1);
X3.display();
return 0;
}