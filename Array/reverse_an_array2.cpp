// reversing an array using recursion
#include<iostream>
using namespace std;
void reverse(int *arr, int size)
{
    if(size==1 || size==0)
    return;
    int temp=arr[0];
    arr[0]=arr[size-1];
    arr[size-1]=temp;
    reverse(arr+1,size-2);

}
int main()
{
    int arr[20];
    int n;
    cout<<"How many elements ? ";
    cin>>n;
    cout<<"Enter elements : \n";
    for(int i=0; i<n; i++)
    {cin>>arr[i];}
    cout<<"reversed array : \n";
    reverse(arr,n);
    for(int i=0; i<n; i++)
    {cout<<arr[i]<<" ";}

}
