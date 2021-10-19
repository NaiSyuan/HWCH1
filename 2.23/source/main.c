#include <stdio.h>


int main(void)
{
	int num1;
	int num2;
	int num3;

	printf("請輸入三個整數:");

	scanf_s("%d%d%d",&num1, &num2, &num3);

	if ((num1 >= num2 && num2 > num3) || (num1 > num2 && num2 >= num3))
	{
		printf("%d is the largest %d is the smallest", num1, num3);
	}
	if ((num1 >= num3 && num3 > num2) || (num1 > num3 && num3 > num2))
	{
		printf("%d is the largest %d is the smallest", num1, num2);
	}
	if ((num2 > num1 && num1 > num3) || (num2 > num1 && num1 >= num3))
	{
		printf("%d is the largest %d is the smallest", num2, num3);
	}
	if ((num2 >= num3 && num3 > num1) || (num2 > num3 && num3 > num1))
	{
		printf("%d is the largest %d is the smallest", num2, num1);
	}
	if ((num3 > num1 && num1 > num2) || (num3 > num1 && num1 >= num2))
	{
		printf("%d is the largest %d is the smallest", num3, num2);
	}
	if ((num3 >num2 && num2 > num1) || (num3 > num2 && num2 > num1))
	{
		printf("%d is the largest %d is the smallest", num3, num1);
	}
}