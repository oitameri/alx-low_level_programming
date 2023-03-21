#include "main.h"

/**
 * main - Entry point
 * Description: checks for lowercase char 
 * Return: Always 1 or 0 for any other result
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
        return(0);
}
