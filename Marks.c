//to print the total and percentage of marks scored

#include<stdio.h>

int main(void)
{
    double mark1,mark2,mark3,mark4,mark5,tot=0,per=0;
    printf("Enter the mark in 5 subjects: \n");
    scanf("%lf",&mark1);
    scanf("%lf",&mark2);
    scanf("%lf",&mark3);
    scanf("%lf",&mark4);
    scanf("%lf",&mark5);

    tot = mark1 + mark2+ mark3+ mark4 + mark5;
    per = (tot/500)*100;

    if(per >= 75)
    {
        printf("Your percentage is: %lf\n",per);
        printf("Your total is: %lf\n",tot);
        printf("You have secured First class with distinction\n");
    }
    else if(per >= 60)
    {
        printf("Your percentage is: %lf\n",per);
        printf("Your total is: %lf\n",tot);
        printf("You have secured First class\n");
    }
    else if(per >= 50)
    {
        printf("Your percentage is: %lf\n",per);
        printf("Your total is: %lf\n",tot);
        printf("You have secured Second Class\n");
    }
    else
    {
        printf("Your percentage is: %lf\n",per);
        printf("Your total is: %lf\n",tot);
        printf("You have Failed\n");
    }

    return 0;
}