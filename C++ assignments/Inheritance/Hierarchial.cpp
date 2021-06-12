#include <iostream>
using namespace std;
class student
{
    protected:
    char name[30];
    int clss;
    char gender;
    public: 
    void setbasics()
    {
        cout << "Enter name, class and gender! " << endl;
        cin.ignore(1);
        cin.getline(name,30); 
        cin >> clss;
        cin >> gender; 
    }
    void getbasics()
    {
        cout << "Name: " << name << endl << "Class: " << clss << endl << "Gender: " << gender << endl;
    }
};
class Academics: public student
{
  protected:
  int marks;
  int rank;
  public:
  void setacademics()
  {
      setbasics();
      cout << "Enter marks and rank! " << endl;
      cin >> marks >> rank;
  }
  void getacademics()
      {
          getbasics();
          cout << "Marks: " << marks << endl << "Rank: " << rank << endl;
      }
};
class physique: public student
{
  protected:
  int height;
  int weight;
  public:
  void setphysique()
  {
      setbasics();
      cout << "Enter height and weight! " << endl;
      cin >> height >> weight;
  }
  void getphysique()
      {
          getbasics();
          cout << "height: " << height << endl << "weight: " << weight << endl;
      }
};
int main() 
{
Academics A;
A.setacademics();
A.getacademics();
physique p;
p.setphysique();
p.getphysique();
return 0;
}