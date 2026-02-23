#include<iostream>
using namespace std;
class node{
    int data;
    node *next;

    public:
    node(int val)
    {
        data=val;
        next=NULL;
    }
    friend void InsertAtEnd(node *&head, int val);
    friend void print(node *head);
    friend void ReverseList(node *&head);
    friend void DeleteList(node *&head);
};

void InsertAtEnd(node *&head, int val)
{
    node *temp=new node(val);
    if(head==NULL)
    {
        head=temp;
        return;
    }
    node *ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
}

void print(node *head)
{
    if(head==NULL)
    {
        cout<<"List is empty !!\n";
        return;
    }
    node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}


void ReverseList(node *&head)
{
    if(head==NULL || head->next==NULL)
    {
        return;
    }
    node *prev=NULL;
    node *current=head;
    node *nextnode=NULL;

    while(current!=NULL)
    {
        nextnode=current->next;
        current->next=prev;
        prev=current;
        current=nextnode;
    }
    head=prev;
}


void DeleteList(node *&head)
{
    if(head==NULL)
    {
        cout<<"List is empty !!\n";
        return;
    }
    node *ptr=head;
    while(ptr!=NULL)
    {
        node *temp=ptr;
        ptr=ptr->next;
        delete temp;
    }
    head=NULL;
}

int main()
{
    node *head=NULL;
    int n , val;
    cout<<"Enter the number of elements to be inserted : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter value : ";
        cin>>val;
        InsertAtEnd(head,val);
    }
    cout<<"Original list : ";
    print(head);
    ReverseList(head);
    cout<<"Reversed list : ";
    print(head);
    DeleteList(head);
    return 0;
}