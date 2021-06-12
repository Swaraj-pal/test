#include <iostream>
using namespace std;
class Student
{
    public: 
    int rollno;
    string name;
};
class Sports : public Student 
{
 public:
 int Sportscode;
 void setvalue()
 {
     cout << "Enter rollno, name, and sportscode" << endl;
     cin >> rollno >> name >> Sportscode;
 }
 void getvalue()
 {
     cout << "Roll number: " << rollno << endl << "Name: " << name << endl << "Sportscode: " << Sportscode << endl;
 }
};

int main() {
Sports S;
S.setvalue();
S.getvalue();
return 0;
}