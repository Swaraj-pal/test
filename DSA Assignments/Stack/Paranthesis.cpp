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
     for (int i = 0; exp[i]!='\0'; i++)
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
 char E[] = "((a+b)*(c-d))";
    cout << isbalanced(E) << endl;


return 0;
}