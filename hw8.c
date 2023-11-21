#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double calculate(double arr2[],double len)
{
	double average=0;
	double result=0;
	for (int i = 0; i < len; i++)
	{
		average = average+arr2[i];
	}
	average /= len;
	for (int i = 0; i < len; i++)
	{
		result += pow((arr2[i] - average), 2);
	}
	result = sqrt(result / len);
	return result;
}

int main(void)
{
	double arr[5];
	printf("Enter 5 real numbers: ");
	scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	double result = calculate(arr, 5);
	printf("Standard Deviation = %.3f",result);
	return 0;
}