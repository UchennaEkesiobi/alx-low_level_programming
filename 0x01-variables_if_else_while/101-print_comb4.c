#include <stdio.h>

/**
 * main - print possible combo of 3
 *
 * Return: returns zero at the end
 */
int main(void)

{
	int i, p, n;

	for (i = 0; i < 8; i++)
	{
		for (p = i + 1; p < 9; p++)
		{
			for (n = p + 1; n < 10; n++)
			{
				putchar((i % 10) + '0');
				putchar((p % 10) + '0');
				putchar((n % 10) + '0');
				if (i == 7 && p == 8 && n == 9)
					continue;
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

