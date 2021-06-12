#include <iostream>
using namespace std;
class contact
{
    public: 
    long number;
    string name;
};
class registery : public contact 
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
class final : public registery
{
    public:
    int IFSC;
    void setvalue()
 {
     cout << "Enter name, number, IFSC and Acc. No. " << endl;
     cin >> name >> number >> IFSC >> Accnumber;
 }
 void getvalue()
 {
     cout << "Account number: " << Accnumber << endl << "Name: " << name << endl << "Number: " << number << "IFSC: " << IFSC << endl;
 }
};
int main() {
final r;
r.setvalue();
r.getvalue();
return 0;
}