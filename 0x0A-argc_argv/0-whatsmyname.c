#include <stdio.h>
/**
 * main - funtion thta prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for succes
 */

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
