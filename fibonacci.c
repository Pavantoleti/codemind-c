#include<stdio.h>
int getFib(int n)
{
    
    if(n<=1)
    {
        return n;
    }    
    return getFib(n-1) + getFib(n-2);
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",getFib(i));
    }
    return 0;
}