#include<stdio.h>
int main()
{
    int n,r,i,sum=0;
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        r=i%10;
        i=i/10;
        sum+=r;
    }
    if(n%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}