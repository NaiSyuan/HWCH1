#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, num3;

	printf("��J�Ĥ@�Ӽƭ�:");
	scanf_s("%d", &num1);

	printf("��J�ĤG�Ӽƭ�:");
	scanf_s("%d", &num2);

	num3 = num1 % num2;

	if (num1 >= num2)
	{
		if (num3 == 0)
		{
			printf("�Ĥ@�ӼƭȬO�ĤG�ӼƭȪ�����");
		}
		else
		{
			printf("�Ĥ@�ӼƭȤ��O�ĤG�ӼƭȪ�����");
		}
	}
	if (num2 >= num1)
	{
		printf("�Ĥ@�ӼƭȤ��O�ĤG�ӼƭȪ�����");
	}

	return 0;
}