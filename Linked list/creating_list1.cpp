//statically creating a list
// not user friendly
#include<iostream>
using namespace std;
class node{
    int data;
    node* next;
    friend void getdata(node &n)
    {
        cout<<"input data : ";
        cin>>n.data;
        n.next=NULL;
    }
    friend void display(node *&head)
    {
        while(head!=NULL)
        {
            cout<<head->data<<" ";
            head=head->next;
        }
    }

    friend void link(node *&head,node &n1, node &n2)
    {
        node *ptr=head;
        if(ptr->next==NULL)
        {
            ptr->next=&n2;
            ptr->next->next=NULL;
        }
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=&n2;
            ptr->next->next=NULL;
    }

};
int main()
{
    node* head;
    node n1;
    getdata(n1);
    head=&n1;
    node n2;
    getdata(n2);
    link(head,n1,n2);
    node n3;
    getdata(n3);
    link(head,n2,n3);
    display(head);

}