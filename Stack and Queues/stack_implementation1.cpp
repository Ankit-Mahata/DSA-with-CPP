#include<iostream>
using namespace std;
#define size 10
int top=-1;
int STACK[size];
void push(int x)
    {
        if(top==size-1)
        {
            cout<<"Stack overflow !! "; 
            return ;
        }
        ++top;
        STACK[top]=x;
    }

int pop()
{
    if(top==-1)
    {
        cout<<"stack underflow !! \n";
        return -1;
    }
    else{
    int temp=STACK[top];
    --top;
    return temp;
    }
}    
int main()
{
    cout<<"\n... Stack of size 10 is created ...\n";
    int a=1;
    int choice;
    int val;
    while(a)
    {
        cout<<"1. push  2. pop  3. view stack  4. end\n";
        cin>>choice;
        if(choice==1)
        {
            cout<<"value ? ";
            cin>>val;
            push(val);
        }
        else if(choice==2)
        {
            int b=pop();
            if(b==-1)break;
            cout<<"popped -> "<<b<<endl;
        }
        else if(choice==3)
        {
            cout<<"stack is : ";
            for(int i=0; i<=top; i++)
            {
                cout<<" "<<STACK[i]<<" ";
            }
            cout<<endl;
        }
        else if (choice==4)
        {
            a=0; cout<<"program ended !!";
        }
        else 
        cout<<"invalid choice..\n";

    }
}