#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/**
 * main - Entry point
 * Decription: 'the last digit'
 * Return: Always 0 (success)
 */

void trim(char *s);

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
        trim(s);
        printf("\nAfter:\n\n");
        printf("%s, s");
        return (0);
}

void trim(char *s)
{
        int i = strlen(s) - 1;

        while (i > 0)
        {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t') i--;
        else break;
        }
        s[i + 1] = '\0';
}

