#include "main.h"

/**
 * clear_bit - set value of a certain bit to 0
 * @n: pointer to number to change
 * @index: bit index to clear
 *
 * Return: 1  success, -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
