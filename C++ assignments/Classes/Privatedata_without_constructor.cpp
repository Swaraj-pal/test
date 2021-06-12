#include <iostream>
using namespace std;
class Student{
    private:
    int marks;
    string name;
    int rollnum;
    public: 
    void setvalue(int a, string b, int c)
    {
        marks = a;
        name = b;
        rollnum =c;
    }
    void getvalue()
    {
        cout << marks << " " << name << " " << rollnum;
    }
};
int main() 
{
Student s1;
int x,y;
string z;
cout << "Enter the data of first student in the order: Marks, name and roll number!" << endl;
cin >> x >> z >> y;
s1.setvalue(x,z,y);
s1.getvalue();
return 0;
}