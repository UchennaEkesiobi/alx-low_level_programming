#include "main.h"

/**
 * _strcmp - which compare the strings
 * @s1 - first string
 * @s2 - second string
 * Return: 
 * Returns zero if s1 ==s2
 * Returns negative number if s1 < s2
 * Returns negative number if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, r = 0, lim;


	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}
	
	if (a <= b)
	{
		lim = a;
	}
	else
	{
		lim = b;
	}

	while (c <= lim)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			r = s1[c] - s2[c];
			break;
		}

		c++;
	}
	return (r);
}
