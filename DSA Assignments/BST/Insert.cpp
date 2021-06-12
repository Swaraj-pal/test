#include <iostream>
using namespace std;
class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
} *root = NULL;

class BST
{
    private: 
    Node *root;
    public:
    BST()
    {
        root==NULL;
    }
    Node* getroot()
    {
        return root;
    }
    void insert(int key);
    void inorder(Node *p);
    Node* rinsert(Node *q, int key);
    Node* isearch(int key);
    Node* rsearch(Node* q, int key);
};
void BST::insert(int key)
{
    Node *p=new Node;
    p=root;
    Node *r = new Node;
    r = NULL;
    
    if(root==NULL)
    {
        Node *m;
        m=new Node;
        m->data=key;
        m->lchild=m->rchild=NULL;
        root=m;
        return;
    }
    while (p != NULL)
    {
        r = p;
        if (key == p->data)
            return;
        else if (key < p->data)
            p = p->lchild;
        else
            p = p->rchild;
    }
    Node *t = new Node;
    t->data = key;
    t->lchild = t->rchild = NULL;
    if (key < r->data)
        r->lchild = t;
    else
        r->rchild = t;
}

Node* BST::rinsert(Node *q, int key)
{
   Node *t;
   if(q==NULL)
   {
       t=new Node;
       t->data=key;
       t->lchild=t->rchild=NULL;
       return t;
   }
   if(key<q->data)
   q->lchild=rinsert(q->lchild, key);
   else if(key>q->data)
   q->rchild=rinsert(q->rchild, key);
   return q;
}

Node* BST::isearch(int key)
{
    Node *q;
    q=new Node;
    q=root;
    while(q!=NULL)
    {
        if(key==q->data)
        return q;
        else if(key<q->data)
        q=q->lchild;
        else 
        q=q->rchild;
    }
    return nullptr;
}

Node* BST::rsearch(Node *t, int key)
{
    if(!t)
    return NULL;
    else if(key==t->data)
    return t;
    else if(key<t->data)
    return rsearch(t->lchild, key);
    else if(key>t->data)
    return rsearch(t->lchild, key);
    
}
void BST:: inorder(Node *p)
{
    if(p)
    {
    inorder(p->lchild);
    cout << p->data << ", " << flush;
    inorder(p->rchild);
    }
}
int main()
{
     
    BST bst;
 
    // Iterative insert
    bst.insert(10);
    bst.rinsert(bst.getroot(),5);
    bst.rinsert(bst.getroot(),20);
    bst.rinsert(bst.getroot(),8);
    bst.rinsert(bst.getroot(),30);
    
    bst.inorder(bst.getroot());
    cout << endl;
   
    // Iterative search
    Node* temp = bst.isearch(2);
    if (temp != nullptr){
        cout << temp->data << endl;
    } else {
        cout << "Element not found" << endl;
    }
 
    // Recursive search
    temp = bst.rsearch(bst.getroot(), 20);
    if (temp != nullptr){
        cout << temp->data << endl;
    } else {
        cout << "Element not found" << endl;
    }
 

    return 0;
}