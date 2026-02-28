// using a class to implement stack
#include<iostream>
using namespace std;
#define size 5
class stack{
    int top;
    int arr[size];
    public:
    stack(){top=-1;}
    void push(int val)
    {
        if(top==size-1)
        {
            cout<<"stack overflow !!";
            return;
        }
        ++top;
        arr[top]=val;
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"stack underflow !!";
        }
        else{
            int temp=arr[top];
            top--;
            return temp;
        }

    }
    void print()
    {
        if(top==-1)
        {cout<<"\nstack is empty ";
            return;}
        cout<<"stack is : ";
        for(int i=0; i<=top; i++)
        {
            cout<<arr[i]<<" ";
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
       cout<<"popped -> "<<s1.pop()<<"  ";
       --bin;
    }
    s1.print();
}