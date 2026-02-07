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
    friend void InsertAtBegin(node *&head, int val);
    friend void DeleteFirst(node *&head);
    friend void DeleteLast(node *&head);
    friend void DeleteList(node *&head);
    friend void print(node *head);
};
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
}

// Insertion at end
void InsertAtEnd(node *&head, int val)
{
   node *temp=new node(val);
   if(head==NULL)
   {
    head=temp;
   }
   else{
    node *ptr=head;
    while(ptr->next!=NULL)
    {
      ptr=ptr->next;
    }
    ptr->next=temp;

   } 
}

// Insertion at begin
void InsertAtBegin(node *&head, int val)
{
    node *temp=new node(val);
    if(head==NULL)
    {
        head=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
}

// delete first node
void DeleteFirst(node *&head)
{
    if(head==NULL)
    return;
    else if(head->next==NULL)
    {
    node *ptr=head;    
    delete ptr;
    head=NULL;
    }
    else{
    node *ptr=head;
    head=ptr->next;
    delete ptr;
    }
}

// Delete last node
void DeleteLast(node *&head)
{
   if(head==NULL){
    cout<<"list is empty !!\n";
    return;
   }
    else if(head->next==NULL)
    {
    cout<<"There is one node only\n";
    node *ptr=head;    
    delete ptr;
    head=NULL;
    }
    else{
        node *ptr=head;
        while(ptr->next->next!=NULL)
        {
            ptr=ptr->next;
        }
        delete ptr->next;
        ptr->next=NULL;
    }
}

// Deleting List
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
    int n;
    cout<<"How many nodes ? ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int val;
        cout<<"Enter value : ";
        cin>>val;
        InsertAtEnd(head,val);
    }
    cout<<"List is : ";
    print(head);
    cout<<"\nInserting 100 at begin\n";
    InsertAtBegin(head,100);
    cout<<"List is : ";
    print(head);
    cout<<"\nDeleting first node\n";
    DeleteFirst(head);
    cout<<"List is : ";
    print(head);
    cout<<"\nDeleting last node\n";
    DeleteLast(head);
    cout<<"List is : ";
    print(head);
    cout<<"\nDeleting whole list\n";
    DeleteList(head);
    cout<<"List is : ";
    print(head);

}
