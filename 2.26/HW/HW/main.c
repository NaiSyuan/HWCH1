#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, num3;

	printf("块材计:");
	scanf_s("%d", &num1);

	printf("块材计:");
	scanf_s("%d", &num2);

	num3 = num1 % num2;

	if (num1 >= num2)
	{
		if (num3 == 0)
		{
			printf("材计琌材计计");
		}
		else
		{
			printf("材计ぃ琌材计计");
		}
	}
	if (num2 >= num1)
	{
		printf("材计ぃ琌材计计");
	}

	return 0;
}