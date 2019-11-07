//To find the sum of digits

#include<stdio.h>

int main(void)
{
    int n,t=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(n != 0)
    {
        t = n%10;
        sum = sum + t;
        n = n/10;
    }

    printf("The sum of digits is: %d\n",sum);

    return 0;
}