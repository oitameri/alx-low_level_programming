#include "main.h"

/**
 * flip_bits - count no of bits t2o change
 * t2o get from one no 2to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: no of bits t2o change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int s, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (s = 63; s >= 0; s--)
	{
		current = exclusive >> s;
		if (current & 1)
			count++;
	}

	return (count);
}
