//SImple calculator
#include<stdio.h>

int main(void)
{
    int choice; double n1,n2,sum=0,dif=0,pro=0,quo=0;
    printf("MENU\n");
    printf("1. Addition\n");
    printf("2. Subtraction(ablsolute value)\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    printf("Enter the two numbers: \n");
    scanf("%lf",&n1);
    scanf("%lf",&n2);

    switch(choice)
    {
        case 1: sum = n1 + n2;
        printf("The sum is: %lf\n",sum);
        break;

        case 2: if(n1>n2){
            dif = n1 - n2;
        }
        else
        {
            dif = n2-n1;
        }
        
        printf("The sum is: %lf\n",dif);
        break;

        case 3: pro = n1 * n2;
        printf("The sum is: %lf\n",pro);
        break;

        case 4: if(n1 == 0 || n2 == 0)
        {
            printf("Division with 0 is not possible\n");
            break;
        }
        quo = n1 / n2;
        printf("The sum is: %lf\n",quo);
        break;

        default: printf("Wrong input\n");
    }
}