#include <iostream>
#include<stack>
using namespace std;
int isOperand(char x)
{
    if(x=='+'||x=='-'||x=='*'||x=='/')
    return 0;
    else
    return 1;
}
int Precedence(char x)
{
    if(x=='+'||x=='-')
    return 1;
    else if(x=='*'||x=='/')
    return 2;
    else return 0;   
}
int main() 
{
stack<char> s;
int i=0,j=0;
char st[10]={"a+b*c-d/e"};
char postfix[11];
while(st[i]!='\0')
{
    if(isOperand(st[i]))
    postfix[j++]=st[i++];
    else 
    {
        if(Precedence(st[i])>Precedence(s.top()))
        s.push(st[i++]);
        else {
         postfix[j++]=s.top();
         s.pop();
        }
        }
}
for (int d = 0; postfix[d]='\0'; d++)
{
cout << postfix[d] << endl;  
}




return 0;
}