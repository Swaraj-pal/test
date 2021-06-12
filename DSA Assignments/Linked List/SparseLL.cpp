#include <iostream>
using namespace std;
class Node 
{
    public:
    int row;
    int column;
    int data;
    Node *next;
}*head,*last;
int main() 
{
   int rows, columns, nonzero;
   cout << "Enter the number of rows, columns and Non zero elements" << endl;
   cin >> rows >> columns >> nonzero;
   Node *temp;
head= new Node;
last= new Node;
   for (int i = 0; i < nonzero; i++)
   {
      int a,b,c;
      temp=new Node;
      cout << "Enter row, column and data";
      cin >> a >> b >> c;
      if(i==0)
      {
        head->row=a;
        head->column=b;
        head->data=c;
        head->next=NULL;
        last=head;
      } 
      else 
      {
          temp = new Node;
          temp->row=a;
        temp->column=b;
        temp->data=c;
        temp->next=NULL;
        last->next=temp;
        last=temp;
      }
   }
   Node *l=head;
   for (int i = 1; i <=rows; i++)
   {
       for (int j = 1; j <=columns; j++)
       {
           if(j==l->column && i == l->row)
           {cout << l->data << " ";
           l=l->next;}
           else 
           cout << "0 ";
       }
       cout << endl;
   }
return 0;
}