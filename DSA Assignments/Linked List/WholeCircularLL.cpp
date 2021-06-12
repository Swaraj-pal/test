#include <iostream>
using namespace std;
class Node 
{
    public:
    int data;
    Node *next;
}*head;
void display(Node *q)
{ 

    static int flag=0;
    if(q!=head || flag==0)
    {
        flag=1;
        cout << q->data << endl << flush;
        display(q->next);
    }
    flag=0;
}
void insert(int x, int pos, Node *p)
{
    Node *t= new Node;
    t->data=x;
    if(pos==0)
    {
        if(head==NULL)
        {
            head=t;
            head->next=head;
        }
        else 
        {
         while(p->next!=head)
          p=p->next;         
             t->next=head;
             p->next=t;
        }
    }
    else 
    {
        for (int i = 0; i < pos-1; i++)
        {
           p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}
void Delete(int pos)
{
    Node *p,*q;
    p=head;
    q=NULL;
    if(pos==1)
    {
        if(head==NULL)
        {
            free(head);
            head=NULL;
        }
        else 
        {
            while (p->next!=head)
            {
             p=p->next;
            }
            p->next=head->next;
            free(head);
            head=p->next;
        }
    }
    else 
    {
        for (int i = 0; i < pos-1; i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        free(p);
    }
}
int main() 
{
    int a[] = {1, 2, 3, 4, 5};
    head = new Node;
    Node *temp;
    Node *last;
    head->data = a[0];
    head->next = NULL;
    last = head;
    last->next=head;
    for (int i = 1; i < 5; i++)
    {
        temp = new Node;

        temp->data = a[i];
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
    Node *p;
    p = head;
    do
    {
      cout << p->data << endl;
      p=p->next;
    }
    while (p!=head);
    Node *q;
    q=head;
    insert(3,4,q);
    Delete(2);
    q=head;
    display(q);   

return 0;
}