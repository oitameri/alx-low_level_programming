#include "shell.h"

/**
 * bfree - inafree  pointer na NULLs the address
 * @ptr: address ya pointer ikue free
 *
 * Return: 1 ikiwa freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
