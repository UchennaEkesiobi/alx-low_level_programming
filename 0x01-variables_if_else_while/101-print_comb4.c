#include <stdio.h>

/**
 * main - print possible combo of 3
 *
 * Return: returns zero at the end
 */
int main(void)

{
	int i, p, n;

	for (i = 0; i <= 9; i++)

	{
		for (p = 0; p <= 9; p++)

		{
			for (n = 0; n <= 9; n++)
			{
			for (n > p && p > i)
			{
				putchar(i + '0');
				putchar(p + '0');
				putchar(n + '0');
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);

}

