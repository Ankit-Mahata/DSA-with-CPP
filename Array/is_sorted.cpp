//to check if array is sorted or not with help of recursion
#include<iostream>
using namespace std;
bool issorted(int *arr, int n)
{
    if(n==1 || n==0)
    return true;
    else if(arr[0]>arr[1])
    return false;
    else
    return issorted(arr+1,n-1);
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
    bool x=issorted(arr,n);
    if(x==true)
    {cout<<"array is sorted ! \n";}
    else
    {cout<<"array is not sorted !! ";}

}