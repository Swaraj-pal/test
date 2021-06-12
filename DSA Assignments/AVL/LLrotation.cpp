#include <iostream>
using namespace std;
class Node
{
public:
    Node *lchild;
    Node *rchild;
    int data;
    int height;
};

class AVL
{
public:
    Node *root;
    AVL() { root = nullptr; }
    // Helper methods for inserting
    int NodeHeight(Node *p);
    int BalanceFactor(Node *p);
    Node *LLRotation(Node *p);
    Node *RRRotation(Node *p);
    Node *LRRotation(Node *p);
    Node *RLRotation(Node *p);
    // Insert
    Node *rInsert(Node *p, int key);

    // Traversal
    void Inorder(Node *p);
    void Inorder() { Inorder(root); }
    Node *getRoot() { return root; }
};

int AVL::NodeHeight(Node *p)
{
    int x, y;
    x = (p && p->lchild) ? p->lchild->height : 0;
    y = (p && p->rchild) ? p->rchild->height : 0;
    return x > y ? x + 1 : y + 1;
}

int AVL::BalanceFactor(Node *p)
{
    int hl;
    int hr;
 
    hl = (p && p->lchild) ? p->lchild->height : 0;
    hr = (p && p->rchild) ? p->rchild->height : 0;
 
    return hl - hr;
}

Node *AVL::LLRotation(Node *p)
{
    Node *q, *r;
    q = new Node;
    r = new Node;
    q = p->lchild;
    r = q->rchild;

    q->rchild = p;
    p->lchild = r;

    p->height = NodeHeight(p);
    q->height = NodeHeight(q);

    if (root == p)
    {
        root = q;
    }
    return q;
}

Node *AVL::RRRotation(Node *p)
{
    Node *q, *r;
    q = new Node;
    r = new Node;
    q = p->rchild;
    r = q->lchild;

    q->lchild = p;
    p->rchild = r;

    p->height = NodeHeight(p);
    q->height = NodeHeight(q);

    if (root == p)
    {
        root = q;
    }
    return q;
}

Node *AVL::LRRotation(Node *p)
{
    Node *q, *r;
    q = new Node;
    r = new Node;
    q = p->lchild;
    r = q->rchild;

   q->rchild = r->lchild;
    p->lchild = r->rchild;
    
    r->lchild = q;
    r->rchild = p;

    p->height = NodeHeight(p);
    q->height = NodeHeight(q);
    r->height = NodeHeight(r);

    if (root == p)
    {
        root = r;
    }
    return r;
}

Node *AVL::RLRotation(Node *p)
{

    Node *q, *r;
    q = new Node;
    r = new Node;
    q = p->rchild;
    r = q->lchild;

    q->lchild = r->rchild;
    p->rchild = r->lchild;


    r->rchild = q;
    r->lchild = p;

    p->height = NodeHeight(p);
    q->height = NodeHeight(q);
    r->height = NodeHeight(r);

    if (root == p)
    {
        root = r;
    }
    return r;
}
Node *AVL::rInsert(Node *p, int key)
{
    Node *t;
    if (p == nullptr)
    {
        t = new Node;
        t->data = key;
        t->height = 1;
        t->lchild = nullptr;
        t->rchild = nullptr;
        return t;
    }
    if (key < p->data)
    {
        p->lchild = rInsert(p->lchild, key);
    }
    else if (key > p->data)
    {
        p->rchild = rInsert(p->rchild, key);
    }
    p->height = NodeHeight(p);

    if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == 1)
        return LLRotation(p);
    else if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == -1)
        return LRRotation(p);
    else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == -1)
        return RRRotation(p);
    else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == 1)
        return RLRotation(p);
    return p;
}

void AVL::Inorder(Node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        cout << p->data << ", " << flush;
        Inorder(p->rchild);
    }
}

int main()
{

    AVL a;

    a.root = a.rInsert(a.getRoot(), 10);
    a.root = a.rInsert(a.getRoot(), 20);
    a.root = a.rInsert(a.getRoot(), 30);

    a.Inorder();
    cout << endl;

    AVL trl;
    trl.root = trl.rInsert(trl.root, 50);
    trl.root = trl.rInsert(trl.root, 20);
    trl.root = trl.rInsert(trl.root, 30);

    trl.Inorder();
    cout << endl;
    cout << trl.root->data << endl;

    return 0;
}