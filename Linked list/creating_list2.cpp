#include<iostream>
using namespace std;
class node{
    int data;
    node* next;
    public:
    node(int val)
    {
        data=val;
        next=NULL;
    }
    friend void InsertAtEnd(node *&head,int val);
    friend void print(node *head);
};
void InsertAtEnd(node *&head,int val)
{
    node *newnode= new node(val);

    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node *ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=newnode;
}
void print(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    node* Head=NULL;
    int val;
    int n;
    cout<<"How many nodes ? ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"Enter value : ";
        cin>>val;
        InsertAtEnd(Head,val);
    }
    print(Head);

}
