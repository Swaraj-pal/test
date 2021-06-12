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
        cout << q->data << " -> " << flush;
        display(q->next);
    }
    flag=0;
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
    display(q);   

return 0;
}