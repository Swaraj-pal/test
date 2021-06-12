#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
int main()
{
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
        cin >> a[i];
    Node *head = new Node;
    Node *last = new Node;
    Node *temp;
    head->data = a[0];
    head->next = NULL;
    last = head;
    for (int i = 1; i < size; i++)
    {
        temp = new Node;
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    Node *test;
    test = new Node;
    test =  head;
    Node *p, *q, *r;
    p = new Node;
    q = new Node;
    r = new Node;
    r = NULL;
    q = head;
    p = head->next;
    if (q->data % 2 == 0 && p->data % 2 == 0)
    {
        q->next=p->next;
        p->next=q;
        head = p;
        r=p;
        p=q->next;
    }
    r = head;
    q = head->next;
    p = head->next->next;
    while (p != 0)
    {
        if (p->data % 2 == 0 && q->data % 2 == 0)
        {
            q->next = p->next;
            r->next = p;
            p->next = q;
            r = p;
            p = q->next;
        }
        r = q;
        q = p;
        p = p->next;
    }
    while (test != 0)
    {
        cout << test->data << " ";
        test = test->next;
    }
    return 0;
}