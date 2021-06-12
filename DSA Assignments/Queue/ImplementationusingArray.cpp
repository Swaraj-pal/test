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
        front =-1;
        rear=-1;
        
        size = x;
        q = new int[size];
    }
    ~Queue()
    {
        delete[] q;
    }
    void Enqueue(int x)
    {
        if (isFull())
            cout << "Nah" << endl;
        else
            q[++rear] = x;
    }
    int dequeue()
    {
        int x=-1;
        if (isEmpty())
            cout << "dubaalo" << endl;
        else
            x=q[++front];
        return x;
    }
    int isFull()
    {
        return rear == size - 1;
    }
    int isEmpty()
    {
        return front == rear;
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
    int A[]={1,2,3,4,5};
    Queue B(5);

for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        B.Enqueue(A[i]);
    }
    B.display();
    B.Enqueue(10);
    
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        B.dequeue();
    }
 
    // Underflow
    B.dequeue();
    

    return 0;
}