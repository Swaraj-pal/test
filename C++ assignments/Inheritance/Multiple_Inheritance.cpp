#include <iostream>
#include<string>
using namespace std;
class basicinfo
{
  protected:
  char name[30];
  long ID;
  char gender;
  public:
  void setbasicinfo()
  {
      cout << "Enter the name: " << endl;
      cin.getline(name,30);
      cout << "Enter the ID: " << endl;
      cin >> ID;
      cout << "Gender? " << endl;
      cin >> gender;
  }
  void getbasicinfo()
  {
      cout << "Name: " << name << endl << "ID: " << ID << endl << "Gender: " << gender << endl;
  }
};

class deptinfo
{
    protected:
    char deptname[30];
    char assignedwork[30];
    int time;
    public:
    void setdeptinfo()
  {
      cout << "Enter the dept name: " << endl;
      cin.ignore(1);
      cin.getline(deptname,30);
      cout << "Enter the assignedwork: " << endl;
      fflush(stdin);
      cin.getline(assignedwork,30);
      cout << "time? " << endl;
      cin >> time;
  }
  void getdeptinfo()
  {
      cout << "deptname: " << deptname << endl << "assignedwork: " << assignedwork << endl << "Time: " << time << endl;
  }
};
class Employee: public deptinfo, public basicinfo
{
  public:
  void setvalue()
  {
    cout << "Basic info daal: " << endl;
    setbasicinfo();
cout << "Dept info daal: " << endl;
    setdeptinfo();  
  }
  void getvalue()
  {
      getbasicinfo();
      getdeptinfo();
  }
};
int main() {
Employee E;
E.setvalue();
E.getvalue();
return 0;
}