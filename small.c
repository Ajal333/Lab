//TO print to highest and lowest number

#include<stdio.h>

int main(void)
{
    int max=0,min=0,l,temp;
    printf("Enter the length of the array: ");
    scanf("%d",&l);

    int a[l];
    printf("Enter the numbers: \n");

    for(int i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i = 0; i< l-1; k++)
    {
        for(int j = 0; j < l-i-1; i++)
        {
            if(a[ j ] > a[ j+1] ) 
            {
                temp = a[ j ];
                a[ j ] = a[ j+1 ];
                a[ j + 1] = temp;
            }
        }
    }

    printf("The highest number is %d\n",a[l-1]);
    printf("The lowest number is %d\n",a[0]);

    return 0;
}