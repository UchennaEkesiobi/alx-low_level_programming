#include "main.h"

/**
 * _strpbrk - stretches a string for any of the set of byte
 * @s: string to check
 * @accept: string to check against
 *
 * Return: pointer to byte in s that matches or null if no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
