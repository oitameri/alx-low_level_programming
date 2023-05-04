#include "main.h"

/**
 * set_bit - set a bit at given index to 1
 * @n: pointer to number to change
 * @index: bit index to 1
 *
 * Return: 1 success, -1 failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
