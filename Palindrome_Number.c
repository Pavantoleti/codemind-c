#include<stdio.h>
int main()
{
    int n,i,rem,rev=0,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    { 
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        while(arr[i]>0)
        {
            rem=arr[i]%10;
            rev=rev*10+rem;
             arr[i]=arr[i]/10;
        }
        if(temp==rev)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        rem=0;
        rev=0;
        temp=0;
        
    }
}