#include<stdio.h>
int main()
{
    char str[200];
    scanf("%[^
]s",str);
    int i;
    printf("Hello Technicalhub
");
    for(i=0;str[i]!=NULL;i++)
    {
        printf("%c",str[i]);
    }
}