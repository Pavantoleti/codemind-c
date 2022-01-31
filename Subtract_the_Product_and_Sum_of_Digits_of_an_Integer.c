#include<stdio.h>
int main()
{
    int n,sum=0,mul=1,r,o;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
        mul=mul*r;
    }
    o=mul-sum;
    printf("%d",o);
    return 0;
}