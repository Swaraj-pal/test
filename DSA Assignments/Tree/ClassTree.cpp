#include <iostream>
using namespace std;
class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};
class Queue
{
private:
    int size;
    int front;
    int rear;
    Node **q;

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
    q = new Node *[size];
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
    x = NULL;
    if (isEmpty())
        cout << "Underflow" << endl;
    else
        x = q[++front];
    return x;
}

class Tree
{
public:
    Node *root;
    Tree() { root == NULL; }
    void create();
    void Preorder(){Preorder(root);};
    void Preorder(Node *q);
    void Inorder(){Inorder(root);};
    void Inorder(Node *q);
    void Postorder(){Postorder(root);};
    void Postorder(Node *q);
    int height(Node *q);
    void levelorder()
    {
        levelorder(root);
    }
    void levelorder(Node *q);
};

void Tree:: create()
{
    Node *p = new Node, *t;
    int x;
    Queue q(100);
    cout << "Enter root value" << endl;
    cin >> x;
    root= new Node; 
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
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.Enqueue(t);
        }
        cout << "Enter the right child of " << p->data << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.Enqueue(t);
        }
    }
}

void Tree::Preorder(Node *p)
{
    if (p)
    {
        cout << p->data << " ";
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
void Tree::Inorder(Node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        cout << p->data << " ";
        Inorder(p->rchild);
    }
}
void Tree::Postorder(Node *p)
{
    if (p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout << p->data << " ";
    }
}

int Tree::height(Node *p)
{
   int x=0,y=0;
   if(p==0)
   return 0;
   x=height(p->lchild);
   y=height(p->rchild);
   if(x>y)
   return x+1;
   else return y+1;
}

void Tree::levelorder(Node *p)
{ 
    Queue m(100);
    cout << root->data << " " << flush;
    m.Enqueue(root);

    while(!m.isEmpty())
    {
        p=m.Dequeue();

        if(p->lchild)
        {
            cout << p->lchild->data<< " ";
            m.Enqueue(p->lchild);
        }
        if(p->rchild)
        {
            cout << p->rchild->data<< " ";
            m.Enqueue(p->rchild);
        }
    }
}
int main()
{
    Tree T;
    T.create();

    cout << "Preorder" << endl;
    T.Preorder();

    cout << "Inorder" << endl;
    T.Inorder();

    cout << "Postorder" << endl;
    T.Postorder();

    
    cout << "Levelorder" << endl;
    T.levelorder();
    cout << endl;
    cout << "Height: " << T.height(T.root) << endl;
    return 0;
}