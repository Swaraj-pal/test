#include <iostream>
using namespace std;
class Base
{
public:
    int base=1;
    virtual void display()
    {
        cout << "Var base: " << base << endl;
    }
};
class Derived : public Base
{
public:
    int derived=2;
    void display()
    {
        cout << "Var base: " << base << endl;
        cout << "Var derived: " << derived << endl;
    }
};
int main()
{
    Base *pointer;
    Base objb;
    Derived objd;
    pointer=&objd;
    pointer->base=100;
    pointer->display();
    // pointer->derived=200; Error. As base class pointers are legally right, but can only access the base class functions. 
    Derived *ptr;
    ptr=&objd;
    ptr->base=200;
    ptr->derived=300;
    ptr->display();
     return 0;
}