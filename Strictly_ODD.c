#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,m=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0 && i%2!=0)
        {
           m=1;
        }
         if(arr[i]%2!=0 && i%2==0)
        {
            m=0;
            break;
        }
    }
    if(m==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}