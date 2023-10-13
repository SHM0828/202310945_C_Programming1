#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int tobinary(int in1)
{
	if (in1 == 0);
	else if (in1 != 1) tobinary(in1/2);
	printf("%d", in1%2);
	return 0;
}

int main(void)
{
	int number;
	printf("Please enter a number: ");
	scanf("%d", &number);
	tobinary(number);
	return 0;
}