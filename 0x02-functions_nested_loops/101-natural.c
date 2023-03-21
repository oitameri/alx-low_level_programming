#include <stdio.h>

/**
 * main - sum of multiples of 3, 5 to 1024
 * Description: natural numbers
 * return: Always 0 (success)
 */

int main(void)
{

	int i;
	int sum;
	sum = 0;

	for (i = 0; i < 10; i++)
	{
	if ((i % 3 == 0) || (i 5 % ==0))
	{
	sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
	}
}
