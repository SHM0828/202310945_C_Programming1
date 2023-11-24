#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char string1[50] = "0", string2[50] = "0";
	int gap = 'a' - 'A';
	printf("Input> ");
	scanf_s("%[^\n]s", string1, sizeof(string1));
	for (int i = 0; i < sizeof(string1); i++)
	{
		if (string1[i] >= 'A' && string1[i] <= 'Z') string2[i] = string1[i] + gap;
		else if (string1[i] >= 'a' && string1[i] <= 'z') string2[i] = string1[i] - gap;
		else string2[i] = string1[i];
	}
	printf("Output> %s", string2);
}