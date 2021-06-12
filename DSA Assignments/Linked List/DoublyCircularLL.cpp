#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *prev;
    Node *next;
}*head, *last;
int main() 
{
int a[]={1,2,3,4,5,6};
head=new Node;
head->data=a[0];
head->next=head;
last=head;
for (int i = 1; i < 6; i++)
{
   Node *temp=new Node;
   temp->data=a[i];
   last->next=temp;
   temp->prev=last;
   temp->next=head;
   last=temp;
}
head->prev=last;
Node *p;
p=head;
do
{
    cout << p->data << endl;
    p=p->next;
}while(p!=head);
return 0;
}