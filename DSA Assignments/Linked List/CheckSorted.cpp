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
    cout << "Enter the number of elements and those elements! " << endl;
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
    Node *d;
    d = new Node;
    d = first;
    int prev = a[0];
    int m=0;
    while (d != 0)
    {
        if (d->data < prev)
        {
            cout << "NO" << endl;
            break;
        }
        else
        {d = d->next;
        m++;
        }     
    }
    if(m==ele)
    cout << "YES" << endl;

    return 0;
}
