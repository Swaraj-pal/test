#include <iostream>
using namespace std;
class Team
{
    int a,b;
    friend void balle(Team x, Team y);
    public:
    void setvalue(int x, int y)
    {
        a=x;
        b=y;
    }
    void getvalue()
    {
        cout << a << "/n" << b << endl;
    }
};
void balle(Team x, Team y)
{
    cout << "Jersey numbers are " << x.a << " " << y.a << "and " << x.b << " " << y.b << endl;
}
int main() {
Team c,d;
c.setvalue(25,48);
d.setvalue(48,25);
balle(c,d);
return 0;
}