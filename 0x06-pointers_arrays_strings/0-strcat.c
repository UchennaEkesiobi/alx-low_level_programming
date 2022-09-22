#include "main.h"

/**
 * _strcat - concatenate the string pointed to by @src to the end of the string pointed to by @dest
 * @dest: string that will be appended
 * @src: string to be concatenated upon
 *
 * Return: return pointer to @dest
 */

char *_strcat(char *dest, char *src)
{

	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
