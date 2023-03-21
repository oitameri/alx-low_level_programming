#include "main"

/**
 * times_table - output 9 times table beginning at 0
 *
 * Return: empty result
 *
 */

void times_table(void)
{

	int a, b, c, d, z;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	c = a * b;
	if (c > 9)
	{
	d = c % 10;
	z = (c - d) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(z + '0');
	_putchar(d + '0');
	}
	else
	{
	if (b != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(c + '0');
	}
	}
	_putchar('\n');
	}
}
