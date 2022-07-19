#include<stdio.h>
int main()
{
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            c=1;
            break;
        }
    }
    if(c==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}