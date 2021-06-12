#include <iostream>
using namespace std;
class Node
{
public:
    int x;
    Node *next;
};
Node *head,*last;

void SortedInsert(int x, Node *p)
{
   Node *q,*s;
   s = new Node;
   q= new Node;
   q=NULL;
   s->x=x;
   s->next=NULL;
   if(p==0)
   head=s;
   else 
   {
       while(p && p->x<x)
       {
         q=p;
         p=p->next;
       }
       if(p==head) 
       {
         s->next=head;
         head=s;  
       }
       else 
       {
           s->next=q->next;
           q->next=s;
       }
   }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    head = new Node;
    last = new Node;
    Node *temp;
    head->x = a[0];
    head->next = NULL;
    last = head;
    for (int i = 1; i < 5; i++)
    {
        temp = new Node;

        temp->x = a[i];
        temp->next = NULL;

        last->next = temp;
        last = temp;
    }
    Node *b;
    b=head;
    SortedInsert(6,b);
    b=head;
    while(b!=0)
    {
        cout << b->x << endl;
        b=b->next;
    }
    return 0;
}