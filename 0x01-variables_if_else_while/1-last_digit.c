#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * 
 * Decription: 'the last digit'
 * 
 * Return: Always 0 (success)
 */

void trimleadingandTrailing(char *s)
{
	int  i, j;

	for (i = 0; s[i] == ' '  || s[i] == '\t'; i++);
	for (j = 0; s[i]; i++)
	{
		s[j++] = s[i];
	}
	s[j] = '\0';
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ' && s[i] != '\t')
			j=i;
	}
	s[j + 1] = '\0';
}
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n % 10 == 0)
                printf("Last digit of %d is %d and is 0\n", n, n % 10);
        else if (n % 10 > 5)
                printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
        else if (n % 10 < 6)
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
        return (0);
}
