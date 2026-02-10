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
    friend void InsertAfterKey(node *&head, int key, int val);
    friend void DeleteNode(node *&head, int key);
    friend void DeleteList(node *&head);
};

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


  void InsertAfterKey(node *&head, int key, int val)
  {
    if(head==NULL)
    {
        cout<<"List is empty !!\n";
        return;
    }
    node *temp=new node(val);
    node *ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data==key)
        {
            temp->next=ptr->next;
            ptr->next=temp;
            return;
        }
        
        ptr=ptr->next;

    }
  }


  void DeleteNode(node *&head, int key)
  {
    node *ptr=head;
     if(head==NULL)
     {
        cout<<"List is empty !!\n";
        return;
     }
     else if(ptr->data==key)
     {
        head=ptr->next;
        delete ptr;
        return;
     }
     else{
     while(ptr->next!=NULL)
     {
        if(ptr->next->data==key)
        {
            node *temp=ptr->next;
            ptr->next=ptr->next->next;
            delete temp;
            return;
        }
        ptr=ptr->next;
     }
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
    int main()
{
    node *head=NULL;
    int n,val,key;
    cout<<"Enter number of nodes you want to create : ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"Enter value : ";
        cin>>val;
        InsertAtEnd(head,val);
    }
    cout<<"List is : ";
    print(head);
    cout<<"\nEnter key after which you want to insert : ";
    cin>>key;
    cout<<"\nEnter value to insert : ";
    cin>>val;
    InsertAfterKey(head,key,val);
    cout<<"List is : ";
    print(head);
    cout<<"\nEnter key to delete : ";
    cin>>key;
    DeleteNode(head,key);
    cout<<"List is : ";
    print(head); 
    DeleteList(head);
    cout<<"\nList is : ";
    print(head);

}