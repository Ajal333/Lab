//Prime number

#include <stdio.h>

int main(void)
{
	int l; int f=0;
	printf("Enter the upper limit : ");
	scanf("%i",&l);
	for(int i = 2;i <= l;i++)
	{
		for(int j = 2;j <= i/2;j++)
		{
			if(i%j == 0)
			{
				f++;
			}
		}
		if(f == 0)
		{ 
			printf("%i\n",i);
		}
		f=0;
	}
	return 0;
}

