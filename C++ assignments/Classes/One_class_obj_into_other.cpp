#include <iostream>
using namespace std;
class Marks
{
    int rollnum;
    int marks;

public:
    Marks()
    {
        rollnum = 0;
        marks = 0;
    }
    void setvalue(int x, int y)
    {
        rollnum = x;
        marks = y;
    }
    void getvalue()
    {
        cout << "Roll number: " << rollnum << endl;
        cout << "Marks: " << marks << endl;
    }
};
class Student
{
    string name;
    Marks objM;
    public: 
    int x,y;
    string s;
    void setvalue()
    {
        cout << "Enter the name: " << endl;
        cin >> name;
        cout << "Enter the roll number and percentage: " << endl;
        cin >> x >> y;
        objM.setvalue(x,y);
    }
    void getvalue()
    {
        cout << name << " " << endl;
        objM.getvalue();
    }

};
int main()
{
    Student S;
    S.setvalue();
    S.getvalue();
    return 0;
}