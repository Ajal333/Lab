
//Roots of quadratic equation
#include<stdio.h>
#include<math.h>

int main(void)
{
    float a,b,c,f, r=0,r1=0,r2=0;
    printf("Let the quadratic equation be of the form ax^2 + bx +c\n");
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    printf("Enter c: ");
    scanf("%f",&c);

    f = (b*b) - (4*a*c);
    r=sqrt(f);
    if(f<0)
    {
        printf("It has imaginary roots\n");
    }
    else
    {
        r1 = (-b + r) / (2*a);
        r2 = (-b - r) / (2*a);
        printf("The two roots are: %f and %f\n",r,r2);
    }

    return 0;
}