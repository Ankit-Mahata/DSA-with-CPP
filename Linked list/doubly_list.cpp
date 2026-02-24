#include<iostream>
using namespace std;
class node{
    int data;
    node *prev;
    node *next;
    public:
    node(int val)
    {
        data=val;
        prev=NULL;
        next=NULL;
    }
    friend void InsertAtEnd(node *&head, int val);
    friend void print(node *head);
    friend void InsertAtfirst(node *&head, int val);
    friend void InsertAfter(node *&head, int val, int after);
    friend void DeleteNode(node *&head, int val);
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
    temp->prev=ptr;
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

void InsertAtfirst(node *&head, int val)
{
    node *temp=new node(val);
    if(head==NULL)
    {
        head=temp;
        return;
    }
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void InsertAfter(node *&head, int val, int after)
{
    node *temp=new node(val);
    if(head==NULL)
    {
        head=temp;
        return;
    }
    node *ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data==after)
        {
            temp->next=ptr->next;
            temp->prev=ptr;
            if(ptr->next!=NULL)
            {
                ptr->next->prev=temp;
            }
            ptr->next=temp;
            return;
        }
        ptr=ptr->next;
    }
}

void DeleteNode(node *&head, int val)
{
    if(head==NULL)
    {
        cout<<"List is empty !!\n";
        return;
    }
    node *ptr=head;
    if(ptr->next==NULL && ptr->data==val)
    {
        head=NULL;
        delete ptr;
        return;
    }
    while(ptr!=NULL)
    {
        if(ptr->data==val)
        {
            if(ptr->prev==NULL)
            {
                head=ptr->next;
                head->prev=NULL;
                delete ptr;
                return;
            }
            else if(ptr->next==NULL)
            {
                ptr->prev->next=NULL;
                delete ptr;
                return;
            }
            else{
                ptr->prev->next=ptr->next;
                ptr->next->prev=ptr->prev;
                delete ptr;
                return;
            }

        }
        ptr=ptr->next;
    }
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
    int n,val,key;
    cout<<"Enter the number of nodes you want to insert at end : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of node "<<i+1<<" : ";
        cin>>val;
        InsertAtEnd(head,val);
    }
    cout<<"List is : ";
    print(head);
    cout<<"Enter the number of nodes you want to insert at first : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of node "<<i+1<<" : ";
        cin>>val;
        InsertAtfirst(head,val);
    }
    cout<<"List is : ";
    print(head);
    cout<<"Enter the number of nodes you want to insert after a node : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of node "<<i+1<<" : ";
        cin>>val;
        cout<<"Enter the key after which you want to insert : ";
        cin>>key;
        InsertAfter(head,val,key);
    }
    cout<<"List is : ";
    print(head);
    cout<<"Enter the number of nodes you want to delete : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of node you want to delete : ";
        cin>>val;
        DeleteNode(head,val);
    }
    cout<<"List is : ";
    print(head);
    cout<<".....Program ending. Deleting the entire list...\n";
    DeleteList(head);
    print(head);
}