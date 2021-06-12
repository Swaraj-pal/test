#include <iostream>
using namespace std;
class point
{
    int x,y;
    public:
    point(int a, int b)
    {
        this->x=a;
        this->y=b;
    }
    point()
    {
        x=10;
        y=15;
    }
    ~point()
    {
        cout << "Khatam tata bye bye!";
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
return 0;
}