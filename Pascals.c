//Pascals Triangle

#include<stdio.h>
#include<math.h>

int main(void)
{
    int l,  p;
    printf("Enter the number of rows to be print: ");
    scanf("%d",&l);
    for(int i=0;i<l;i++)
    {
         p = pow(11,i);
        printf("%d\n",p);
    }
}
