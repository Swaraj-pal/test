#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
}*front=NULL,*rear=NULL;
void enqueue(int x)
{
    Node *t;
    t= new Node;
    if(t==NULL)
    cout <<"FULL";
    else
    {
        t->data=x;
        t->next=NULL;
        if(front==NULL&&rear==NULL)
        {
            front=t;
            rear=t;
        }
        else 
        {
            rear->next=t;
            rear=t;
        }
    }
}
int dequeue()
{
  int x=-1;
  Node *q;
  q= new Node;
  if(front==NULL)
  cout << "Bhaag" << endl;
  else
  {
      x=front->data;
      q=front;
      front=front->next;
      free(q);
  }
  return x;
}
void display()
{
    Node *p=new Node;
    p=front;
    while(p)
    {
        cout << p->data << endl;
        p=p->next;
    }
}
int main() 
{
int A[]={1,2,3,4,5};
for (int i = 0; i < 5; i++)
{
    enqueue(A[i]);
}
display();
for (int i = 0; i < 5; i++)
{
    dequeue();
}
display();
return 0;
}