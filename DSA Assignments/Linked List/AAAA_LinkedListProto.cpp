#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class LinkedList
{
private:
    Node *first;

public:
    LinkedList()
    {
        first = NULL;
    }
    LinkedList(int a[], int n);
    ~LinkedList();

    void display();
    void insert(int x, int pos);
    int Delete(int pos);
    int length();
};

LinkedList ::LinkedList(int a[], int n)
{
    Node *last, *t;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 0; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
LinkedList ::~LinkedList()
{
    Node *p = first;
    while (first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}
void LinkedList ::display()
{
    Node *p = first;
    while (p != 0)
    {
        cout << p->data << endl;
        p = p->next;
    }
    cout << endl;
}
void LinkedList ::insert(int x, int pos)
{
    Node *p, *q;
    q = first;
    if (pos < 0 || pos > length())
        return;
    p = new Node;
    p->data = x;
    if (pos == 0)
    {

        p->next = first;
        first = p;
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            q = q->next;
        }
        p->next = q->next;
        q->next = p;
    }
}
int LinkedList ::Delete(int pos)
{
    Node *q = NULL, *p = first;
    int x = -1;
    if (pos == 1)
    {
        q = first;
        first = first->next;
        x = q->data;
        free(q);
    }
    else
    {
        for (int i = 0; i < pos; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
    }
    return x;
}
int LinkedList :: length()
{
    Node *p=first;
    int x=0;
    while(p!=0)
    {
        x++;
        p=p->next; 
    }
    return x;
}
int main()
{
    int A[]={1,2,3,4,5};
 LinkedList l(A,5);

 l.insert(3,10);

 l.display();
    return 0;
}