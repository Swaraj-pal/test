#include <iostream>
#include <cstring>
using namespace std;
class student
{
public:
    char name[20];
    char gender;
    int rollnum;
    void setvalue()
    {
        cout << "Enter the name, gender and rollnum! " << endl;
        cin.getline(name, 20);
        cin >> gender >> rollnum;
    }
};
class test : virtual public student
{
public:
    int marks;
    void testmarks()
    {
        cout << "Test marks! " << endl;
        cin >> marks;
    }
};

class sports : virtual public student
{
public:
    int score;

    void sportsscore()
    {
        cout << "Sports score! " << endl;
        cin >> score;
    }
};

class result : public sports, public test
{
    public:
    void parameters()
    {
        cout << "Name: " << name << endl;
        cout << "gender: " << gender << endl;
        cout << "rollnum: " << rollnum << endl;
        cout << "marks: " << marks << endl;
        cout << "score: " << score << endl;
    }
    void getresult()
    {
        cout << "The result is " << (marks + score) / 2 << endl;
    }
};
int main()
{
    result r;
    r.setvalue();
    r.testmarks();
    r.sportsscore();
    r.parameters();
    r.getresult();
    return 0;
}