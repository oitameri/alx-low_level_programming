#include "main.h"

/**
 * main - Entry point
 * 
 * Return: void
 */

int print_alphabet_x10(void)
{

	char p;
	int q = 0;

	while (q <= 9)
	{
	for (p = 'a'; p <= 'z'; p++)
	{
	_putchar(p);
	}
	_putchar('\n');
	q++
	}
	return(void);
}
