#include "main.h"

/**
 * main - Entry point
 * Description: check for alphabetic char
 * @c: the char to be checked 
 * Return: 1 for alphabetic char and 0 for other result
 */

int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
        return(0);
}
