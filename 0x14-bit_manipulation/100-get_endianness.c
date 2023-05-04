#include "main.h"

/**
 * get_endianness - check a machine is small or big endian
 * Return: 1 for small, 0 for big
 */
int get_endianness(void)
{
	unsigned int s = 1;
	char *c = (char *) &s;

	return (*c);
}
