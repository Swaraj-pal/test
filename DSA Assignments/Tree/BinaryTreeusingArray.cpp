#include <iostream>
using namespace std;
class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
} *root = new Node;
class Queue
{
private:
    int size;
    int front;
    int rear;
    Node** q;

public:
    Queue(int size);
    ~Queue();
    void Enqueue(Node *x);
    Node *Dequeue();
    bool isFull();
    bool isEmpty();
};

Queue ::Queue(int size)
{
    this->size = size;
    front = rear = -1;
    q = new Node* [size];
}
Queue ::~Queue()
{
    delete[] q;
}
bool Queue::isEmpty()
{
    return front == rear;
}
bool Queue::isFull()
{
    return rear == size - 1;
}
void Queue::Enqueue(Node *x)
{
    if (isFull())
        cout << "Overflow" << endl;
    else
        q[++rear] = x;
}
Node *Queue::Dequeue()
{
    Node *x = new Node;
    x=NULL;
    if (isEmpty())
        cout << "Underflow" << endl;
    else
        x = q[++front];
    return x;
}

void create()
{
    Node *p = new Node, *t;
    int x;
    Queue q(10);

    cout << "Enter root value" << endl;
    cin >> x;
    root->data = x;
    root->lchild = NULL;
    root->rchild = NULL;
    q.Enqueue(root);

    while (!q.isEmpty())
    {
        p = q.Dequeue();

        cout << "Enter the left child of " << p->data << endl;
        cin >> x;
        if (x != -1)
        {
            t=new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.Enqueue(t);
        }
        cout << "Enter the right child of " << p->data << endl;
        cin >> x;
        if (x != -1)
        {
            t=new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.Enqueue(t);
        }
    }
}

void preorder(Node *p)
{
    if (p)
    {
        cout << p->data << endl;
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void Inorder(Node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        cout << p->data << endl;
        Inorder(p->rchild);
    }
}
void Postorder(Node *p)
{
    if (p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout << p->data << endl;
    }
}
int main()
{
    create();

    cout << "Preorder" << endl;
    preorder(root);

    cout << "Inorder" << endl;
    Inorder(root);

    cout << "Postorder" << endl;
    Postorder(root);

    return 0;
}