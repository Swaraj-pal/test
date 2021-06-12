#include <iostream>
using namespace std;
class student 
{
  protected: 
  string name;
  int rollnum;
  char gender;
  public:
  student(string x, int y, char z)
  {
      name =x;
      rollnum=y;
      gender=z;
  }
  virtual void display(){}
};
class academics : public student
{
 private: 
 int marks;
 char grade;
 public:
 academics(string a, int b, char c, int d, char e): student(a,b,c)
   {
     marks = d;
     grade =e;
   }
   void display()
   {
       cout <<"Name: " << name << endl;
       cout <<"Roll number: " << rollnum << endl;
       cout <<"Gender: " << gender << endl;
       cout <<"Academic marks: " << marks << endl;
       cout <<"Academic grade: " << grade << endl;
   }
};
class sports : public student
{
 private: 
 int score;
 int rank;
 public:
 sports(string a, int b, char c, int d, int e): student(a,b,c)
   {
     score = d;
     rank =e;
   }
   void display()
   {
       cout <<"Name: " << name << endl;
       cout <<"Roll number: " << rollnum << endl;
       cout <<"Gender: " << gender << endl;
       cout <<"Sports score: " << score << endl;
       cout <<"Sports rank: " << rank << endl;
   }
};
int main() 
{
string f;
int g,h,i,j;
char k,l;

f="Swaraj pal kesari";
g=179;
k='M';
h=460;
i='A';
academics a(f,g,k,h,i);

f="Swaraj pal kesari";
g=179;
k='M';
h=22;
i=1;
sports s(f,g,k,h,i);

student *t[2];
t[0]=&a;
t[1]=&s;

t[0]->display();
t[1]->display();
return 0;
}