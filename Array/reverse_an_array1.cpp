#include<iostream>
using namespace std;
void swap(int& x, int& y)
{
    int temp=x;
    x=y;
    y=temp;
}
void reverse(int *arr, int n)
{
   for(int i=0; n-2*i-1>=0; i++)
   {
    swap(arr[i],arr[n-i-1]);
   }
}
int main()
{
    int arr[15];
    int n;
    cout<<"Enter no. of elements : ";
    cin>>n;
    cout<<"Enter "<<n<<" integers : \n";
    for(int i=0; i<n; i++)
    {cin>>arr[i];}
    reverse(arr,n);
    cout<<"\n Reversed array is : \n";
    for(int i=0; i<n; i++)
    {cout<<arr[i]<<" ";}
}