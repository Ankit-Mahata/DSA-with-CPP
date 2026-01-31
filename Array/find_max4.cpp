// to find largest element by recursion
#include<iostream>
using namespace std;
int largest(int *arr, int n)
{
    if(n==1)
    {
        return arr[0];
    }
    int max1=arr[0];
    int max2=largest(arr+1,n-1);
    if(max1>max2)
    return max1;
    else
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
    cout<<"\nlargest element is : "<<largest(arr,n);

}