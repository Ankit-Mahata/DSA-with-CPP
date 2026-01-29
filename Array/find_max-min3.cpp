// to find the maximum and minimum value and their positions
#include<iostream>
using namespace std;
#define size 7

class Element{
    int MAX,MIN,POS1,POS2;
    public:
    Element(int max=0, int min=0, int pos1=0, int pos2=0) // default arguments
    {MAX=max;MIN=min;POS1=pos1;POS2=pos2;}
    int showmax(){return MAX;}
    int showpos1(){return POS1;}
    int showmin(){return MIN;}
    int showpos2(){return POS2;}
}; 
Element getdata(int *arr){
int max=arr[0],min=arr[0];
int pos1=0,pos2=0;
for(int i=1; i<size; i++)
{
    if(arr[i]>max)
    {
        max=arr[i];  
        pos1=i;
    }
    if(arr[i]<min)
    {
        min=arr[i];
        pos2=i;
    }
}
return Element(max,min,pos1,pos2);
}
int main()
{
    int arr[size];
    cout<<"Enter 7 element : "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    Element e=getdata(arr);
    cout<<"\nmaximum value = "<<e.showmax()<<" index = "<<e.showpos1()<<endl;
    cout<<"\nminimum value = "<<e.showmin()<<" index = "<<e.showpos2()<<endl;
}