#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *first, *last, *first1, *last1;
int main()
{
    first = new Node;
    last = new Node;
    cout << "Enter the number of elements and those elements of the sorted lists! " << endl;
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

    
    first1 = new Node;
    last1 = new Node;
    cout << "Enter the number of elements and those elements of a both the sorted lists! " << endl;
    int ele1;
    cin >> ele1;
    int b[ele1];
    for (int i = 0; i < ele1; i++)
    {
        cin >> b[i];
    }
    first1->data = b[0];
    first1->next = NULL;
    last1 = first1;
    for (int i = 1; i < ele1; i++)
    {
        Node *t = new Node;
        t->data = b[i];
        t->next = NULL;
        last1->next = t;
        last1 = t;
    }
    cout << "Before reversing, Array 1: " << endl;
    Node *p;
    p = first;
    while (p != 0)
    {
        cout << p->data << endl;
        p = p->next;
    }

    cout << "Before reversing, Array 2:" << endl;
    
    Node *s;
    s = first1;
    while (s != 0)
    {
        cout << s->data << endl;
        s = s->next;
    }
    Node *third, *tail;

    if (first->data < first1->data)
    {
        third = tail = first;
        first = first->next;
        third->next = NULL;
    }
    else
    {
        third = tail = first1;
        first1 = first1->next;
        third->next = NULL;
    }
    while (first && first1)
    {
        if (first->data < first1->data)
        {
            tail->next = first;
            tail = first;
            first = first->next;
            tail->next = NULL;
        }
        else
        {
            tail->next = first1;
            tail = first1;
            first1 = first1->next;
            tail->next = NULL;
        }
    }
    if (first)
        tail->next = first;
    if (first1)
        tail->next = first1;
    Node *w;
    w = third;
    cout << "After merging" << endl;
    while (w != 0)
    {
        cout << w->data << endl;
        w = w->next;
    }
    return 0;
}