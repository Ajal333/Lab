// Electricity bill

#include<stdio.h>

int main(void)
{
    int u; double rate,cn;
    printf("Enter the consumer number: ");
    scanf("%lf",&cn);
    printf("Enter the units of power consumed: ");
    scanf("%d",&u);

    if(u>=0 && u<=200)
    {
        rate = 0.5 * u;
        printf("The bill is: %lf",rate);
    }
    else if(u>=201 && u<=400)
    {
        rate = 100 + (0.5 * (u-200));
        printf("The bill is: %lf",rate);
    }
    else if(u>=401 && u<=600)
    {
        rate = 230 + (0.5 * (u-400));
        printf("The bill is: %lf",rate);
    }
    else
    {
        rate = 390 + (0.5 * (u-600));
        printf("The bill is: %lf",rate);
    }

    return 0;

}