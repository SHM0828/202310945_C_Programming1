#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int var1,var2;
	printf("Input two integers: ");scanf("%d %d", &var1, &var2);	/// ���� �ΰ� �Է¹ޱ�
	printf("%d & %d = %d\n", var1, var2, var1 & var2);				/// AND
	printf("%d | %d = %d\n", var1, var2, var1 | var2);				/// OR
	printf("%d ^ %d = %d\n", var1, var2, var1 ^ var2);				/// XOR
	return 0;
}