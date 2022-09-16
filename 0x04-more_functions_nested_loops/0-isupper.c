#include "main.h"

/**
 * _isupper - checks if a character is uppercase or not
 * @c: character is to be tested
 * Return: 1 if true, 0 if otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}

