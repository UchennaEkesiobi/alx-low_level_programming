#include <stdio.h>

/**
 * main - points all arguments it receives
 * @argc: number of arguments passed to the function
 * @argv: arguments vector pf pointers to the string
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
