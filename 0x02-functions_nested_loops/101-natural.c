#include <stdio.h>

/**
 * main - sum of multiples of 3, 5 to 1024
 * Description: natural numbers
 * return: Always 0 (success)
 */

int main(void)
{

	int x, y = 0;

	while (x < 1024)
	{
	if ((x % 3 == 0) || (y % 5 == 0))
	{
	y += x;
	}
	x++;
	}
	printf("%d\n", y);
	return (0);
}
