#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(i=0;i<n;i++);
#define v(n) vector<long int>v(n)l
struct node{
    int data;
    struct node* next;
};

struct node* newnode(int i)
    {
        node *p=new node();
        p->data=i;
        p->next=NULL;
        return p;
    }
struct node *current=NULL,*nje=NULL,*pre=NULL;
struct node* reverse(node *start)
{
    pre=start;
    current=start;
    ne=start->next;
    while(ne!=NULL && ne->data%2==0)
    {
        pre=current;
        current=ne;
        ne=ne->next;
        current->next=pre;
    }
    //cout<<pre->data<<" "<<current->data<<" "<<start->data<<" "; 
    start->next=ne;
    return current;
}
int main(){
    struct node* p,*q,*c,*head=NULL;
    int n,i,j;
    cin>>n;
    cin>>j;
    head=newnode(j);
    q=head;
    for(i=0;i<n-1;i++)
    {
        cin>>j;
       p=newnode(j);
        q->next=p;
        q=q->next;  
    }  
    q=head,p=q;
    while(q!=NULL)
    {
        if(q->data%2==0 && q==head)
        {
            head=reverse(q);
        }
        else if(q->data%2==0)
        {
        p->next=reverse(q);
        }
        p=q;
        q=q->next;
    }
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }  

}