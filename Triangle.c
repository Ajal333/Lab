//to print the area of triangle and rectangle

#include<stdio.h>

int main(void)
{
    int choice,alt,b,w,len; double area=0,  area1=0;
    printf("Calculate the area of:\n");
    printf("1. Triangle\n");
    printf("2. Rectangle\n");
    printf("Choose your option: ");
    scanf("%d",&choice);

    if(choice == 1)
    {
        printf("Enter the altitude length: ");
        scanf("%d",&alt);
        printf("Enter the breadth: ");
        scanf("%d",&b);

        area = (alt*b)/2;

        printf("The area of the rectangle is: %lf\n",area);
    }

    else if(choice == 2)
    {
        printf("Enter length: ");
        scanf("%d",&len);

        printf("Enter the breadth: ");
        scanf("%d",&w);

        area1 = len * w;

        printf("Area of the rectangle is: %lf\n",area1);
    }

    else
    {
        printf("Wrong entry");
    }

    return 0;
}
    