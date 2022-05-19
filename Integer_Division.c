#include<stdio.h>
int main()
{
    long long int n,q;
    scanf("%lld",&n);
    if(n<0)
    {
        q=n/10;
        if(q*10!=n)
        {
            printf("%lld",q-1);
        }
        else
        {
            printf("%lld",n/10);
        }
    }
    else
    {
        printf("%lld",n/10);
    }
}