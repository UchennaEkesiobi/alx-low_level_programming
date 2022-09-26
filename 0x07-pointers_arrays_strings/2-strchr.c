#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: charaacter to check for
 *
 * Return: pointer to spot in s with c or null
 */
char *_strchr(char *s, char c)
{
	int 1 = 0;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
