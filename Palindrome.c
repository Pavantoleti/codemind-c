#include <stdio.h>
int getReverse(int num, int rev)
{
    if(num == 0)
    {
        return rev;
    }
    int rem = num % 10;
    rev = rev * 10 + rem;
    return getReverse(num / 10, rev);
}
int main ()
{
    int num, reverse = 0;
    scanf("%d",&num);
    if (num == getReverse(num, reverse))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

}
