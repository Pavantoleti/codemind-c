#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int i,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            c=c+str[i]-48;
        }
    }
    printf("%d",c);
}