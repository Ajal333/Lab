//  To find the maximum and minimum of the given number
#include<stdio.h>

int main(void)
{
    int max,min,l;
    printf("Enter the number of entries: ");
    scanf("%d",&l);

    int a[l];

    for(int i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }

    max = a[0];
    min = a[0];

    for(int j=1;j<l;j++)
    {
        if(a[j] > max)
        {
            max = a[j];
        }      

        if(a[j] < min)
        {
            min = a[j];
        }         
    }

    printf("The highest number is %d\n",max);
    printf("The lowest number is %d\n",min);
}