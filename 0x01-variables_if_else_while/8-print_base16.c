#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;
	char j;

	i = 'a';
	j = 0;
	while
		(j < 10)
		{
			putchar(j + '0');
			j++;
		}
	while
		(i <= 'f')
		{
			putchar(i);
			i++;
		}
	putchar('\n');
	return (0);
}
