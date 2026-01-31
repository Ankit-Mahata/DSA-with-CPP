// to replace the occuranace of a specif character with a word
/* if input="ankit" , char= a , and replacing string is ram then output is 
ramkit */
#include<iostream>
#include<cstring>
using namespace std;
void replace_char(char *str1, char *str2, char chr)
{
    int len1=strlen(str1);
    int len2=strlen(str2);
    if(len1==0)
    return;
    if(str1[0]==chr)
    {
        for(int i=len1; str1[i]!=chr; i--)
        {
            str1[i+(len2-1)]=str1[i];
        }
        for(int i=0; i<len2; i++)
        {
            str1[i]=str2[i];
        }
    }
    replace_char(str1+1,str2,chr);
}
int main()
{
    char str1[20];
    char str2[10];
    char chr;
    cout<<"give a string : ";
    cin>>str1;
    cout<<"\ngive a character that should be replaced : ";
    cin>>chr;
    cout<<"\ngive a string that replace the character : ";
    cin>>str2;
    replace_char(str1,str2,chr);
    cout<<"\n updated string is : "<<str1;
}