// removing consecutive duplicate characters from a string using recursion
// eg. if input = aaannkkkkiittt  then output is "ank
#include<iostream>
using namespace std;
void remove_duplicate(char *str)
{
    if (str[0]=='\0' || str[1]=='\0')
    return;
    if(str[0]==str[1])
    {
        int i=0;
        while(str[i]!='\0')
        {
            str[i]=str[i+1];
            i++;
        }
        remove_duplicate(str);
    }
    else
    remove_duplicate(str+1);
}

int main()
{
    char str[20];
    cout<<"give a string : ";
    cin>>str;
    remove_duplicate(str);
    cout<<"updated string is : "<<str;
}
