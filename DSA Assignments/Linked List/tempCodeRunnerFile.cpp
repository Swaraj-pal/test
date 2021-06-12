#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *first, *last;
int main()
{
    first = new Node;
    last = new Node;
    cout << "Enter the number of elements and those elements of a sorted list! " << endl;
    int ele;
    cin >> ele;
    int a[ele];
    for (int i = 0; i < ele; i++)
    {
        cin >> a[i];
    }
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < ele; i++)
    {
        Node *t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }

    cout << "Before reversing" << endl;
    Node *p;
    p=first;
    while(p!=0)
    {
        cout << p->data << endl;
        p=p->next;
    }

    Node *j,*k,*l;
    j=NULL;
    k=NULL;
    l=first;
    
    while(l!=0)
    { 
        if(l->next->data%2==0&&l->data%2==0)
        {j=k;
        k=l;
        l=l->next;
        k->next=j;
        }
    }

    cout << "After Reversing\n";
    p=first;
    while(p!=0)
    {
        cout << p->data << endl;
        p=p->next;
    }
    return 0;
}
