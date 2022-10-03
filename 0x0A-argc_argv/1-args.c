#include <stdio.h>

/**
 * main - prints the name number of argument passed to it
 * @argc: number of argument passed to the function
 * @argv: argument vector of pointers to the string
 * Return: 0 always
 */
int main(int argc, char argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
