// Sine and cosine series

#include<stdio.h>
#include<math.h>

double fact(double);
int main(void)
{
    int c,l; float x; double t=0, sum=0 , rad=0;
    printf("1. Sine series\n");
    printf("2. Cosine series\n");

    printf("Enter your choice: ");
    scanf("%d",&c);

    printf("Enter the value of 'x' in degrees: ");
    scanf("%f",&x);

    printf("Enter the limit of the series: ");
    scanf("%d",&l);

    rad = (3.14159 / 180) * x;

    if(c == 1)
    {
        for(int i=1;i<=l;i=i+2)
        {
            t = pow(-1,i+1) * (pow(rad,i)/fact(i));
            sum = sum + t; 
        }
    }

    else if(c == 2)
    {
        sum = sum + 1;
        for(int i=2;i<=l;i=i+2)
        {
            t = pow(-1,i+1) * (pow(rad,i)/fact(i));
            sum = sum + t; 
        }
    }

    printf("The sum is: %lf\n",sum);
}

double fact( double n)
{
    double f;
    for(int i=1;i<=n;i++)
    {
        f = f*i;
    }
    return f;
}