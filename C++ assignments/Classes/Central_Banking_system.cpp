#include <iostream>
using namespace std;
class Bank
{
  long balance;
  char name[30];
  int acno;
  public:
  int x,w;
  void openaccount()
  {
      cout << "Enter your Name!" << endl;
      cin >> name;
      cout << "Enter acc number: " << endl;
      cin >> acno;
      cout << "Enter opening balance " << endl;
      cin >> balance;
  }
  void showaccount()
  {
      cout << "Name: " << name << endl;
      cout << "Acc number: " << acno << endl;
      cout << "Balance: " << balance << endl;
  }
  void deposit()
  {
      cout << "Enter the amount you wish to deposit!" << endl;
      cin >> x;
      if(x<0)
      cout << "Bhakk " << endl;
      else 
      {
          balance=balance+x;
          cout << "Final balance: " << balance << endl;       
      }
  }
  void withdrawal()
  {
      cout << "Enter the amount for withdrawal" << endl;
      cin >> w;
      if(w>balance)
      cout << "Bhakk! " << endl;
      else
      {
          balance=balance-w;
          cout << "Final balance: " << balance << endl;
      }
  }
  int search(int o)
  {
      if(acno==o)
      {
          showaccount();
          return 1;
      }
      else 
      return 0;
  }
};
int main() 
{
Bank B[3];
int found=0,a,ch,i;
for(i=0;i<3;i++)
B[i].openaccount();
do {
        // display options
        cout << "\n\n1:Display All\n2:By Account No\n3:Deposit\n4:Withdraw\n5:Exit" << endl;
        cout << "Input your choice! " << endl;
        cin >> ch;
        switch(ch)
        {
            case 1:
            for(i=0;i<3;i++)
            B[i].showaccount();
            break;
            case 2:
            cout << "Account number? " << endl;
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = B[i].search(a);
                if (found)
                    break;
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
            case 3:
            for (i = 0; i <= 2; i++) {
                found = B[i].search(a);
                if (found)
                    B[i].deposit();
                    break;
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
            case 4:
                        for (i = 0; i <= 2; i++) {
                found = B[i].search(a);
                if (found)
                    B[i].withdrawal();
                    break;
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
            case 5:
            cout << "Have a nice day" << endl;
            break;
        default:
            cout << "Wrong Option" << endl;
        }
    } while (ch != 5);    
return 0;
}