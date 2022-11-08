#include <stdio.h>

/**
 * main - function that print the number of argumetns passed
 * @argc: arguments counter
 * @argv: arguments vector
 * Return: always 0
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
