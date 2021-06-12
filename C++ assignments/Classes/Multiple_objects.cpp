#include <iostream>
using namespace std;
class Student{
    public:
    int marks[5];
    string name;
    int rollnum;
};
int main() 
{
Student s1,s2;
cout << "Enter the data of first student in the order: Marks, name and roll number!" << endl;
for(int i=0;i<5;i++)
cin >> s1.marks[i];
cin >> s1.name;
cin >> s1.rollnum;

cout << "Enter the data of second student in the order: Marks, name and roll number!" << endl;
for(int i=0;i<5;i++)
cin >> s2.marks[i];
cin >> s2.name;
cin >> s2.rollnum;


return 0;
}