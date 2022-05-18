#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int i,c=0,s=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='z')
        {
            c++;
        }
        else if(str[i]=='o')
        {
            s++;
        }
    }
    if(c*2==s)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}