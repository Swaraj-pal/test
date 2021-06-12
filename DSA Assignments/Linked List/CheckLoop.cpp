#include <iostream>
using namespace std;
class Node
{
public:
    int x;
    Node *next;
};
int isloop(Node *f)
{
 Node *q,*p;
 p=q=f;
 do
 {
   p=p->next;
   q=q->next;
   q=q?q->next:q;
 } while (p&&q&&p!=q);
 if(p==q)
 return 1;
 else return 0;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    Node *head = new Node;
    Node *temp;
    Node *last;
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
    Node *t1, *t2;
    t1=head->next->next;
    t2=head->next->next->next->next;
    t2->next=t1;
    cout <<  isloop(head) << endl;
return 0;
}