#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int arr[2],j;
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[j]);
        }
        printf("%d
",arr[0]+arr[1]);
    }
}