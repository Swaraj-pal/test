#include <iostream>
using namespace std;
class Queue
{
    int size;
    int front;
    int rear;
    int *q;

public:
    Queue(int x)
    {
        front =0;
        rear=0;
        
        size = x;
        q = new int[size];
    }
    ~Queue()
    {
        delete[] q;
    }
    void Enqueue(int x)
    {
        if ((rear+1)%size==front)
            cout << "Nah" << endl;
        else
        rear=(rear+1)%size;
        q[rear]=x;
    }
    int dequeue()
    {
        int x=-1;
        if (isEmpty())
            cout << "dubaalo" << endl;
        else
        {
        front=(front+1)%size;
        x=q[front];
        }
        return x;
    }
    int isFull()
    {
        return ((rear+1)%size)==front;
    }
    int isEmpty()
    {
        return front==rear;
    }
    int first()
    {
        return q[front + 1];
    }
    int last()
    {
        return q[rear];
    }

    void display() {
    for (int i=front+1; i<=rear; i++){
        cout << q[i] << flush;
        if (i < rear){
            cout << " <- " << flush;
        }
    }
    cout << endl;
}
};
int main()
{

    int A[] = {1, 3, 5, 7, 9};
 
    Queue cq(sizeof(A)/sizeof(A[0])+1);
 
    // Enqueue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cq.Enqueue(A[i]);
    }
 
    // Display
    cq.display();
    cout << endl;
 
    // Overflow
    cq.Enqueue(10);
 
    // Dequeue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cq.dequeue();
    }
 
    // Underflow
    cq.dequeue();
 return 0;
 }