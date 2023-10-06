#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number=0,Isprime=1;

	printf("Please enter a number:");
	scanf("%d", &number);

	for (int i = 2; i<=number/2; i++)
	{
		if (number % i == 0) Isprime = 0;
	}
	if (number < 2) Isprime = 0;

	if (Isprime==1) printf("It is a prime number.\n");
	else printf("It is not a prime number.\n");
	return 0;
}