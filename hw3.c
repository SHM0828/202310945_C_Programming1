#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4-i; j++) //space
		{
			printf(" ");
		}
		for (int k = 0; k < 1+2*i; k++) //star
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}