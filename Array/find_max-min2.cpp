// to give the maximum value and its position

#include<iostream>
using namespace std;
  class element{
   int max,pos;
   public:
   element(){}
    element(int m, int p){
    max=m;pos=p;
          }
     int showmax()
     {return max;}
     int showpos()
     {return pos;}
};
  
  element findmax_pos(int *a){
    element e;
    int large=a[0];
    int position=0;
    int count=0;
   for(int i=1; i<5; i++)
   {
    ++count;
    if(a[i]>large)
    {
        large=a[i];
        position=position+count;
    }
   }
   return element(large,position);
  }
int main()
{
    element ele;
    int arr[5];
    cout<<"Enter 5 integers : \n";
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    ele=findmax_pos(arr);
    cout<<"maximum element is : "<<ele.showmax()<<endl;
    cout<<"position of maximum element is : "<<ele.showpos();
}