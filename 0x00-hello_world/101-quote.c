#include <stdio.h>
#include <unistd.h>
/**
 * main - A c program that prints a line to the standard error
 * Return 1 (Success)
 */
int main(void)
{
	const char * str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fputs(str, stdout);
	return (1);
}
