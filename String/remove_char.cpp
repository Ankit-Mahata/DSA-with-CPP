// to remove a specific character from string
#include<iostream>
#include<cstring>
using namespace std;
void removechar(char *str,char chr)
{
int len=strlen(str);
if(len==0)
{return ;}
if(str[0]==chr)
{
    for(int i=0; str[i]!='\0'; i++)
 {   
        str[i]=str[i+1];
}
}
removechar(str+1,chr);

}
int main()
{
    char arr[20];
    char chr;
    cout<<"give a string : ";
    cin>>arr;
    cout<<"\ngive a character to remove : ";
    cin>>chr;
    removechar(arr,chr);
    cout<<"\nupdated string is : "<<arr;
}
