#include<iostream>
using namespace std;

void insertion(int *arr,int& n, int key, int pos)
{
    for(int i=n-1; i>=pos; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=key;
    ++n;
}
void deletion(int *arr, int& n, int pos)
{
   for(int i=pos; i<n; i++)
   {
    arr[i]=arr[i+1];
   }
   --n;
}
void show(int *arr,int &n)
{
    cout<<"array is : \n";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[20];
    int key,pos;
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    char choice;
    bool x=true;
    while(x){
   
      cout<<"\nDo you want to insert or delete an element (press any key to exit)? (i/d): ";
      cin>>choice;
    
        if(choice=='i' || choice=='I')
     {
        cout<<"Enter the value to insert : ";
        cin>>key;
        cout<<"\nEnter the position to insert : ";
        cin>>pos;
        insertion(arr,n,key,pos);
        show(arr,n);
     }
        else if(choice=='d' || choice=='D')
     {
        cout<<"Enter the position to delete the element : ";
        cin>>pos;
        deletion(arr,n,pos);
        show(arr,n);
     }
    else{
        cout<<"invalid choice ! Exiting !!";
        x=false;
    }
}

}