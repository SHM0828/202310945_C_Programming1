#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int nums[5];
	printf("Please input five integers: ");
	scanf("%d %d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);
	printf("\nOdd numbers: ");
	for (int i = 0; i < 5; i++)
	{
		if(nums[i]%2==1)printf("%d ", nums[i]);
	}
	printf("\nEven numbers: ");
	for (int i = 0; i < 5; i++)
	{
		if (nums[i] % 2 == 0)printf("%d ", nums[i]);
	}
	return 0;
}