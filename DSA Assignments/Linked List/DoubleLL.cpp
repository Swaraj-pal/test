#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
} * head, *last;
void create(int a[], int n)
{
    Node *p;
    head= new Node;
    last= new Node;
    head->data = a[0];
    head->prev = NULL;
    head->next = NULL;
    last = head;
    for (int i = 1; i < n; i++)
    {
        p = new Node;
        p->data = a[i];
        p->prev = last;
        last->next = p;
        p->next = NULL;
        last = p;
    }
}
void display(Node *q)
{
    while (q != 0)
    {
        cout << q->data << endl;
        q = q->next;
    }
}
int length(Node *q)
{
    int x = 0;
    while (q != 0)
    {
        x++;
        q = q->next;
    }
    return x;
}
void Delete(int pos)
{
  Node *p;
  p = new Node;
   p=head;
  if(pos==1)
  {

   head=head->next;
   free(p);
  }
  else 
  {
    for (int i = 0; i < pos-1; i++)
    {
        p=p->next;
    }
    p->prev->next=p->next;
    if(p->next)
    p->next->prev=p->prev;
    free(p);
  }
}
void Insert(int x, int pos, Node *q)
{
  Node *t;
  t= new Node;
  t->data=x;
  t->prev=t->next=NULL;
  if(pos==0)
  {
      t->next=head;
      head->prev=t;
      head=t;
  }
  else 
  {
      for (int i = 0; i < pos-1 && q; i++)
      {
           q=q->next;
      }
      t->next=q->next;
      t->prev=q;
      if(q->next=NULL)
      q->next->prev=t;
      q->next=t;
  }
}
void Reverse(Node *p)
{
    Node *q;
    while(p!=0)
    {
        q=p->next;
        p->next=p->prev;
        p->prev=q;
        p=p->prev;
        if (p && p->next == nullptr)
        {
            p->next = p->prev;
            p->prev = nullptr;
            head = p;
            break;
        }
    }
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    create(a, 5);
    cout << "Length: " << length(head) << endl;
    cout << endl;
    display(head);
    Node *q=head;
    Insert(7,4,q);
    Delete(3);
    q=head;
    cout << endl;
    display(q);
    q=head;
    Reverse(q);
    Node *m=head;
    cout << endl;
    display(m);      
    return 0;
}