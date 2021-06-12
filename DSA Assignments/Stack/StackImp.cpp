#include <iostream>
#include<cstring>
using namespace std;
class Stack
{

    int size;
    int top;
    char *s;
        public:
     Stack()
    {
     size=0;
    }
    Stack(int x)
    {
        top=-1;
        size = x;
        s = new char[x];
    } 
     
    void push(char y)
    {
        if(isFull())
        {
            cout << "Stack overflow" << endl;
        }
        else 
        {
            s[++top]=y;
            cout << "Pushed element " << y << " at position: " << top+1 << endl;
        }
    }
    
    char pop()
    {
        int x=-1;
        if(isEmpty())
        cout << "Stack underflow" << endl;
        else 
        {
         x=s[top--];
        }
        return x;      
    }

    char peek(int pos)
    {
        int x=-1;
        if(top-pos+1<0 || top-pos+1>=size)
        cout << "Na beta na" << endl;
        else 
        x=s[top-pos+1];
        return x;
    }

    int StackTop()
    {
       if(isEmpty())
       return -1;
       return s[top];
    }
    int isEmpty()
    {
        return (top<0);
    }
    int isFull()
    {
        return top==size-1;
    }
    void display()
    {
        int i=top;
        cout << "The Stack is: " << endl;
        while(i>-1)
        {
            cout << s[i] << endl;
            i--;
        }
    }
};

int isbalanced(char *exp)
{
     Stack stk((int)strlen(exp));
     for (int i = 0; exp[i]!='/0'; i++)
     {
         if(exp[i]=='(')
         stk.push(exp[i]);
         else if(exp[i]==')')
         {
           if(stk.isEmpty())
           return 0;
           else 
           stk.pop();
         }
       
     }
    return stk.isEmpty() ? 1 : 0;
}
int main() 
{
int length;
cout << "Enter length and elements" << endl;
cin >> length;
int arr[length];
Stack s(length);
for (int i = 0; i < length; i++)
{
   cin >> arr[i];
   s.push(arr[i]);
}
s.display();
cout << "Top variable is: " << s.StackTop() << endl;
cout << "Variable at 2nd position is: " << s.peek(2) << endl;


return 0;
}