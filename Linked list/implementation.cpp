// implementation of node only;
#include<iostream>
using namespace std;
class node{
    int data;
    node* next;
    public:
    node()
    {next=NULL;}
    void getdata()
    {
        cout<<"\nEnter data : ";
        cin>>data;
    }
    void showdata()
    {cout<<"data : "<<data;}
};
int main()
{
// creating node statically
node n1;
n1.getdata();
n1.showdata();
// creating node dynamically
node *temp=new node;
temp->getdata();
(*temp).showdata();
delete temp;
}

