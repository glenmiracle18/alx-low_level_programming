#include <stdio.h>

/**
 * main - fucntion that prints the number of arguments
 *
 * @argc: argument counter
 * @argv: arguments vector
 *
 * Return: 0
 */

int main(int argc, __attrubute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
