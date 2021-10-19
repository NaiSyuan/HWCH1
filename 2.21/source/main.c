#include <stdio.h>
#include <stdlib.h>
#define N 7

int main()
{
	int i = 0, j = 0; 
	printf("*********\n");

	for(i = 1; i <=N; i++)
	{
		printf("*");

		for (j = 1; j<=7; j++)
		{
			printf(" ");
		}

		printf("*");

		printf("\n");
	}
	printf("*********");
	

	printf("\n\n   ***   \n *     * \n*       *\n*       *\n*       *\n*       *\n*       *\n *     * \n   ***   \n");

	printf("\n\n  *  \n *** \n*****\n  *  \n  *  \n  *  \n  *  \n  *  \n  *  \n");
	
	printf("\n\n    *    \n   * *   \n  *   *  \n *     * \n*       *\n *     * \n  *   *  \n   * *   \n    *    \n");
	return 0;

}

