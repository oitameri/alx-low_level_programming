#include "main.h"

/**
 * _abs - Compute the absolute value of int
 * @c: Computed number
 * Return: 0 or absolute value
 */

int _abs(int c)
{

	if (c < 0)
	{
	int absolute_value;

	absolute_value = c * -1;
	return (absolute_value);
	}
	return (c);
}
