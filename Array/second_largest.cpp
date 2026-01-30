#include<iostream>
using namespace std;
int secondlrg(int *arr, int n)
{
    int max1,max2;
    max1=max2=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>max1){
            max1=arr[i];
            if(max2>arr[i] && max2<max1)
            {
                max2=arr[i];
            }
        }
    }
    return max2;
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
    cout<<"second largest element is : "<<secondlrg(arr,n);
}