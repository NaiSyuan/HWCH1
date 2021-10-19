#include <stdio.h>



int main(void)
{
	printf("number	square	cube\n");
	int i;
	i = 0;

	for (i = 0; i <= 10; i++)
	{
		printf("%d	%d	%d\n" ,i, i*i, i*i*i);
	}
	return 0;
}
