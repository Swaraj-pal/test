#include <iostream>
using namespace std;
void testfunction()
{
    class test1
    {
      private:
      int num;
      public:
      void setvalue(int m)
      {
          num=m;
      } 
      int getvalue()
      {
          return num;
      }
    };
    test1 T1;
    T1.setvalue(1);
    cout << "Out side main Test 1 value: " << T1.getvalue() << endl;
}
int main() {
    testfunction();
    class test2

    {
    private:
    int num;
    public:
    void setvalue(int x)
    {
        num=x;
    }
    int getvalue()
    {
        return num;
    }
    };
    test2 T2;
    T2.setvalue(2);
    cout << "Inside main Test 2 value: " << T2.getvalue() << endl;
return 0;
}