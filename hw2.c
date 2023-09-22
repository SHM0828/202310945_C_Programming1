#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double km = 0;
	double mile = 0;
	printf("Please enter kilometers: ");
	scanf("%lf",&km);
	mile = km/1.609;
	printf("%.1f km is equal to %.1f miles.\n",km,mile);
	return 0;
}