#include <iostream>
using namespace std;
class student{
private: 
int marks;
public:
student()
{
    marks = 0;
    cout << "Entry aayi hai aur number bande ke!" << marks << "hai" << endl;
}
};
int main() {
student s1,s2;
return 0;
}