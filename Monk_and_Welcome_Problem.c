#include<stdio.h>
int main()
{
    int n,i,a[10],b[10],c[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
       
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
}