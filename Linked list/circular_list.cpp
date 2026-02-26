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
    friend void InsertAtStart(node *&head,int val);
    friend void print(node *head);
    friend void DeleteFirst(node *&head);
    friend void DeleteLast(node *&head);
    friend void DeleteList(node *&head);
 };

 void InsertAtEnd(node *&head,int val)
 {
    node *temp=new node(val);
    if(head==NULL)
    {
        head=temp;
        temp->next=head;
        return;
    }
    node *ptr=head;
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->next=head;

 }


 void InsertAtStart(node *&head,int val)
 {
    node *temp=new node(val);
    if(head==NULL)
    {
        head=temp;
        temp->next=head;
        return;
    }
    node *ptr=head;

    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    temp->next=head;
    head=temp;
    ptr->next=head;
    
 }


 void print(node *head)
   {
    if(head==NULL)
    {
        cout<<"List is empty !!\n";
        return;
    }
    node *ptr=head;
    do{
         cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    while(ptr!=head);
   }


   void DeleteFirst(node *&head)
   {
    node *ptr1=head; node *ptr2=head;
    if(head==NULL)
    {
        cout<<"List is empty !!\n";
        return;
    }
    if(head->next==head)
    {
        delete ptr1;
        head=NULL;
        return;
    }
    while(ptr1->next!=head)
    {
        ptr1=ptr1->next;
    }
    head=ptr2->next;
    ptr1->next=head;
    delete ptr2;

   }


 
void DeleteLast(node *&head)
{
    node *ptr=head;
   if(head==NULL)
    {
        cout<<"List is empty !!\n";
        return;
    }
    if(head->next==head)
    {
        delete ptr;
        head=NULL;
        return;
    }
    
    while(ptr->next->next!=head)
    {
        ptr=ptr->next;
    }
    delete ptr->next;
    ptr->next=head;
}


void DeleteList(node *&head)
   {
    if(head==NULL)
    {
        cout<<"List is empty !!\n";
        return;
    }
    node *ptr=head->next;
    while(ptr!=head)
    {
        node *temp=ptr;
        ptr=ptr->next;
        delete temp;
    }
    delete head->next;
    head=NULL;
   }


int main()
{
    node *head=NULL;
    int choice,val;
    bool x=true;
    while(x)
    {
        cout<<"\nEnter the number for corresponding operation .... \n   1 - Insertion at end\n   2 - Insertion at begining\n   3 - print\n   4 - Delete first node\n   5 - Delete last node\n   6 - Delete whole list\n   7 - Exit the program\n";
        cin>>choice;
        switch(choice)
        {
            case 1 : cout<<"insert the data : ";
                     cin>>val;
                     InsertAtEnd(head,val); break;
            case 2 : cout<<"insert the data : ";
                     cin>>val;
                     InsertAtStart(head,val); break;
            case 3 : cout<<"\n list is ....";
                     print(head); break;
            case 4 : DeleteFirst(head); break;
            case 5 : DeleteLast(head); break;
            case 6 : DeleteList(head); break;
            case 7 : x=false;
                     cout<<"\nexiting the program....!!!"; break;
            default : cout<<"invalid choice !!\n";

                     
        }
    }
}