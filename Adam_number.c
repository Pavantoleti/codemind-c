#include<stdio.h>
int main()
{
    int n,rev=0,rem,temp,v,temp1,rem1,rev1=0,m;
    scanf("%d",&n);
    m=n*n;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
        v=rev*rev;
        temp1=v;
        while(v>0)
        {
            rem1=v%10;
            rev1=rev1*10+rem1;
            v=v/10;
        }
        if(m==rev1)
        {
            printf("True");
        }
        else
        printf("False");
    
}