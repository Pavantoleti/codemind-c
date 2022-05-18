#include <stdio.h>
int getFactorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int checkStrong(int num)
{
    int digit, sum = 0;
    int temp = num;
    while(temp!=0)
    {
        digit = temp % 10;
        sum = sum + getFactorial(digit);
        temp /= 10;
    }
    return sum == num;
}
int main ()
{
    int num;
    scanf("%d",&num);
    if(checkStrong(num))
        printf("The number %d is a strong number", num);
    else
        printf("The number %d is not a strong number", num);

}