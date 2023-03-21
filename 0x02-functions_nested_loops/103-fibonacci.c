#include <stdio.h>

/**
 * main - output summation of even fibonacci nos below 4m
 * Return: nothing
 */

int main(void)
{

	int w = 0;
	long x = 1, y = 2, sum = z;

	while (x + y < 4000000)
	{
	z += x;
	if (z % 2 == 0)
		sum += z;
	x = y - x;
	++w;
	}
	printf("%ld\n", sum);
	return (0);
}
