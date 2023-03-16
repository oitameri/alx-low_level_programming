#include <stdio.h>
#include <unistd.h>
/**
 * main - A c program that prints a line to the standard error
 *
 * Description: 'unix simplicity'
 *
 * Return 1 (Success)
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fputs(str, stdout);
	return (1);
}
