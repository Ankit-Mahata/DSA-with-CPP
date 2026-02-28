#include<iostream>
using namespace std;
class stack; // forward declaration of stack class 
class node{
    int data;
    node* next;
    public:
    node(int val)
    {
        data=val;
        next=NULL;
    }
    friend class stack; // making stack class as friend class to access private members of node class
};
class stack{
    node *top;
    public:
    stack(){top=NULL;}
    void push(int val)
    {
        node *temp=new node(val);
        // here top is like head of linked list and we are inserting at the beginning of linked list
        temp->next=top; // we are connecting new node to the previous top node
        top=temp; // we are making new node as top node
    }
    int pop()
    {
        if(top==NULL)
        {
            cout<<"Stack underflow !!\n";
            return -1;
        }
        else{
            node *temp=top;
            int val=temp->data;
            top=top->next;
            delete temp;
            return val;
        }
    }
    void print()
    {
        if(top==NULL)
        {
            cout<<"stack is empty !!\n";
            return;
        }
        node *temp=top;
        cout<<"stack is : ";
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    stack s1;
    int val;
    int bin=0;
    while(bin!=5)
    {
       cout<<"value ? ";
       cin>>val;
       s1.push(val);
       ++bin;
    }
    s1.print();
    while(bin!=0)
    {
        int a=s1.pop();
        if(a==-1)break;
        cout<<"popped -> "<<a<<endl;
        --bin;
    }
    s1.print();
}
