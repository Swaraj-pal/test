#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top=nullptr;
    }
    ~Stack();
    void push(int x);
    int pop();
    int peek(int index);
    int StackTop();
    int isEmpty();
    int isFull();
    void display();
};
Stack::~Stack()
{
    Node *p = top;
    while (top)
    {
        top = top->next;
        delete p;
        p = top;
    }
}
void Stack::push(int x)
{
    Node *t = new Node;
    t->data = x;
    if (t==nullptr)
        cout << "Stack Overflow" << endl;
    else
    {
        t->next = top;
        top = t;
    }
}
int Stack::pop()
{
    Node *q = top;
    int x = -1;
    if (top == NULL)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        x = top->data;
        top = top->next;
        free(q);
    }
    return x;
}
int Stack::peek(int index)
{
    Node *q = new Node;
    q = top;
    if (isEmpty())
        return -1;
    else
    {
        for (int i = 0; i < index - 1 && q; i++)
        {
            q = q->next;
        }
        if (q)
            return q->data;
        else
            return -1;
    }
}


int Stack::StackTop()
{
    if (top == NULL)
        return -1;
    else
        return top->data;
}
int Stack::isEmpty()
{
    return top ? 0 : 1;
}

int Stack::isFull()
{
    Node *t;
    t = new Node;
    int r = t ? 1 : 0;
    free(t);
    return r;
}

void Stack:: display()
{
    Node *p=top;
    while(p)
    {
        cout << p->data << endl;
        p=p->next;
    }
    cout << endl; 
}

int main()
{
    Stack s;
    int size;
    cout << "Enter the number of elements" << endl;
    cin >> size;
    cout << "Enter the elements" << endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        s.push(arr[i]);
    }
    s.display();
    cout << "Stack peek at 3rd: " << s.peek(3) << endl;
    cout << "Stack peek at 10th: " << s.peek(10) << endl;
    cout << "Stack top: " << s.StackTop() << endl;
    cout << "Stack full: " << s.isFull() << endl;
    cout << "Stack empty: " << s.isEmpty() << endl;

    // Pop out elements from stack
    cout << "Popped: " << flush;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << s.pop() << ", " << flush;
    }
    cout << endl;

    // Underflow
    cout << s.pop() << endl;

    return 0;
}