#include <stdio.h>

/**
 * main - fucntion that prints the number of arguments
 *
 * @argc: argument counter
 * @argv: arguments vector
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attrubute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
