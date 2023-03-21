#include <stdio.h>

/**
 * main - sum of multiples of 3, 5 to 1024
 * Description: natural numbers
 * return: Always 0 (success)
 */

int main(void)
{

	int i;
	int s;
	s = 0;

	for (i = 0; i < 10; i++)
	{
	if ((i % 3 == 0) || (i % 5 ==0))
	{
	s = s + i;
	}
	printf("%d\n", s);
	return (0);
	}
}
