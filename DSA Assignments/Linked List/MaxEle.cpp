#include <iostream>
#include <algorithm>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

int maximum(Node *p)
{
   int x=0;
   if(p==0)
   return INT32_MIN;
   else 
   x=maximum(p->next);
   return max(x,p->data);
}
int main() 
{
int a[5];
Node* first, *temp, *last;
 
first = new Node;
cout << "Enter the elements" << endl;
for (int i = 0; i < 5; i++)
{
   cin >> a[i];
}

first->data=a[0];
first->next=NULL;

last=first;
for (int i = 1; i < 5; i++)
{
    temp = new Node;   
    temp->data=a[i];
    temp->next=NULL;
    last->next=temp;
    last=temp;
}
Node *p;
int maxi=0;
p=first;
while(p!=0)
{
  maxi=max(maxi,p->data);
  p=p->next;
}
Node *q=first;
cout << "By loops: " << maxi << endl;
cout << "By Recursion: " << maximum(q) << endl;

return 0;
}