#include <iostream>
using namespace std;
class Node
{
public:
    int x;
    Node *next;
};
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
    int count=0,sum=0;

    Node *p;
    p=head;
    while(p!=0)
    {
        cout << p->x << endl;
        count++;
        sum=sum+p->x;
        p=p->next;
    }
    cout << "Sum: " << sum << endl;
    cout << "Count: " << count << endl;
    return 0;
}