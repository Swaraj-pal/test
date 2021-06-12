#include <iostream>
using namespace std;

class Node
{
public:
    int x;
    Node *next;
};
Node *head = NULL, *last = NULL;

void insert(int pos, int data, struct Node *p)
{
    Node *t, *q;
    t = new Node;
    t->x = data;
    if (pos == 0)
    {
        t->next = head;
        head = t;
    }
    else if (pos > 0)
    {
        q = head;
        for (int i = 0; i < pos - 1 && q; i++)
        {
            q = q->next;
        }
        if (q)
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

int deletenode(int pos, Node *p)
{
    int a;
    Node *q;
    q = new Node;
        q = NULL;
    if (pos == 1)
    {
        q = head;
        a = head->x;
        head = head->next;
        free(q);
        return a;
    }
    else 
    {
        for (int i = 0; i < pos - 1 ; i++)
        {
            q = p;
            p = p->next;
        }
        if (p)
        {
            a = p->x;
            q->next = p->next;
            free(p);
            return a;
        }
    }
}
void Insertend(int x)
{
    Node *t = new Node;
    t->x = x;
    t->next = NULL;
    if (head == NULL)
        head = last = t;
    else
    {
        last->next = t;
        last = t;
    }
}
Node *search(Node *n, int key)

{
    Node *q;
    q = NULL;
    while (n != 0)
    {
        if (n->x == key)
        {
            q->next = n->next;
            n->next = head;
            head = n;
            return n;
        }
        q = n;
        n = n->next;
    }
    return NULL;
}
Node *rsearch(Node *n, int key)
{
    if (n == NULL)
        return NULL;
    else if (key == n->x)
        return n;
    return rsearch(n->next, key);
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
    Node *p;
    p = head;
    int y;
    y= deletenode(3, p);
    p = head;
    while (p != 0)
    {
        cout << p->x << endl;
        p = p->next;
    }

    return 0;
}