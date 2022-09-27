#include<stdio.h>
int main()
{
    int a,r=0,b,rev=0,c,d=0;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;//b=9
        a=a/10;//966
        r=r*10+b;//r=9
    }
    while(r!=0)
    {
        c=r%10;//c=9
        r=r/10;//0
        if(d<1)
        {
            if(c==6)
            {
                c=9;
                d=1;
            }
        }
        rev=rev*10+c;
    }
    printf("%d",rev);
}