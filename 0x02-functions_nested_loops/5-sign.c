#include "main.h"

/**
 * main - Entry point
 *
 * Description: print_sign of a no
 * @n: Number to be checked
 * 
 * Return: -1 for negative number, 1 for positive number and 0 for any other
 */

int print_sign(int n)
{

	if (n > 0)
	{
	_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
		return (-1);
	}
	else
	{
	_putchar(48);
		return (0);
	}
}
