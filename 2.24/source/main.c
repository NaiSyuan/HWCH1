#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("輸入一個數字:");
	scanf_s("%d", &num1);

	num2 = num1 % 2;

	if (num2 == 0)
	{
		printf("it is even");
	}
	if (num2 == 1)
	{
		printf("it is odd");
	}
}