#include<iostream>
using namespace std;
#define n 10
int findmax(int *a, int size)
{
   int max=a[0];
   for(int i=1; i<size; i++)
   {
    if(a[i]>max)
    max=a[i];
   }
   return max;
}
int findmin(int *b, int size)
{
   int min=b[0];
   for(int i=1; i<size; i++)
   {
      if(b[i]<min)
      min=b[i];
   }
   return min;
}
int main()
{
   int arr[n];
   cout<<"Enter 10 integers : ";
   for(int i=0; i<n; i++)
   {
    cin>>arr[i];
   }
   int max=findmax(arr,n);
   cout<<"maximum element is "<<max<<endl;
   int min=findmin(arr,n);
   cout<<"minimum element is "<<min<<endl;
}