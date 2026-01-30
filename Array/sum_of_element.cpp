// finding sum of elements in an array using recursion
#include<iostream>
using namespace std;
int summation(int *arr, int size)
{
    if(size==0)
    return 0;
    return arr[0]+summation(arr+1,size-1);
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
    int sum=summation(arr,n);
    cout<<"\n sum of elements : "<<sum;
}
