#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the last digit of the number, the number, and also show if the last digit of n is greater 5, less than 6 or equal 0
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	1 = n % 10;

	if (1 > 5)
	{ 
		printf("Last digit of %d is %d and is greater than 5\n", n, 1);
	}
	else if (1 == 0)
		printf("Last digit of %d is %d and is 0\n", n, 1);
	else 
	{
		printf("Last digit of %d is %d and is 6 and not 0\n", n, 1);
	}
	return (0);
}


