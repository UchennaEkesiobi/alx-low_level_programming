#include <stdio.h>

/**
 * main - print possible combination of 2-digit
 * numbers
 *
 * Return: returns zero at the end
 */
int main(void)
{
	int i, p;

	for (i = 0; i < 98; i++)
	{
		for (p = i + 1; p < 99; p++)
		{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((p / 10) + '0');
				putchar((p % 10) + '0');
				if (i == 98 && p == 98)
					continue;
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}

