#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int max=-1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d",max);
}