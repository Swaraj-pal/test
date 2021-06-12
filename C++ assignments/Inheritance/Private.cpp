#include <iostream>
using namespace std;
class contact
{
    public: 
    long number;
    string name;
};
class registery : private contact 
{
 public:
 int Accnumber;
 void setvalue()
 {
     cout << "Enter name, number, and Acc. No. " << endl;
     cin >> name >> number >> Accnumber;
 }
 void getvalue()
 {
     cout << "Account number: " << Accnumber << endl << "Name: " << name << endl << "Number: " << number << endl;
 }
};

int main() {
registery r;
r.setvalue();
r.getvalue();
return 0;
}