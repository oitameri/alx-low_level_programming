#include "main.h"

/**
 * print_lst_digit - outout last digit of a no
 * Description: colors numbers and notes
 * @n: number to be treated
 * Return: Last digit of a number
 */

int print_last_digit(int n)
{

	int last_dgt;

	last_dgt = n % 10;
	if (last_dgt < 0)
	{
	last_dgt = last_dgt * -1;
	}
	_putchar(last_dgt + '0');
	return (last_dgt);
}
